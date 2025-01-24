#include<stdio.h>
  #include<stdlib.h>
//int main(){
int* twoSum(int* nums, int numSize, int target, int* returnSize) 
{
    int *arr=malloc(2*sizeof(int));
    arr[0]=0;
    arr[1]=1;
int i,j;
scanf("%d %d",&i,&j);
for (i=0;i<numSize;i++)
{
    for (j=i+1;j<numSize;j++)
    {
        if(nums[i]+nums[j]==target)
        {
            *returnSize=2;
            arr[0]=i;
            arr[1]=j;
            return arr;
        }
    }
}
*returnSize=0;
return 0;
free(arr);
}