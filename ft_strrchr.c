/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:44:23 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:20:45 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function returns a pointer to the last occurrence of the character c
 * in the string s. 
 */

// size_t ft_strlen(const char *s)
// {
// 	size_t	i;
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*str;
	int		i;

	ch = (char)c;
	str = (char *)s;
	i = ft_strlen(str);
	if (ch == '\0')
		return (str + i);
	str = str + i;
	while (str >= s)
	{
		if (*str == ch)
			return (str);
		str--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;
// 	char	ch;

// 	ch = (char)c;
// 	i = 0;
// 	if (ch == '\0')
// 	{
// 		while (s[i])
// 			i++;
// 		return ((char *)s + i);
// 	}
// 	while (s[i])
// 		i++;
// 	while (i >= 0)
// 	{
// 		if (s[i] == ch)
// 			return ((char *)s + i);
// 		i--;
// 	}
// 	return (NULL);
// }

// #include <stdio.h>
// int main()
// {
//     char str[] = "hello";
//     char *result; 
//     result = ft_strrchr(str, '\0');

//     if (result)
//     {
//         printf("Character: %s\n", str);
//         printf("The index position is at: %li\n", result - str);
//     }
//     else
//         printf("Character not found");

// }
