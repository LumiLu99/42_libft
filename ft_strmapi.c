/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:27:43 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 16:34:59 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi goes through a string character by character 
 * and for each character, it calls another function f
 * The function f takes:
 * 1) The index of the character of the string
 * 2) The character itself
 * Then it returns a new character
 * I collects all those new characters and builds a new string using malloc
 */

// size_t ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// char	to_uppercase(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return c -('a' - 'A');
// 	return c;
// }
// int main()
// {
// 	char s[] = "hello world";
// 	char *result = ft_strmapi(s, to_uppercase);

// 	if (result)
// 	{
// 		printf("Original: %s\n", s);
// 		printf("Transformed: %s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
