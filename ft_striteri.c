#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i = 0;
    if(s == NULL || f == NULL)
    return ;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void ft_custom(unsigned int i, char* c) 
{
    printf("index ; %d , char ; %c\n",i,*c);
}
int main()
{
        ft_striteri("oualid",ft_custom);
}