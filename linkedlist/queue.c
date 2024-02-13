#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void enqueue(int item){
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Overflow!");
    }
    else{
        ptr->data = item;
        if(head == NULL){
            head = ptr;
            ptr->next = NULL;
        }
        else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}
void dequeue(){
    struct node *ptr;
    if(head == NULL)
        printf("Underflow");
    else{
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}
void display(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
        printf("Undeflow!");
    else{
        while(ptr != NULL){
            printf("\t%d",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main(){
    int choice,item;
    printf("Enter 1,2,3 for Enqueue , dequeue & display enter any other value for exit :)");
    while(1){
        printf("\nEnter choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 : 
                printf("Enter value to push : ");
                scanf("%d",&item);
                enqueue(item);
                break;
        case 2:
                dequeue();
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