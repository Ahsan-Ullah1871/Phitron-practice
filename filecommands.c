#include<stdio.h>

int main()
{
    int x,y;
    //scanf("%d %d",&x,&y);

    FILE *inputValue;
    inputValue = fopen("input.txt","r");

    FILE *outputValue;
    outputValue = fopen("output.txt","w");

 int n;
 fscanf(inputValue,"%d",&n);

 int sum;
 for(int i =0 ; i<n;i++)
 {
     int a;
     fscanf(inputValue,"%d",&a);
     sum += a;
 }

 fprintf(outputValue,"Sum--->:%d",sum);



    return 0;

}
