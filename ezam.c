#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int arra1[N][M];
    int arra2[N][M];
    int arra3[N][M];

    printf("Input 1st matrix: \n");

    for(int i = 0 ; i<N; i++)
    {
        for(int j = 0 ; j<M; j++)
        {
            scanf("%d",&arra1[i][j]);
        }
    }


     printf("Input 2nd matrix: \n");

    for(int i = 0 ; i<N; i++)
    {
        for(int j = 0 ; j<M; j++)
        {
            scanf("%d",&arra2[i][j]);
        }
    }

     printf("Sum of Matrix 1 and matrix 2 : \n");

    for(int i = 0 ; i<N; i++)
    {
        for(int j = 0 ; j<M; j++)
        {
            arra3[i][j] = arra1[i][j]+ arra2[i][j];
        }
    }

     for(int i = 0 ; i<N; i++)
    {
        for(int j = 0 ; j<M; j++)
        {
           printf("%d ", arra3[i][j]);
        }
        printf("\n");
    }




}

