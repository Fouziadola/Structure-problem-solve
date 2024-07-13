#include<stdio.h>
struct output{
float a;
float b;
};
int main(){
struct output p;
scanf("%f %f",&p.a,&p.b);
if(p.b>0){
printf("%.2f+%.2fi",p.a,p.b);
}
else if(p.b<0){
    printf("%.2f-%.2fi",p.a,fabs(p.b));
}
return 0;
}

