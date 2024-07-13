#include<stdio.h>
struct student{
char name[100];
int id;
float cgpa;
};
void main(){
 int n;
 scanf("%d",&n);
 struct student a[n];
for(int i=1;i<=n;i++){

   scanf("%s",a[i].name);
 scanf("%d",&a[i].id);
 scanf("%f",&a[i].cgpa);
 }
 for(int i=1;i<=n;i++){
    printf("Student %d:%s\n",i,a[i].name);
 printf("Id:%d\n",a[i].id);
 printf("Cgpa:%.2f",a[i].cgpa);

 }

}
