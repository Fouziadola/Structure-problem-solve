#include<stdio.h>
struct person{
char name[50];
int id;
float cgpa;
};
int main(){
 struct person p;
 scanf("%s",p.name);
 scanf("%d",&p.id);
 scanf("%f",&p.cgpa);
 printf("Name:%s\n",p.name);
 printf("Id:%d\n",p.id);
 printf("Cgpa:%f",p.cgpa);
}
