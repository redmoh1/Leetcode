typedef struct node {
    char data;
    struct node* next;
} node;

void push(char l, node** head) {
    node* e = (node*)malloc(sizeof(node));
    e->data = l;
    e->next = *head;
    *head = e;
}

bool pop(node** head, char expected) {
    if (*head == NULL) {
        return false;
    }
    if ((*head)->data != expected) {
        return false;
    }
    node* t = *head;
    *head = t->next;
    free(t);
    return true;
}

bool isValid(char* s) {
    node* head = NULL;  

    int size = strlen(s);
    for (int i = 0; i < size; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(s[i], &head);
        } else if (s[i] == ')') {
            if (!pop(&head, '(')) return false;
        } else if (s[i] == '}') {
            if (!pop(&head, '{')) return false;
        } else if (s[i] == ']') {
            if (!pop(&head, '[')) return false;
        }
    }

    if (head == NULL) return true; 
    return false; 
}

