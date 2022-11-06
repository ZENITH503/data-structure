#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
 struct node *link;
};


struct node *add( struct node *head, int d){

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

ptr->link=head;
head = ptr;
return head;
}

int main(){

struct node *head=malloc(sizeof(struct node));
head->data=45;
head->link=NULL;

struct node *current=malloc(sizeof(struct node));
current->data=63;
current->link=NULL;
head->link=current;

printf("earlier list was : " );
while(head != NULL){
    printf("%d\n",head->data);
    head=head->link;
}

int d=3;
head=add(head,d);
current=head;

while(current != NULL){
     printf("%d\n",current->data);
    current=current->link;
}



    return 0;
}