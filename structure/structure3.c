#include<stdio.h>
struct distance{
int x;
int y;
};

void main(){
struct distance a1,a2;
scanf("%d %d",&a1.x,&a1.y);
scanf("%d %d",&a2.x,&a2.y);
int subs1=pow((a2.x-a1.x),2);
int subs2=pow((a2.y-a1.y),2);
float d=sqrt(subs1+subs2);
printf("The distance unit:%.2f",d);
}
