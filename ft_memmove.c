/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:28 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/07 11:36:28 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *ptr;
    unsigned const char *s;
    ptr = (char *)dest;
    s = (char *)src;

    if (dest > src)
    {
        while (n > 0)
        {
            ptr[n - 1] = s[n - 1];
        n--;
        }
    }
    else 
    {
        while (i < n)
        {
            ptr[i] = s[i];
            i++;
        } 
    }
    return (ptr);
}

// int main() {
//     char str[] = "walid";

//     printf("Original string: %s\n", str);

//     // Copy the last 6 characters of str to its first 6 characters
//     memmove(str + 3, str , 3);

//     printf("Modified string: %s\n", str);

//     return 0;
// }
