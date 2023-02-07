#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


   int T;
    scanf("%d",&T);
    for(int i = 0; i<T; i++)
    {
        int N,count=0;
        scanf("%d",&N);
        char S[N];
        for(int i =0 ;i<=N;i++)
        {
          scanf("%c",&S[i]);
        }

       int length = strlen(S);
       for(int j=0; j <=length;j++)
        {
            printf("---> %c \n",S[j]);
            if((S[j]== '0' && S[j+1]=='1') ||(S[j]=='1' && S[j+1]=='0'))
              {  count +=1;}
        }

        printf("%d\n",count);
    }
    return 0;
}
