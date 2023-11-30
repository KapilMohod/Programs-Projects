#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;

    printf("%d\n",no); //11
    printf("%d\n",&no); // 6422300
    printf("%d\n",sizeof(no)); //4
    printf("%d\n",p); //6422300
    printf("%d\n",&p); //6422296
    printf("%d\n",*p); //11
    printf("%d\n",sizeof(p)); //4

    return 0;
}
