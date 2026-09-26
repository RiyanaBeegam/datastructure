#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node * next;
};
struct node *sp=NULL;//stackpointer
struct node *push(struct node *,int);
struct node *Pop(struct node *, int *);
void display(struct node *);
int search(struct node *, int);
int main()
{
int option,data,found;
for(;;)
{
printf("\n 1.Push \n 2.Pop\n 3.Display \n 4. Search \n 5.Exit\n");
printf("Enter your choice:");
scanf("%d",&option);
switch(option)
{
case 1: 
printf("Enter elements to insert:");
scanf("%d",&data);
sp=push(sp,data);
break;
case 2:
if(sp==NULL)
{
printf("stack is empty:\n");
}
else
{
sp=Pop(sp,&data);
printf("popped element is:%d\n",data);
}
break;
case 3:
display(sp);
break;
case 4:
printf("Enter the element to be searched:");
scanf("%d",&data);
found=search(sp,data);
if(found!=0)

printf("The element %d is found at position %d\n",data,found);
else
printf("not found\n");
break;
case 5:
exit(0);
break;
}//end of for loop
}//end of main function
return 0;
}
struct node* push(struct node *sp,int data)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=sp;
sp=temp;
return temp;
}

struct node* Pop(struct node *sp,int *x)
{
struct node *temp;
if(sp!=NULL)
{
temp=sp;
*x=sp->data;
sp=sp->next;
free (temp);
}
return sp;
}

void display(struct node *sp)
{
if(sp==NULL)
{
printf("stack is empty:\n");
return;
}
printf("stack elements are:\n");
while(sp!=NULL)
{
printf("%d\n",sp->data);
sp=sp->next;
}
}

int search(struct node *sp,int data)
{
int pos=1;
while(sp!=NULL)
{
if(sp->data==data)
{
sp=sp->next;
pos++;
}
return 0;
}
}

