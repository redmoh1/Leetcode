char* longestCommonPrefix(char** strs, int strsSize) {
      if (strsSize == 0) {
        return "";
    }
      if (strsSize == 1) {
        return strs[0];
    }
    for(int y=0;y< strsSize;y++){
        if(strs[y][0]=='\0'){
            return "";
        }
    }
    int s;
    int n=0;
    int min=strlen(strs[0]);
    for ( int k =1; k<strsSize; k++)
    {
        if(min>strlen( strs[k])){
            min=strlen( strs[k]);
        }
    }
    
    if (strsSize > 1 && strs[0][0] != strs[1][0]) {
        return "";
    }
        char *p=(char*)malloc(min+1);  
        for(int i=0;i<min;i++){
            for(int j=1;j< strsSize;j++){
               if(strs[0][i]==strs[j][i]){
                p[i]=strs[j][i];
                }else {p[i]='\0';
                 return p;}
            }
        }
        p[min]='\0';
        return p;
        
}
