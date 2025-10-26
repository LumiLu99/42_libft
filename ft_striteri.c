/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:29:01 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 16:35:52 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/**
void to_uppercase(unsigned int index, char *c)
{
    *c = toupper(*c);
}
int main()
{
    char str[] = "hello world";  // Sample string

    printf("Original string: %s\n", str);
    
    // Call ft_striteri to convert each character to uppercase
    ft_striteri(str, to_uppercase);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
**/