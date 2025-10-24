/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:46:02 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 16:15:44 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strchr function returns a pointer to the first occurrence of the
 * character c in the string s. Here character means byte. 
 * Each character is a single byte. It doesn't handle multibyte characters
 * like emoji or accented letters.
 * If c is specified as '\0', these functions return a pointer to 
 * the terminator.
 */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char		ch;

	ch = (char)c;
	str = (char *)s;
	if (ch == '\0')
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	int		i;
// 	char	ch;

// 	i = 0;
// 	ch = (char)c;
// 	if (ch == '\0')
// 		return ((char *)s + ft_strlen(s));
// 	while (s[i])
// 	{
// 		if (s[i] == ch)
// 			return (((char *)s) + i);
// 		i++;
// 	}
// 	return (NULL);
// }

// #include <stdio.h>
// int main()
// {
// 	const char str[] = "hello";
// 	char *result = ft_strchr(str, 'h');

// 	if (result)
// 	{
// 		printf("Character: %s\n", result);
// 		printf("Found character at index: %li\n", result - str);
// 	}
// 	else
// 		printf("Character not found\n");
// } 
