#include<unistd.h>
void ft_print_numbers(void)
{
    for(char i=48; i<58; i++)
    {
        write (1,&i,1);
    }
}
// int main()
// {
//     ft_print_numbers();
//     return 0; 
// }