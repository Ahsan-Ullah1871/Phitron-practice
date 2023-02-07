#include<stdio.h>
#include <stdbool.h>


void box_art(int arr[][3],int n)
{
    printf("\n");
    for(int i =0 ; i<n; i++)
    {
        for(int j =0 ; j<n; j++)
        {
            if(arr[i][j]==1)
                printf("X");
            else if(arr[i][j]==2)
                printf("0");
            else
                printf(" ");
            if(j<n-1)
            {
                printf("\t|\t");
            }
        }
        if(i<n-1)
        {
            printf("\n__________________________________\n");
        }

    }

    printf("\n");
}

int is_win(int arr[][3],int n)
{
    for(int i =0 ; i<n; i++)
    {
        if(arr[i][0]==arr[i][1]&& arr[i][1]==arr[i][2])
            return arr[i][0];
    }

    for(int i =0 ; i<n; i++)
    {
        if(arr[0][i]==arr[1][i]&& arr[1][i]==arr[2][i])
            return arr[0][i];
    }

    if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])
        return arr[0][0];
    if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])
        return arr[0][2];





    bool is_fill= true;
    for(int i =0 ; i<n; i++)
    {

        for(int j =0 ; j<n; j++)
        {
            if(arr[i][j]!=0)
            {
                is_fill = true;
            }
            else
            {
                is_fill= false;
                break;
            }
        }

        if(i==2 && is_fill)
        {
            return 3;
        }

    }



    return 0;
}

int main()
{
    int n= 3;
    int a[3][3]= {0};

    //Initial Box set

    bool play_1=true;
    bool play_2 =false;


    while(true)
    {

        box_art(a,3);

        if(play_1)
        {
            int x,y;

Flag:
            printf("Player 1 (X) term:(write row and cloumn number):");
            scanf("%d %d",&x,&y);
            if(a[x-1][y-1]!=0)
            {
                printf("!!!INVALID , input again ...\n");
                goto Flag;
            }
            else if (x>3 || y>3)
            {
                printf("!!!INVALID , input again ...\n");
                goto Flag;
            }
            else
            {
                a[x-1][y-1]=1;
            }

            play_1=false;
            play_2=true;

            if(is_win(a,n)!=0)
            {
                if (is_win(a,n)==1)
                    printf("Player 1 win");
                else if (is_win(a,n)==2)
                    printf("Player 2 win");
                else
                    printf("Same same");

                box_art(a,3);
                break;

            }

        }
        else
        {
            int x,y;
Flag2:
            printf("Player 2 (O) term:(write row and cloumn number):");
            scanf("%d %d",&x,&y);
            if(a[x-1][y-1]!=0)
            {
                printf("!!!INVALID , input again ...\n");
                goto Flag2;
            }
            else if (x>3 || y>3)
            {
                printf("!!!INVALID , input again ...\n");
                goto Flag;
            }
            else
            {
                a[x-1][y-1]=2;
            }
            play_2=false;
            play_1=true;

            if(is_win(a,n)!=0)
            {
                if (is_win(a,n)==1)
                    printf("Player 1 win");
                else if (is_win(a,n)==2)
                    printf("Player 2 win");
                else
                    printf("Same same");

                box_art(a,3);
                break;

            }
        }
    }

}
