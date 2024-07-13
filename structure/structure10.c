#include<stdio.h>
struct length{
int x;
};
void main(){
struct length p1,p2;
printf("Enter meter and centimeter components of a length:");
scanf("%d %d",&p1.x,&p2.x);
int centimetere=p1.x*100+p2.x;
float metere=(float)centimetere/100;
printf("%d\n %.3f",centimetere,metere);
}
