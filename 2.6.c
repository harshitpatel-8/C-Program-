#include<stdio.h>
int main()
{
    int sub1 ,sub2 ,sub3 ,total ,avg;
    printf("enter marks of 3 subject:");
    scanf("%d %d %d", &sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("Total=%d\n", total);
    printf("Avg=%d\n", avg);
    if(sub1<35||sub2<35||sub3<35)
    {
        printf("Result=Fail\n");
    }
    else
    {
        if (avg>=70)
            printf("Result=Distinction\n");
        else if (avg>=60)
            printf("Result=First class\n");
        else if (avg>=50)
            printf("Result=Second class\n");
        else if (avg>=40)
            printf("Result=Third class\n");
        else
            printf("Result=Fail\n");
    }
    return 0;
}
