#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
char ch;
struct st*next;
}st;
void add_end(st**,char);
void add_begin(st**,char);
void rev_print(st*);
void print(st*);
int main(int argc,char **argv)
{
int i;
st*nptr=0;
for(i=0;i<argv[1][i];i++)
//add_begin(&nptr,argv[1][i]);
add_end(&nptr,argv[1][i]);

rev_print(nptr);
//print(nptr);

}
void add_end(st**ptr,char s)
{
st*temp;
temp=(st*)malloc(sizeof(st));
if(*ptr==0)
{
temp->ch=s;
temp->next=*ptr;
*ptr=temp;
}
else
{
st*last=*ptr;
while(last->next!=0)
last=last->next;

temp->ch=s;
temp->next=last->next;
last->next=temp;
}}

void add_begin(st **ptr,char s)
{
st *temp;
 temp=(st*)malloc(sizeof(st));
temp->ch=s;
temp->next=*ptr;
*ptr=temp;
}
void print(st *ptr)
{
while(ptr!=0)
{
printf("%c",ptr->ch);
ptr=ptr->next;
}
}
void rev_print(st*ptr)
{
if(ptr!=0)
{
rev_print(ptr->next);
printf("%c",ptr->ch);
}
}

 
