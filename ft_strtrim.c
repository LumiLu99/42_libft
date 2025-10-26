/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:22:37 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:21:18 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Removes unwanted characters from the start and end of a string
 * s1 = the original string to trim
 * set = A string containing all the characters you want to remove from the
 * start and end
 * Creates a new string and returns it without modifying the original
 * 1) Check from start of s1 and skip all characters that are in set
 * 2) Check fom the end of s1 and skip all characters that are in set
 * 3) Copy what's left into a new string
 * 4) Return that new string
 * EDGE CASES
 * 1) If s1 is empty, return empty string
 * 2) s1 is made entirely of set characters, return empty string
 * 3) set is empty, no trimming happens, returned string is a copy of s1
 * 4) s1 or set is NULL, return NULL
 * 5) Memory allocation fails, returns NULL
 * 
 * char *s1 = "  Hello World!  "
 * char *set = " ";
 * trimmed = "Hello World!"
 * char *s1 = "!*? Hello World*!?"
 * char *set = "!*?"
 * trimmed = "Hello World"
 * Previous implementation might crash due to calling ft_strlen and if s1 is 
 * NULL in the first place
 */

// char	*ft_strdup(const char *s);
// size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// char	*ft_strchr(const char *s, int c);
// void	*ft_calloc(size_t nmemb, size_t size);
// size_t	ft_strlen(const char *s);
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

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	count;

// 	i = 0;
// 	count = 0;
// 	while (src[count] != '\0')
// 	{
// 		count++;
// 	}
// 	if (size == 0)
// 		return (count);
// 	while (src[i] && i < size - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (count);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*str;
// 	char	*new_str;
// 	size_t	len;

// 	len = ft_strlen(s);
// 	str = malloc(sizeof(char) * len + 1);
// 	if (!str)
// 		return (NULL);
// 	new_str = str;
// 	while (*s)
// 		*str++ = *s++;
// 	*str = '\0';
// 	return (new_str);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	char	*str;
// 	char		ch;

// 	ch = (char)c;
// 	str = (char *)s;
// 	if (ch == '\0')
// 		return (str + ft_strlen(str));
// 	while (*str)
// 	{
// 		if (*str == ch)
// 			return (str);
// 		str++;
// 	}
// 	return (NULL);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*new_str;
	const char	*start;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = (s1 + (ft_strlen(s1) - 1));
	while (end >= start && ft_strchr(set, *end))
		end--;
	new_str = ft_calloc((end - start + 2), sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, start, (end - start + 2));
	return (new_str);
}

// static int	ischar(const char *set, char c);
// static char	*new_str(const char *s1, size_t start, size_t len);

// char	*ft_strtrim(const char *s1, const char *set)
// {
// 	size_t	i;
// 	size_t	j;

// 	if (ft_strlen(s1) == 0 || !s1 || !set)
// 		return (ft_strdup(""));
// 	i = 0;
// 	j = ft_strlen(s1) - 1;
// 	while (s1[i] && ischar(set, s1[i]))
// 		i++;
// 	if (s1[i] == '\0')
// 		return (ft_strdup(""));
// 	while (j >= i && ischar(set, s1[j]))
// 		j--;
// 	return (new_str(s1, i, (j - (i - 1))));
// }

// static char	*new_str(const char *s1, size_t start, size_t len)
// {
// 	char	*str;
// 	size_t	i;

// 	if (len <= 0 || start >= ft_strlen(s1))
// 		return (ft_strdup(""));
// 	str = ft_calloc(len + 1, sizeof(char));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = s1[start + i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

// static int	ischar(const char *set, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (set[i] != '\0')
// 	{
// 		if (set[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// int main()
// {
//     char *result = ft_strtrim("\t\t\t\t\tHello, World!\nh", " \t\n");
//     printf("Result: '%s'\n", result);
//     free(result);
//     return 0;
// }
