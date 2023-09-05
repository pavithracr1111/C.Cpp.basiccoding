//using pointers + array + call by reference


#include<stdio.h>
int minMax(int a[],int len,int *min,int *max)
{
    *min = *max =a[0];
    int i;
    for(i=1 ; i<len ; i++)
    {
        if(a[i]<*min)
            *min=a[i];
        if(a[i]>*max)
            *max=a[i];
    }
    return 0;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("min = %d \n max = %d",min,max);
}