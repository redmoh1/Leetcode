bool isPalindrome(int x) {
    if(x<0) return false;
    int l=x,r;
    long long int rvrs=0;
    while(l !=0){
        r=l%10;
        rvrs=rvrs*10+r;
       l=l/10;
    }
    if(rvrs==x) return true;
    else return false;
    
    
    return 0;
}