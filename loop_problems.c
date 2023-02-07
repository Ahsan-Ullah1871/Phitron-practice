#include<stdio.h>
int main()
{
    int bus_j;
    printf("Enter total number of jatri \n");
    scanf("%d",&bus_j);

    int total_weight=0;
    for( int i=1;i<=bus_j;i++)
    {
        printf("Enter weight of jatri number: %d \n",i);
        int weight;
        scanf("%d",&weight);
        total_weight = total_weight + weight;

    }

    printf("Total weight: %d \n",total_weight);


    return 0;

}
