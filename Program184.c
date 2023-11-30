#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn =  NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // for checking empty node
    {
        *Head = newn;
        *Tail = newn;
    }
    else // LL contains at least one node 
    {
        newn->next=*Head;
        *Head = newn;   
    }
    (*Tail)->next=*Head;     //... mhnje aplyala last node chya next madhe first node cha address midel
                             // ... he sentence donhi condition madhe same hot mhnun common kadhl
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
     PNODE newn =  NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // for checking empty node
    {
        *Head = newn;
        *Tail = newn;
        
    }
    else // LL contains at least one node 
    {
        (*Tail)->next=newn;
        *Tail = newn;
    }
    (*Tail)->next=*Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head==NULL) && (*Tail==NULL)) //case 1
    {
        return;
    }
    else if (*Head==*Tail) //case 2
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else //case 3
    {
        (*Head) = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next=*Head;

    }
    
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = NULL;

    if ((*Head==NULL) && (*Tail==NULL)) //case 1
    {
        return;
    }
    else if (*Head==*Tail) //case 2
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else //case 3
    {
        while (temp->next!=*Tail)
        {
            temp = temp->next;
        }
        free(temp->next); // or free(*Tail);
        *Tail = temp;
        (*Tail)->next=*Head;
        
    }
}

void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of Linked List are : \n");

    if ((Head!=NULL) && (Tail!=NULL) )
    {
        do
        {
            printf("| %d | -> ",Head->Data);
            Head = Head->next;
        } while (Head!= Tail->next);
        
    }
    printf("Address of First Node\n");
    
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if ((Head!=NULL) && (Tail!=NULL) )
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head!= Tail->next);
        
    }
    return iCnt;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int size = 0;
    size = Count(*Head, *Tail);
    PNODE newn = NULL;
    PNODE temp = *Head;
    int i = 0;
    
    if ((iPos<1) || (iPos>size+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if (iPos==1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(iPos==size+1)
    {
         InsertLast(Head,Tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(PNODE));
        newn->Data = no;
        newn->next = NULL;

        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}


void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int size = 0;
    size = Count(*Head, *Tail);
    PNODE temp = *Head;
    PNODE targatednode = NULL;

    int i = 0;
    
    if ((iPos<1) || (iPos>size))
    {
        printf("Invalid Position\n");
        return;
    }
    if (iPos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos==size)
    {
         DeleteLast(Head,Tail);
    }
    else
    {
        
        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        targatednode = temp->next;
        temp->next=temp->next->next;
        free(targatednode);


    }
}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; 
    int iRet = 0;   //  #

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);

    InsertLast(&First, &Last,101);
    InsertLast(&First, &Last,111);
    InsertLast(&First, &Last,121);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);


    InsertAtPos(&First,&Last,105,5);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);

    DeleteAtPos(&First,&Last,5);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);

    DeleteLast(&First, &Last);
    Display(First,Last); // call by value function
    iRet = Count(First, Last);
    printf("Counts of Linked List are : %d\n",iRet);
    
    return 0;
}

