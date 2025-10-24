/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:01:55 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 15:01:57 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * memcmp compares first n bytes of two memory blocks, s1 and s2
 * Each byte is treated as an unsigned number (0-255)
 * It doesn't care about strings or null terminators, it works on raw memory
 * 1) Start at first byte of s1 and s2
 * 2) Compare them
 * 		- if they are equal, move to next byte
 * 		- if they are different, stop
 * 3) Return a value based on the first difference
 * 		- Negative: the byte in s1 is smaller than the byte in s2
 * 		- Zero: all n bytes are the same
 * 		- Positive: the byte in s1 is larger than the byte in s2
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	const unsigned char	*str1;
// 	const unsigned char	*str2;
// 	size_t				i;

// 	str1 = (const unsigned char *)s1;
// 	str2 = (const unsigned char *)s2;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (str1[i] != str2[i])
// 		{
// 			return (str1[i] - str2[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
// #include <stdio.h>
// int main()
// {
// 	unsigned char str1[7] = "aaaba";
// 	unsigned char str2[7] = "aaaaa";

// 	int result = ft_memcmp(str1, str2, 5);
// 	printf("Result: %i\n", result);

// }
