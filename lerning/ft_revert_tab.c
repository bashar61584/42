#include <unistd.h>

void ft_print(char a)
{
    write(1,&a,1);
}
void ft_revert(int *tab, int size)
{
    int c_count=0;
    int temp=0;
    int r_count=size-1;
    while(c_count <(size/2))
    {
        temp=tab[c_count];
        tab[c_count]=tab[r_count];
        tab[r_count]=temp;
        c_count++;
        r_count--;

    }
}
int main()
{
    int i=0;
    char num; 
    int tab[]={1,4,2,3};
      while(i<4)
    {
        num=tab[i]+'0';
        ft_print(num);
        i++;
    }
    ft_revert(tab, 4);
    i=0;
    write(1,"\n",1); 
    while(i<4)
    {
        num=tab[i]+'0';
        ft_print(num);
        i++;
    }
    return (0); 
}