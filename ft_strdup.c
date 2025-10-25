/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:00:27 by yelu              #+#    #+#             */
/*   Updated: 2025/10/25 18:10:34 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *s)
// {
// 	size_t	i;
	
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*new_str;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	new_str = str;
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (new_str);
}

// char	*ft_strdup(const char *s)
// {
// 	size_t	len;
// 	char	*dup;
// 	size_t	i;

// 	len = 0;
// 	i = 0;
// 	len = ft_strlen(s);
// 	dup = malloc(sizeof(char) * (len + 1));
// 	if (!dup)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		dup[i] = s[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

#include <stdio.h>
int main()
{
	const char *str = "Hello";
	size_t i = 0;
	char *result = ft_strdup(str);
	while (result[i])
	{
		printf("%c", result[i]);
		i++;
	}
	free (result);
	return (0);
}
