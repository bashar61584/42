#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
int main()
{
    int a=5; 
    int b=6; 

    int *x=&a; 
    int *y=&b;

    ft_swap(x,y); 
    char r=a+'0'; 
    char s=b+'0'; 
    write(1,&r,1);  
    write(1,"\n",1);
    write(1,&s,1);  
    return (0); 
}