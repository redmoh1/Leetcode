double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if(nums1Size==0 && nums2Size==0) return 0;
    double s=nums1Size+nums2Size;
    int t=nums1Size+nums2Size;
    double *p=(double*)malloc(s*sizeof(double));
    if(nums1Size==0){
        if(nums2Size<=1)return nums2[0];
    for(int j=0;j< nums2Size;j++){
     p[nums1Size+j]= nums2[j];
    }
   } else if(nums2Size==0){
    if(nums1Size<=1)return nums1[0];
        for(int i=0;i<nums1Size;i++){
      p[i]= nums1[i];
 }
 }
else{
    for(int i=0;i<nums1Size;i++){
      p[i]= nums1[i];
    }
    for(int j=0;j< nums2Size;j++){
     p[nums1Size+j]= nums2[j];
    }
}
    double temp;
  for(int k=0;k<s-1;k++){ 
       for(int u=k+1;u<s;u++){
           if (p[k]>p[u])
           {
            temp=p[k];
            p[k]=p[u];
            p[u]=temp;
            
           }
       }
    }
  if(t%2!=0){
    t--;
    t=t/2;
    return p[(t)];
  }else{
    t--;
    t=t/2;
    return (p[(t)]+p[t+1])/2;
 }
}
