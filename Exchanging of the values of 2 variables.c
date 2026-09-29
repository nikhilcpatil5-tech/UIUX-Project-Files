#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("The value of a:%d,b:%d before swapping:\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a:%d,b:%d after swapping:\n",a,b);
    return 0;
}
