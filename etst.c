#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d",&N);
    int A[N];
    int Temp = 0;

    for(int i = 0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i = 0; i<N; i++)
    {
        for(int j = 1; j<N; j++)
        {
            if(j!=1)
            {
              printf("----> %d ---> %d \n",A[i],A[j]);
                if((A[i]+A[j])>Temp && (A[i]+A[j])%2==0)
                {
                    Temp= A[i]+A[j];
                }
            }
        }
    }



    printf("%d",Temp);

    return 0;
}
