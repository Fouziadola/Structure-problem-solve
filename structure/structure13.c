
#include<stdio.h>
struct time{
int x,y,z;
};
void main(){
struct time p,p1;
scanf("%d%d%d",&p.x,&p.y,&p.z);
scanf("%d%d%d",&p1.x,&p1.y,&p1.z);
float second1=p.x*3600+p.y*60+p.z;
float hour1=(float)second1/3600;
float minute1=(float)second1/60;
float second2=p1.x*3600+p1.y*60+p1.z;
float hour2=(float)second2/3600;
float minute2=(float)second2/60;
float hour=hour1-hour2;
float minute= minute1- minute2;
float second=second1-second2;
int differHours = Second/ 3600;
    int remainingSeconds = Seconds% 3600;
    int differfMinutes = Second/ 60;
    int differSeconds = Second % 60;
printf("%d \n%d\n%d",differhours,differminutes,differseconds);
}
