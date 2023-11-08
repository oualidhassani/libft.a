void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i = 0;
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++:
    }
}

char ft_custom_mapping_function(unsigned int i, char chara) 
{
    if (i % 2 == 0) 
        return chara;
    return (chara - 32); 
    }

int main ()
{
    char d[] = "oaulid";
    printf("%s",ft_striteri(d, ft_custom_mapping_function));
}