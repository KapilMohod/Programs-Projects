#include<stdio.h>

int main()
{
   
   float arr [] = {10.3,43.4,45.34,234.45};
   float *p = NULL;
   float *q = NULL;

   p = arr;
   q = &(arr[3]);

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", *q);
    printf("%d\n", *p);
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+1));
    printf("%d\n", p[1]);
    printf("%d\n", *(2+arr));
    printf("%d\n", 0[arr]);
    printf("%d\n", q-p);
    printf("%d\n", *(q-p));
   

    
return 0 ;
    
}
