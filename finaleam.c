#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,uniqe=0;
    scanf("%d ",&N);
    char S[N];
    fgets(S, sizeof(S), stdin);


    for(int i=0; i<N; i++)
    {
        int temp =0;
        for(int j=0; j<N; j++)
        {
            if(S[i]==S[j])
            {

                temp++;
            }
        }
        printf("----> %c = %d \n",S[i],temp);
        if(temp < 2)
            uniqe++;
    }

    printf("%d",uniqe);
    return 0;
}
