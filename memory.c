#include<stdio.h>
#include <string.h>


char string_desing_order(char String_input[])
{

    for(int i=0; i<strlen(String_input); i++)
    {
        for(int j = i+1; j<strlen(String_input); j++)
        {
            int x = String_input[i];
            int y = String_input[j];
              if(y>x)
            {
                char tmp =  String_input[i] ;
                String_input[i] = String_input[j];
                String_input[j]= tmp;


            }
        }
    }
}

int main()
{
    int N;
    printf("Enter your string length: \n");
    scanf("%d",&N);
    char String_input[N];
    printf("Enter your string: \n");
    scanf("%s",&String_input);


    string_desing_order(String_input);

    puts(String_input);


}
