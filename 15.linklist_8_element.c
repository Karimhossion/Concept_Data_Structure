#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *last=NULL;
void printList()
{
    struct node *ptr;
    printf("\n[head]=>");
    for (ptr = head; ptr!= NULL; ptr=ptr->next)
    {
        printf("%d=>",ptr->data);
    }
    printf("[NULL]\n");
}

void insert(int data)
{
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->data=data;
    link->next=NULL;
    if (head==NULL)
    {
        head=link;
        last=link;
    }
    else{
        last->next=link;
        last=link;
    }
}
int main()
{
    int x;
    printf("element :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printList();
    return 0;
    
}
