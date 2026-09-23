#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front=0,rear=0,item;
void main()
{
void enqueue(int);
int dequeue(int*),opt,p;
void display();
do 
{
printf("\n1.Insert\n2.Delete\n.3.Display\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("Enter your item:");
scanf("%d",&item);
enqueue(item);
break;

case 2:
item=dequeue(&p);
if(p!=-1)
printf("Popped value=%d\n",item);
break;

case 3:
display();
break;

case 4:
exit(0);
}
}
while(9);
}

//function for insert item

void enqueue(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("Queue is full ");
else
{
rear=temp;
queue[rear]=item;
}
return;
}

//function for delete item

int dequeue(int *p)
{
if (front==rear)
{
printf("queue is empty");
*p=-1;
}
else
{
front=(front+1)%SIZE;
return queue[front];
}
}
void display()
{
int i;
if(front==rear)
printf("queue is empty");
else
{
i=(front+1)%SIZE;
while(1)
{
printf("%d\t",queue[i]);
if(i==rear)
break;
i=(i+1)%SIZE;
}
printf("\n");
}
return;
}

