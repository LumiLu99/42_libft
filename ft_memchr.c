/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:35:54 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:17:21 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Find the first c in a memory block of size n
 * 1) Looks at the first n bytes of memory starting at s
 * 2) Searches for the first occurrence of the byte c
 * 3) Treats all bytes as unsigned numbers (0-255)
 * Return:
 * A pointer to the first matching byte if found
 * NULL if c is not found 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	const unsigned char	*str;
// 	size_t				i;
// 	unsigned char		ch;

// 	str = (const unsigned char *)s;
// 	ch = (unsigned char)c;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (str[i] == ch)
// 		{
// 			return ((unsigned char *)s + i);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// int main()
// {
// 	const char s[6] = "Hello";
// 	char c;
// 	size_t n = 6;
// 	c = 'l';

// 	char *result;
// 	result = ft_memchr(s, c, n);
// 	printf("Result: %s\n", result);
// 	return (0);
// }