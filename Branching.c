#include<stdio.h>
int main()
{
    // first work
  int x;
  printf("Pelase enter a number");
  scanf("%d",&x);

  if(x%2==0)
  {
    printf("The input is even number \n");
  }
  else
  {
   printf("The input is not even number \n");
  }


  // 2nd work
  int y,z;
  scanf("%d %d",&y,&z);
  if(y>z)
  {
      printf("y is largest");

  }
  else
  {
      if(z>y)
      {
             printf("z is largest");
      }
      else
      {

             printf("both are equal");
      }
  }

}
