#include<stdio.h>
int main()
{
    int choclate,packet,extra_packet=0;
    printf("Enter total number of choclate \n");
    scanf("%d",&packet);
    choclate = packet;
     while( (packet + extra_packet)>=4)
     {
         printf("Extra %d \n",extra_packet);
         choclate += (packet+extra_packet)/4;
         if((packet+extra_packet)%4 == 0){
            packet = (packet+extra_packet)/4;
         }else{
            extra_packet = (packet+extra_packet)%4;
            packet = (packet+extra_packet)/4;
         }

         //Easy way , just 2 line
         // choclate += packet/4 ;
         // packet = packet/4 + packet%4;


     }


    printf("Total choclate: %d \n",choclate);


    return 0;

}

