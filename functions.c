#include<stdio.h>

int get_gcd(int a, int b)
{

    for(int i=a;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
            break;
        }


    }
}
int main()
{
    int x= get_gcd(4,8);
    printf("GET----GCD %d \n",x);

    return 0;
}
