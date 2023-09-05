// instead of declaring multiple variables , we can use array of structure , so each elements of array represents struct variables

#include<stdio.h>
struct car
{
    int fuel;       //details input
    int seat;
};
int main()
{
    struct car c[2];        // 0,1,2  array declaration 
    int i;
    
    for(i=0 ; i<2 ; i++)        //details
    {
        printf(" fuel %d",i+1);                        // fuel
        scanf("%d",&c[i].fuel);
        
        printf(" seat %d",i+1);                        // seat
        scanf("%d",&c[i].seat);

    }
    for(i=0 ; i<2 ; i++)
    {
        printf(" Car details %d\n",i+1);        // car 1, car 2
        printf("fuel = %d\n", c[i].fuel);
        printf("seat = %d\n ",c[i].seat);
    }
    
}
