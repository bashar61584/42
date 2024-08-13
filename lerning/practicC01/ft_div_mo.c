#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div =a/b; 
    *mod= a%b; 

}
int main()
{
    int a=5; 
    int b=2; 
    int mod1=0; 
    int div1=0; 
    int *div=&div1; 
    int *mod=&mod1; 
    ft_div_mod(a,b,div,mod); 

    char d=div1+'0';
    char c=mod1+'0';
    write(1,&d,1); 
    write(1,"\n",1); 
    write(1,&c,1); 

    return (0); 
}