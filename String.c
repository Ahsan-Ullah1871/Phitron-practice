#include<stdio.h>
int main()
{
    char sen[15];

    fgets(sen,sizeof(sen),stdin);
    int i,counter=0;


    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i]=='a' ||sen[i]=='e' ||sen[i]== 'i'||sen[i]=='o'|| sen[i]=='u' )
         {
         printf("ch---> : %c \n",sen[i]);
                counter++;
          }
    }
    printf("Total vowel : %d",counter);

    return 0;
}
