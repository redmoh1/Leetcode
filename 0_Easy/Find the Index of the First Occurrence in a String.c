int strStr(char* haystack, char* needle) {
    int n=0;
   int St=strlen(haystack);
    int s=strlen(needle);
    int j=0;
    for(int i=0;i<=St-s;i++){
        for( j=0;j<s;j++){
           if( haystack[i+j]==needle[j]){
            n++;
           }
           
    } if (n==s)return i;
    else n=0;
    }
    return -1;
}