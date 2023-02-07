#include<stdio.h>


char grade (int mark)
{


    if(mark < 40)
        return 'F';
    else if(mark < 60)
        return 'C';
    else if(mark < 80)
        return 'B';
    else
        return 'A';

}
int main()
{
   int Mark;
   printf("Enter Student mark: \n");
   scanf("%d",&Mark);

   printf("%c",grade(Mark));



    return 0;
}
