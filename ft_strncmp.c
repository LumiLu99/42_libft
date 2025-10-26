/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:29:45 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:19:57 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * strcmp function compares first n bytes of the two strings s1 and s2.
 * The function returns:
 * 0 if s1 and s2 are equal
 * Negative if s1 is less than s2
 * Positive if s1 is greater than s2
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- && (*str1 || *str2))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (n == 0)
// 		return (0);
// 	while (n > 0)
// 	{
// 		if (((unsigned char)s1[i]) == ((unsigned char)s2[i]))
// 		{
// 			if (s1[i] == '\0')
// 				return (0);
// 			i++;
// 			n--;
// 		}
// 		else
// 		{
// 			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
// 		}
// 	}
// 	return (0);
// }

// #include <stdio.h>
// int main()
// {
//     char str1[] = "a";
//     char str2[] = "ab";
//     int n;

//     n = 8; 
//     printf("%d\n", ft_strncmp(str1, str2, n));
//     return 0;
// }