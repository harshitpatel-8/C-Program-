#include <stdio.h>

int main()
 {
    int a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        largest = a;
    else
        if (b > c)
        largest = b;
    else
        largest = c;

       if (a < b && a < c)
        smallest = a;
    else
        if (b < c)
        smallest = b;
    else
        smallest = c;

    printf("Largest = %d, Smallest = %d\n", largest, smallest);

    return 0;
}
