#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int s,i,j=0;
    int *result=(int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
           s=nums[i]+nums[j];
              if ( s== target) {
                  * returnSize=2;
                    result[0]=i;
                    result[1]=j;
                     return result;
                     } 
         }
        }
            *returnSize=0;
             return 0; 
}
