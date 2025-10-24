/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:03:04 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 16:59:08 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function searches for a small string (little) inside a bigger string
 * It only looks at the first n characters of big. It stops searching if it 
 * hits the null terminator in big
 * Return value:
 * 1) If little is empty, returns big
 * 2) If little is not found in the first n characters, returns NULL
 * 3) If little is found, returns a pointer to the first character of the 
 * first occurrence in big
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_str;
	size_t	little_len;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	big_str = ((char *)big);
	little_len = 0;
	while (little[little_len])
		little_len++;
	while (*big_str && len >= little_len)
	{
		i = 0;
		while (i < little_len && big_str[i] == little[i])
			i++;
		if (i == little_len)
			return (big_str);
		big_str++;
		len--;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (little[0] == '\0')
// 		return ((char *)big);
// 	if (len == 0)
// 		return (NULL);
// 	while (big[i] != '\0' && i < len)
// 	{
// 		j = 0;
// 		if (big[i] == little[0])
// 		{
// 			while (big[i + j] == little[j] && (i + j) < len)
// 			{
// 				if (little[j + 1] == '\0')
// 					return ((char *)big + i);
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

#include <stdio.h>
int main() 
{
	const char *big1 = "Heworldaaaaaaaaaaaaaaaa";
	const char *little1 = "wor";
	printf("Result: %s\n", ft_strnstr(big1, little1, 9));
}
