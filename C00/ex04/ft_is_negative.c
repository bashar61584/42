#include<unistd.h>
void ft_is_negative(int n)
{
    char y='N';
    char z='P'; 
    if (n>=0){
        write(1,&z,1); 
    }
    else{
        write(1,&y,1);
    }
}
// int main()
// {
//     ft_is_negative(5);
// }