#include <stdio.h>
int main()
{
    int num=20; 
    int *p;
    int num2=10;  
    p=&num; 
    int **p2=&p; 
    printf("%p\n",*p2); 
    printf("%p\n",*p2); 
    printf("%d\n",**p2); 
    *p2 =&num2;
    printf("%p",*p2);
    return (0);
}