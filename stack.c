#include<stdio.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
do
{
printf("1.Push \n 2.Pop\n 3.Exit \n");
Printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case 2:item=pop();
printf("Popped value=%d",item);
break;
case 3:exit(0);
}
}
while(-91);
}
//function to push an item
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full");
return;
}
else
{
stk[++sp]=x;
return;
}
//function to pop an item
int pop()
{
if(sp==-1)
printf("Empty stack...");
else
return stk[sp--];
}
}
