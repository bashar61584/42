#include <stdio.h> 

void ft_ultimate_ft(int ********nbr); 

int main(void)
{
    int var=10; 
    int *po;
    int **po1; 
    int ***po2; 
    int ****po3; 
    int *****po4; 
    int ******po5; 
    int *******po6; 
    int ********po7; 
    po=&var;
    po1=&po;
    po2=&po1; 
    po3=&po2; 
    po4=&po3; 
    po5=&po4; 
    po6=&po5; 
    po7=&po6; 
    printf("My first value = %d \n",********po7);
    ft_ultimate_ft(po7); 
    printf("After Change = %d \n ",********po7);

    return (0); 
}