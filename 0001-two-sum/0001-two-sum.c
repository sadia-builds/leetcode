/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
 #include <stdlib.h>
 

int* twoSum(int* nums, int n, int target, int* size)

 {
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if((nums[i]+nums[j])==target)
        { 
           int  *result=malloc(2*sizeof(int));
           result[0]=i;
           result[1]=j;
           *size=2;
           return result;
            
        }
    }

}  
*size = 0;

    return NULL;  
}

