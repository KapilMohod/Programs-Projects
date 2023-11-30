#include <stdio.h>

void ptr(int* a, int* b)
{
    int temp = *a; // Use *a to access the value pointed to by a       temp = 10
    *a = *b;       // Assign the value of b to a                         a = 25
    *b = temp;     // Assign the original value of a to b                b = 10
}

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a); // Use &a to store the input in 'a'

    int b;
    printf("Enter the value of b : ");
    scanf("%d", &b); // Use &b to store the input in 'b'

    int x = a; // No need for pointers here, just assign the values directly
    int y = b;

    ptr(&x, &y); // Pass the addresses of x and y to ptr function

    printf("After swapping, the value of a is: %d\n", x);
    printf("After swapping, the value of b is: %d\n", y);

    return 0;
}