#include <unistd.h>
#include <stdio.h>

void ft_sort_tab(int *tab, int size)
{
    int i=0;
    int j;  
    int temp;
    while(i<size)
    {
        j=0; 
        while(j<size)
        {
            if (tab[j]>tab[j+1])
            {
                temp=tab[j]; 
                tab[j]=tab[j+1]; 
                tab[j+1]=temp;
            }
            j++;
        }
        i++; 
    }
}
void ft(char a)
{
    write (1,&a,1); 
}
int main()
{
    int tab[]={2,3,5,9,7,1,6,4,8}; 
    ft_sort_tab(tab,9); 
    int i=0;
    char num;  
    while(i<9)
    {
        num=tab[i]+'0';
        ft(num);
        i++;
    }
    return (0); 
}