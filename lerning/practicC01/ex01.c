#include <unistd.h>

void ft_ultmate(int *********nbr)
{
    *********nbr=62;
}
int main ()
{
    int ab; 
    
    ab=2; 
    int *p1=&ab; 
    int **p2=&p1; 
    int ***p3=&p2; 
    int ****p4=&p3; 
    int *****p5=&p4; 
    int ******p6=&p5; 
    int *******p7=&p6; 
    int ********p8=&p7; 
    int *********p9=&p8; 

    ft_ultmate(p9);
    char a=6+'0' ;
    write(1,&a,1);
    return 0; 
}