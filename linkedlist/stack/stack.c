#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int item){
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("OVERFLOW!");
    }
    else{
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            head = ptr;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next =NULL;
        }
    }
}
void pop(){
    struct node *ptr,*ptr1;
    if(head == NULL){
        printf("UNDERFLOW!");
    }
    else if(head->next == NULL){
        free(head);  
        head = NULL;               
    }
    else{
        ptr = head;
        while(ptr->next != NULL){
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
    }
}
void display(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("UNDERFLOW!");
    }
    else{
        while(ptr != NULL){
            printf("\t%d",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main(){
    int choice,item;
    int val;
    printf("Enter 1,2,3 for push,pop & display enter any other value for exit :)");
    while(1){
        printf("\nEnter choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : 
                printf("Enter value to push : ");
                scanf("%d",&item);
                push(item);
                break;
        case 2:
                pop();
                break;
        case 3:
                display();
                break;
        default:
                exit(0);
                break;
        }
    }
   
    return 0;
}