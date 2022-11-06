#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *link;
};

void add_end(struct node *head, int d){
    struct node *ptr3;
    struct node *temp=malloc(sizeof(struct node));
temp->data=d;
temp->link=NULL;
ptr3=head;


while(ptr3->link != NULL){
    ptr3=ptr3->link;
}
ptr3->link=temp;
}



int main(){
struct node *head=malloc(sizeof(struct node));
head->data=32;
head->link=NULL;

struct node *ptr=malloc(sizeof(struct node));
ptr->data=67;
ptr->link=NULL;
head->link=ptr;



struct node *ptr1=malloc(sizeof(struct node));
ptr1->data=87;
ptr1->link=NULL;
ptr->link=ptr1;


int d=35;
add_end(head,d);

while(head != NULL){
    printf("%d\n",head->data);
    head=head->link;
}

    return 0;
}