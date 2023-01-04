#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
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

head->data=54;
head->prev=NULL;
head->next=first;

first->data=76;
first->prev=head;
first->next=second;

second->data=42;
second->prev=first;
second->next=third;

third->data=67;
third->prev=second;
third->next=NULL;


return 0;
}