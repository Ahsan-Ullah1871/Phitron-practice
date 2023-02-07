#include <stdio.h>

int main()
{
    int N,Numeric_value;
    printf("Enter your word length: \n");
    scanf("%d",&N);
    char word[N];
    printf("Enter your word: \n");
    scanf("%s",&word);
    printf("Enter your changing numeric number: \n");
    scanf("%d",&Numeric_value);

     for(int i = 0; i<N;i++)
     {
         int ascii_value = word[i] + Numeric_value;
         //printf("--> %d \n",ascii_value);

         if(ascii_value>122)
            word[i]= 96+(ascii_value-122);
         else
            word[i]= ascii_value;

     }


   printf("%s",word);
}
