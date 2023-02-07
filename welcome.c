#include<stdio.h>
int main()
{
    //first task

    printf("Hi there /\. \t  I hope you are ding great and practice well. \nNow this is a simple task you need to do. \t Just care of the identation. \nShow 100%% of scincereity");

    //2nd task
    int a,b;
    a = 10;
    b = 20;

    printf("\n%d %d",b,a);

    //3rd task
    int positive_int;
    printf("\nEnter a positive int number: \n");
    scanf("%d",&positive_int);
    printf("\nMultiple of positive int number : %d \n",positive_int*2);

    //4th task
    int first_number,second_number;

    printf("\nEnter 2 number: \n");
    scanf("%d",&first_number);
    scanf("%d",&second_number);
    printf("\nSummation, subtraction ,multiplication of your 2 numbers : %d %d %d \n",first_number+second_number,first_number-second_number,first_number*second_number);


    //5th task
    char char_input;
    printf("\nEnter a  chararacter : \n");
    scanf("%c",&char_input);
    printf("\nASCII code of your character : %d \n",char_input);

   //5th task
    int x;
    char y;
    printf("\nEnter a  number with %% : \n");
    scanf("%d,%c",&x,&y);
    printf("\nJust Number without %% : %d \n",x);





}
