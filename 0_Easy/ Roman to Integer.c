int romanToInt(char* s) {
    int l=0;
    for(int i=0;i<=strlen(s);i++){
        if(s[i]=='I'){
                if(s[i+1]=='V'){
                    l=l+4;
                    i++;
                } 
                else if (s[i+1]=='X'){
                    l=l+9; 
                    i++;

                } 
                else if (s[i+1]=='L') {
                l=l+49;
                i++;}
                else if (s[i+1]=='C'){
                 l=l+99;
                 i++;}
                else if (s[i+1]=='D') {
                l=l+499;
                i++;}
                else if (s[i+1]=='M'){
                 l=l+999;
                 i++;}
                 else  l=l+1;
        }
        else if(s[i]=='V'){
                if(s[i+1]=='X'){
                 l=l+5;
                 i++;}
                else if (s[i+1]=='L') {
                l=l+45;
                i++;}
                else if (s[i+1]=='C') {
                l=l+95;
                i++;}
                else if (s[i+1]=='D'){
                 l=l+495;
                 i++;}
                else if (s[i+1]=='M') {
                l=l+995;
                i++;}
                 else  l=l+5;
            }
        else if(s[i]=='X'){
                if(s[i+1]=='L'){
                 l=l+40;
                 i++;}
                else if (s[i+1]=='C'){
                 l=l+90;
                 i++;}
                else if (s[i+1]=='D'){
                 l=l+490;
                 i++;}
                else if (s[i+1]=='M'){ 
                l=l+990;
                i++;}
                else l=l+10;   
                }
        else if(s[i]=='L' ) {
                if(s[i+1]=='C') {
                l=l+50;
                i++;}
                else if (s[i+1]=='D') {
                l=l+450;
                i++;}
                else if (s[i+1]=='M') {
                l=l+950;
                i++;}
             else  l=l+50;
              } 
        else if(s[i]=='C') {
                if(s[i+1]=='D'){
                 l=l+400;
                 i++;}
                else if (s[i+1]=='M') {
                l=l+900;
                i++;}
                else  l=l+100;
            }
        else if(s[i]=='D'){
               if(s[i+1]=='M'){
                l=l+500;i++;
            }
            else l=l+500;
        }
        else if(s[i]=='M') l=l+1000;
      
    }
    return l;
}
