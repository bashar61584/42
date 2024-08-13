#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
    write(1,&a,1); 
    write(1," ",1); 

}
void ft_newl(char *a)
{
    write(1,a,1); 
}

void ft_rus(int *tab, int size)
{
   
    int i=1;
    int j=1;  
    int count=0; 
    int k=1; 
    char numj; 
    while(i<=size)
    {
        count=0;
        j=i;
        while(j<=size)
        {
            count++; 
           
            numj=j+'0';
            ft_putchar(numj );
            j++; 
        }
        k=1;
         while(k<=(size-count))
         {
             numj=k+'0';
             ft_putchar(numj );
             k++;
         }
        ft_newl("\n");
        i++; 
    }
    printf("\n count %d",count);
}

int main()
{
    int arr[]={3,2,4,1,1,2,2,2,4,3,2,1,1,2,2,2}; 
    // int arr[]={9,8,7,6,5,4,3,2,1,1,2,2,2,9,8,7,6,5,4,3,2,1,1,2,2,2}; 

    ft_rus(arr, 4);
    // printf("%s","habib");
    return (0);
}