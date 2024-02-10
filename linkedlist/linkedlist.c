#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

int length() {
    struct node* ptr = head;
    int length = 0;
    while (ptr != NULL) {
        length++;
        ptr = ptr->next;
    }
    return length;
}

void insert(int val) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("Overflow!");
    else {
        ptr->data = val;
        ptr->next = NULL;
        if (head == NULL)
            head = ptr;
        else {
            struct node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = ptr;
        }
    }
}

void display() {
    struct node* ptr = head;
    if (ptr == NULL)
        printf("Underflow!");
    else {
        printf("\n");
        while (ptr != NULL) {
            printf("\t%d", ptr->data);
            ptr = ptr->next;
        }
    }
}

void swap(struct node* a, struct node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubblesort() {
    int len = length();
    for (int i = 0; i < len - 1; i++) {
        struct node* ptr = head;
        for (int j = 0; j < len - i - 1; j++) {
            if (ptr->data > ptr->next->data)
                swap(ptr, ptr->next);
            ptr = ptr->next;
        }
    }
}

int main() {
    insert(1);
    insert(6);
    insert(5);
    insert(7);
    insert(3);
    display();
    bubblesort();
    printf("\nSorted List:");
    display();
    return 0;
}
