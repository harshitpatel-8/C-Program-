#include<stdio.h>
int main()
{
    int bytes, KB, MB ,GB;
    printf("Enter bytes:");
    scanf("%d", &bytes);
    KB= bytes/1024;
    MB=bytes/1024/1024;
    GB=bytes/1024/1024/1024;
    printf("KB %d\n MB %d\n GB %d\n", KB,MB,GB);

}
