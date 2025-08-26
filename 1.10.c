#include<stdio.h>
int main()
{
    int rupees,dollors, pounds;
    printf("Enter dollors:");
    scanf("%d",&dollors);
    rupees = dollors*48;
    pounds = rupees/70;
    printf("rupees %d\n pounds %d\n",rupees,pounds);

}
