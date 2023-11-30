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
        (*Tail)->next=*Head;  //... mhnje aplyala last node chya next madhe first node cha address midel
    }
    else // LL contains at least one node 
    {
        newn->next=*Head;
        *Head = newn;
        (*Tail)->next=*Head;
        
    }
    


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
        (*Tail)->next=*Head;  //... mhnje aplyala last node chya next madhe first node cha address midel
    }
    else // LL contains at least one node 
    {
        
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{

}

void Display(PNODE Head, PNODE Tail)
{

}

int Count(PNODE Head, PNODE Tail)
{

    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;    //  #
    
    return 0;
}

