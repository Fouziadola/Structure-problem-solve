#include<stdio.h>
 struct triangle{
 int x;
 int y;
 };
 void main(){
 struct triangle p1,p2,p3;
 scanf("%d %d",&p1.x,&p1.y);
 scanf("%d %d",&p2.x,&p2.y);
 scanf("%d %d",&p3.x,&p3.y);
 float area=fabs((p1.x*p2.y+p2.x*p3.y+p3.x*p1.y)-(p1.x*p3.y+p3.x*p2.y+p2.x*p1.y))/2;

 if(area==0){
    printf("they are in a same line");
 }
 else{
      printf("The area is %.2f unit", area);}
 }
