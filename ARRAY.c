#include<stdio.h>
void main()
{
int a[5];
a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
a[4]=50;
int *p0,*p1,*p2,*p3,*p4;
p0=&a[0];
p1=&a[1];
p2=&a[2];
p3=&a[3];
p4=&a[4];
printf("\n the value of a[0]= %d", a[0]);
printf("\n the value of a[1]= %d", a[1]);
printf("\n the value of a[2]= %d", a[2]);
printf("\n the value of a[3]= %d", a[3]);
printf("\n the value of a[4]= %d", a[4]);
//values of addresses
printf("\n the address of variables");
printf("\n The address of a[0]=%p", p0);
printf("\n The address of a[1]=%p", p1);
printf("\n The address of a[2]=%p", p2);
printf("\n The address of a[3]=%p", p3);
printf("\n The address of a[4]=%p", p4);
}
