#include<stdio.h>
struct car
{
    int fuel;       //details input
    int seat;
};
int main()
{
    struct car c[2];        // 0,1,2
    int i;
    for(i=0 ; i<2 ; i++)        //details
    {
        printf(" fuel %d",i+1);
        scanf("%d",&c[i].fuel);
        printf(" seat %d",i+1);
        scanf("%d",&c[i].seat);

    }
    for(i=0 ; i<2 ; i++)
    {
        printf(" Car details %d\n",i+1);        // cars
        printf("fuel = %d\n", c[i].fuel);
        printf("seat = %d\n ",c[i].seat);
    }
    
}