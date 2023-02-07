
#include<stdio.h>
int main()
{
    char sen[100];

    fgets(sen,sizeof(sen),stdin);
    int i,counter=0;
    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i]>='a' && sen[i]<='z')
            sen[i] -=32;

    }
    puts(sen);



    return 0;
}
