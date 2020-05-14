

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{
    int x;
    node *start,*temp, *first,*loc,*newNode;
    first=(node *)malloc(sizeof(node));
    start=first;
    temp=first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        first->info=x;
        printf("%d Stored at: %d\n",first->info,first);

        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }


    printf("\nEnter ITEM to Insert: ");
    int item;
    scanf("%d",&item);

//    while(start->info<item)
//    {
//        printf("Present Address: %d, info = %d, Next Link = %d\n",start, start->info,start->link);
//        start = start->link;
//    }
//    // insert New Node
//    newNode=(node *)malloc(sizeof(node));
//    newNode->info=item;
//    newNode->link=start->link;
//    start->link = newNode;
//
    //Search Desired Location:


    //Print Linked List:

    start=temp;
    while(start!=NULL)
    {
        printf("info = %d, Next Link = %d\n",start->info,start->link);
        start = start->link;
    }

    return 0;
}

