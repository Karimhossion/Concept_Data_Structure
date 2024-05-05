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
    for ( ptr = head; ptr!=NULL; ptr=ptr->next)
    {
        printf("%d=>",ptr->data);
    }
    printf("[Null]\n");
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
void newValue()
{
    int value;
    printf("add new value : ");
    scanf("%d",&value);
    insert(value);
}
int main()
{
    int size;
    printf("element size : ");
    scanf("%d",&size);

    int element;
    printf("Element : ");
    for (int i=0;i < size;++i){
        scanf("%d",&element);
        insert(element);
    }
    printf("linked list: ");
    printList();
    
    newValue();
    printf("add end element link list : ");
    printList();
    return 0;

    
}