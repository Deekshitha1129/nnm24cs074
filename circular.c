#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;
};
typedef struct node * link;
listptr create();
listptr insfront(listptr,int);
void display(listptr);
void insright(listptr,int,int);
listptr delright(listptr,int);
listptr insertend(listptr,int);
listptr deldend(listptr);
int main(){
int ch,element,nodevalue;
char c;
listptr start=NULL;
while(1)
{
printf("enter \n 1 to create CLL using front insertion\n 2 to perform insertion and deleteion at end of CLL\n 3 to perform insertion and deletion to the right of given node CLL\n4 to display the status of CSLL and count number of nodes in it \n5 to exit\n");
printf("your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:start=create();
break;
case 2:printf("enter i for insert and d for delete");
scanf("%c",&c);
if(c=='i')
{
printf("enter element to insert\n");
scanf("%d",&element);
}
else
start=delend(start);
break;
case 3:printf("enter i to insert d to delete");
getchar();
scanf("%c",&c);
if(c=='d'){
printf("inserting node to right whose data is given as node value\n");
printf("enter node value\n");
scanf("%d",&nodevalue);
printf("enter element to insert \n");
scanf("%d",&element);
insright(start,nodevalue,element);
}
else{
printf("deleteinh node to right whose data is given as node value\n");
printf("enter node value\n");
scanf("%d",&nodevalue);
start=delright(start,nodevalue);
}
break;
case 4:display(start);
break;
case 5:exit(0);
default:printf("invalid choice\n");
}
}
}
listptr create()
{
int i,n,num;
listptr start=NULL;
printf("enter number of nodes");
scanf("%d",&n);
for(i=0;i<n:i++)
{
printf("enter data element");
scanf("%d",&num);
start=insfront(start,num);
}
return start;
}
listptr insfront(listptr start,int num)
{
listptr temp;
temp=(listptr)malloc(sizeof(struct node));
temp->data=num;
if(start==NULL){
start=temp;
start->link=start;
}
else{
temp->link=start->link;
start->link=temp;
}
return start;
}
listptr insertend(listptr start,int num){
listptr temp;
temp=(listptr)malloc(sizeof(struct node));
temp->data=num;
if(start==NULL){
start=temp;
start->link=start;
}
else{
temp->link=start->link;
start->link=temp;
start=temp;
} return start;
}
listptr delend(listptr start)
{
listptr ptr,p;
if(start=NULL)
printf("empty list");
else{
for(ptr=start;ptr->link!=start;ptr=ptr->link);
ptr->link=start->link;
p=start;
start=ptr;
free(p);
}
return start;
}
void insright(listptr start,int nodevalue,int element)
{
listptr temp,ptr;
if(start==NULL)
{
printf("void insertion");
return;
}
if(start->data==nodevalue)
insfront(start,element);
else{
for(ptr=start->link;ptr->link!=start&&ptr->data!=nodevalue;ptr=ptr->link);
if(ptr->data==nodevalue)
{
temp=(listptr)
malloc(sizeof(struct node));
temp->data=element;
temp->limk=ptr->link;
ptr->link=temp;
}
return;
}
listptr delright(listptr start,int nodevalue)
{
listptr p,ptr;
if(start==NULL)
{
printf(void deleteion);
}
else if(start->data==nodevalue&&start->link==start)
p=start;
starT=NULL;
free(p);
}
else{
for(ptr=start;ptr->link!=start&&ptr->data!=nodevalue;ptr=ptr->link);
if(ptr->data==nodevalue)
{
p=ptr->link;
ptr->link=p->link;
free(p);
}
else {
printf("node not avaialble")
}
return start;
 }
 void display(listptr start){
 listptr ptr;
 int count=0;
 if(start==NULL)
 printf("list empty");
 else{
 printf("list contents are\n");
 for(ptr=start->link;ptr!=start;ptr=ptr->link)
 {
 printf("%d\n",ptr->data);
 count++;
 }
 printf("%d\n",start->data);
 count++;
 printf("no of nodes in list=%d",count);
 }
 }

