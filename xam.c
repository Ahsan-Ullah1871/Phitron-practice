#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int get_gcd(int x, int y)
{

    int gcd;

    for(int i=1; i <= x && i <= y; ++i)
    {
        // Checks if i is factor of both integers
        if(x%i==0 && y%i==0)
            gcd = i;
    }
    printf("----> %d \n" ,gcd);


    return  gcd;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d",&T);

    for(int i =0; i<T; i++)
    {

        int N,gcd_sum;
        scanf("%d",&N);
        int A[N];

        for(int j =0; j<N; j++)
        {
            scanf("%d",&A[j]);
        }

        for(int k =0; k<N; k++)
        {
            for(int l =0; l<N; l++)
            {

                if(l != k)
                {
                    if(get_gcd(A[l],A[k]) ==1)
                    {
                        gcd_sum ++;
                    }
                }
            }
        }

        printf("%d \n",gcd_sum);
    }

    return 0;
}

