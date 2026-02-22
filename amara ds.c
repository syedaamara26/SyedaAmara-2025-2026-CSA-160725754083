#include<stdio.h>
#define MAX 5
struct stack
{
int data [MAX];
int top;
};
struct stack s;
void init(){
s.top=-1;
}
void push(int x){
if(s.top==MAX-1)
printf("stack overflow\n");
else
s.data[++s.top]=x;
}
void pop(){
if(s.top==-1)
printf("stack underflow\n");
else
printf("popped:%d\n",s.data[s.top--]);
}
void display(){
if(s.top==-1)
printf("stack is empty\n");
else{
for(int i=s.top;i>=0;i--)
printf("% d",s.data[i]);
printf("\n");
}
}
int main(){
init();
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}
