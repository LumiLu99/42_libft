/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:04:47 by yelu              #+#    #+#             */
/*   Updated: 2025/10/25 18:55:33 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * strjoin combines two string s1 and s2 into a new string.
 * 1) Find the lengths of both strings (s1 and s2)
 * 2) Allocate memory big enough to hold both strings plus '\0'
 * 3) Copy all the characters from s1 into the new string
 * 4) Add all the characters from s2 right after it
 * 5) Put '\0' at the end
 * 6) Return the new string
 */

// size_t	ft_strlen(const char *s);
// void	*ft_calloc(size_t nmemb, size_t size);
// void	*ft_memset(void *s, int c, size_t n);

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	unsigned char	ch;

// 	str = (unsigned char *)s;
// 	ch = (unsigned char)c;
// 	while (n > 0)
// 	{
// 		*str = ch;
// 		str++;
// 		n--;
// 	}
// 	return (s);
// }

// size_t ft_strlen(const char *s)
// {
// 	size_t	i;
	
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*ptr;
// 	size_t	total_size;

// 	if (size > 0 && size > UINT_MAX / nmemb)
// 		return (NULL);
// 	total_size = nmemb * size;
// 	ptr = malloc(total_size);
// 	if (!ptr)
// 		return (NULL);
// 	ft_memset(ptr, 0, total_size);
// 	return (ptr);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	new_str = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	ptr = new_str;
	while (*s1)
		*new_str++ = *s1++;
	while (*s2)
		*new_str++ = *s2++;
	*new_str = '\0';
	return (ptr);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*new_str;
// 	size_t	i;
// 	size_t	j;

// 	if (s1 == NULL || s2 == NULL)
// 		return (NULL);
// 	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
// 	if (new_str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 		new_str[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2[j] != '\0')
// 	{
// 		new_str[i++] = s2[j++];
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *s1 = "Hello, hehehehehehehehehehehe";
//     char *s2 = "world!";
//     char *joined;

//     joined = ft_strjoin(s1, s2);
//     if (!joined)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("s1: %s\n", s1);
//     printf("s2: %s\n", s2);
//     printf("Joined: %s\n", joined);

//     free(joined);

//     return 0;
// }
