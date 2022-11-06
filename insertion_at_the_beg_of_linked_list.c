#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};


struct node* add_begi(struct node* head, int d){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;


    ptr->link=head;
    head=ptr;
    return head;
}


int main(){
struct node *head=malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
struct node *current=malloc(sizeof(struct node));
current->data=53;
current->link=NULL;
head->link=current;
struct node *current1=malloc(sizeof(struct node));
current1->data=83;
current1->link=NULL;
current->link=current1;

int d =78;

head=add_begi(head,d );
current1=head;
while(current1 != NULL){
    printf("%d\n",current1->data);
    current1=current1->link;
}

return 0;
}





