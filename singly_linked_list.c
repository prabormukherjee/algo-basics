#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*tmp,*head;

void insert_beg(int value)
{
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->data=value;

    if(head==NULL)
    {
        tmp->next=NULL;
    }
    else
    {
        tmp->next=head;
    }
    head=tmp;
}


void insert_end(int value)
{
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->data=value;
    tmp->next=NULL;

    struct node *tmp1;
    tmp1=(struct node *)malloc(sizeof(struct node));
    tmp1=head;

    if(head==NULL)
    {
        head=tmp;
    }

    else
    {
        while(tmp1->next!=NULL)
        {
            tmp1=tmp1->next;
        }
        tmp1->next=tmp;
    }
}


void del_beg()
{
    if(head==NULL)
    {
        printf("No deletion possible Empty list:\n");
    }
    else
    {
        printf("%d element is deleted\n",head->data);
        head=head->next;
    }
}


void del_end()
{
    tmp=head;

    if(head==NULL)
    {
        printf("No deletion possible Empty list:\n");
    }

    else if(head->next==NULL)
    {
        printf("%d element is deleted\n",head->data);
        head=NULL;
    }
    else
    {
        while(tmp->next->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=NULL;
    }
}


void display_list()
{
    tmp=head;

    while(tmp!=NULL)
    {
        printf("%d ",tmp->data);
        tmp=tmp->next;
    }
    printf("\n");
}


int main()
{
    int NUM;
    int ele;

    printf("Enter number of elements in the list:");
    scanf("%d",&NUM);

    printf("Enter the elements:");
    for(int i=0;i<NUM;i++)
    {
        scanf("%d",&ele);
        insert_end(ele);
    }

    display_list();
    printf("Enter element at begining: ");
    scanf("%d",&ele);
    insert_beg(ele);
    display_list();

    printf("Enter element at end: ");
    scanf("%d",&ele);
    insert_end(ele);
    display_list();

    printf("Delete element from begining: ");
    del_beg();
    display_list();

    printf("Delete element from end: ");
    del_end();
    display_list();

    return 0;
}
