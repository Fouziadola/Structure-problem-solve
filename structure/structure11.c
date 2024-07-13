#include<stdio.h>
struct convert{
int x;
int y;
};
void main(){
struct convert p1,p2;
scanf("%d %d",&p1.x,&p1.y);
scanf("%d %d",&p2.x,&p2.y);
int metere=p1.x+p2.x;
int centimetere=p1.y+p2.y;
if(centimetere>=100){
    metere+=centimetere/100;
    centimetere%=100;
}
printf("The sum is %d metere %d centimetere",metere,centimetere);
}
