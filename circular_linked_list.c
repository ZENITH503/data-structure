#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;    
};

void listtraversal(struct node *head){
    struct node *ptr=malloc(sizeof(struct node));
    ptr=head;
    printf("%d\n",ptr->data);
    ptr=ptr->link;
    while (ptr != head)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
}

struct node *insertfirst(struct node *head, int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    struct node *ptr=malloc(sizeof(struct node));
    ptr=head->link;
    while (ptr->link != head)
    {
        ptr=ptr->link;
    };
   ptr->link=temp;
   temp->link=head;
   head=temp;
    return head;
};

int main(){

struct node *head;
struct node *first;
struct node *second;
struct node *third;


head=malloc(sizeof(struct node));
first=malloc(sizeof(struct node));
second=malloc(sizeof(struct node));
third=malloc(sizeof(struct node));


head->data=4;
head->link=first;

first->data=56;
first->link=second;

second->data=78; 
second->link=third;

third->data=72;
third->link=head;
head = insertfirst(head,11);
listtraversal(head);

    return 0;
}




