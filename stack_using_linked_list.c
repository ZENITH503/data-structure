#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top=0;
void push(int x){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
};

void display(){
    struct node *temp;
    temp=top;
    if(temp==0){
        printf("empty list");
    }
    else{
        while(temp != 0){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
};

void pop(){
    struct node * temp;
    temp=top;
    if(temp==0){
        printf("list empty");
    }
    else{
        top=top->next;
        free(temp);
    }
};

void peek(){
    struct node *temp;
    temp=top;
    if(temp == NULL){
          printf("empty list");
    }
    else{
        printf("%d""\n ",temp->data);
    }
};



int main(){
    push(2);
    push(3);
    push(4);
    push(7);
    display();
    peek();
    pop(3);
    display();
    return 0;
}