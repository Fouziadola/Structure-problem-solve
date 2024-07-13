#include<stdio.h>
struct time{
int x,y,z;
};
void main(){
struct time p;
scanf("%d%d%d",&p.x,&p.y,&p.z);
float second=p.x*3600+p.y*60+p.z;
float hour=(float)second/3600;
float minute=(float)second/60;
printf("%.3f \n%.3f\n%.3f",hour,minute,second);
}
