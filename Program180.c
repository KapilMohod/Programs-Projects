#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int Data;
    struct node *next;
    struct node *prev;     // #

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->Data = no;
    newn->next = NULL;
    newn->prev = NULL;     // #

    if (*Head == NULL)   // LL is 
    {
        *Head = newn;
    }

    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;    // #
        *Head = newn;

    }
    
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head; // hee xerox copy kadhli apan karan main function madhe data corrupt honyachi shakyata aste......

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->Data = no;
    newn->next = NULL;
    newn->prev = NULL;     // #

    if (*Head == NULL)   // LL is 
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL) //Type 2 cha loop lavla ithe 
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;       // #
        
    }
}

void DeleteFirst(PPNODE Head)
{
    if (*Head==NULL)    // empty LL
    {
        return;
    }
    else if (((*Head) -> next == NULL) && ((*Head) -> prev == NULL)) // for check single node
    {
       free(*Head);
       *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head)->prev);
        (*Head)->prev = NULL;

    }
    
    
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

     if (*Head==NULL)    // empty LL
    {
        return;
    }
    else if (((*Head) -> next == NULL) && ((*Head) -> prev == NULL)) // for check single node
    {
       free(*Head);
       *Head = NULL;
    }
    else                                                            // for Multiple node
    {
       while (temp->next->next != NULL)
       {
            temp = temp -> next;
       }
       free(temp->next);
       temp->next = NULL;
       
    }
}

void Display(PNODE Head)
{
    printf("Contents of LinkedList are : \n");

    printf("NULL <=> ");
    while (Head != NULL)
    {
        printf("| %d | <=> ",Head->Data);
        Head = Head->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}


void InsertAtPos(PPNODE Head, int no, int ipos)
{
     int Size = 0;
     Size = Count(*Head);
     PNODE newn = NULL;
     PNODE temp = *Head;
     int i = 0;

     if ((ipos<1) || (ipos>(Size+1)))
     {
        printf("Invalid Position\n");
     }
     
     if (ipos==1)
     {
        InsertFirst(Head, no);
     }
     else if (ipos == Size+1)
     {
        InsertLast(Head, no);
     }
     else
     {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->Data = no;
        newn->next = NULL;
        newn->prev = NULL;   // #

        for (i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next ->prev = newn;
        temp->next = newn;
        newn->prev = temp;


     }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE temp = *Head;
    int i = 0;

     if ((ipos<1) || (ipos>(Size)))
     {
        printf("Invalid Position\n");
     }
     
     if (ipos==1)
     {
        DeleteFirst(Head);
     }
     else if (ipos == Size)
     {
         DeleteLast(Head);
     }
     else
     {
        for ( i = 1; i < ipos-1; i++)
        {
            temp = temp->next ;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
        
     }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&First,105,5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    
    DeleteAtPos(&First,5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);


    return 0;
}
