#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void beginsert();
void beginsert(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL){
        printf("\noverflow");
    }
    else{
        printf("\nEnter value:");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("%d",item);
    }

}



int main(){
    beginsert();
    return 0;

}