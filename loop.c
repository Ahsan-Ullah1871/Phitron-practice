#include<stdio.h>
 int main()
 {
     int val=printf("00\n");
    printf("%d",val);
     //loop by while
     int i=5;
     while(i>0)
     {
         printf("%d I love you \n",i);
         i --;
     }

     // loop by for
     int in;
     for( in =0  ;in<=100  ;in++  )
     {
         printf("%d I love my mother \n",in);
     }
     //


     printf("3n problem");
     int n3;
     scanf("%d",&n3);
     //for(n3; n3>1; n3%2==0? n3 = n3/2: n3 = 3*(n3+1))
     //{
        // printf(" current number: %d \n",n3);
     //}
     while(n3>1)
     {

         printf("----> %d \n",n3);
         if(n3%2==0)
         {
             n3 = n3/2;
         }
         else{
            n3 = 3*n3+1;
         }
     }



     return 0;
 }
