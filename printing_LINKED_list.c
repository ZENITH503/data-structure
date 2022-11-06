#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){

struct node *head= malloc(sizeof(struct node));
head->data=45;
head->link=NULL;

struct node *current= malloc(sizeof(struct node));
current->data=53;
current->link=NULL;
head->link=current;

struct node *current1= malloc(sizeof(struct node));
current1->data=61;
current1->link=NULL;
head->link->link=current1;

while( head!= NULL)
{
    printf("%d\n",head->data);
    head = head->link;
}



    return 0;
}
