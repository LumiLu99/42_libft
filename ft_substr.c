/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:30:30 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:25:04 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Skip the first start characters of s, then start copying from there
 * const char *s = The original string you want to extract a piece from
 * unsigned int start = The index position in s where the substring could start
 * size_t, the maximum length of the substring to copy
 * Edge cases:
 * If start >= strlen, return empty string because there's nothing to copy
 * If len goes beyond the end of the string, only copy until the end, so no
 * out-of-bounds
 */

// void	*ft_calloc(size_t nmemb, size_t size);
// char	*ft_strdup(const char *s);
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

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*new_str;
	char	*ptr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	new_str = ft_calloc((len + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	ptr = new_str;
	while (len--)
		*new_str++ = *(s + start++);
	*new_str = '\0';
	return (ptr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	if (start > ft_strlen(s))
// 		return (ft_strdup(""));
// 	if (len > ft_strlen(s + start))
// 		len = ft_strlen(s + start);
// 	str = ft_calloc((len + 1), sizeof(char));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = s[i + start];
// 		i++;
// 	}
// 	return (str);
// }

// #include <stdio.h>
// int main()
// {
//     char str[] = "Hello world";
//     char *result;

// 	// Case 1: Null string
//     result = ft_substr(NULL, 0, 5);
//     printf("Test NULL string: %s\n", result ? result : "NULL");

// 	// Case 2: Start greater than string length
//     result = ft_substr(str, 20, 5);
//     printf("Test start > strlen(s): '%s'\n", result);

// 	// Case 3: Start index at the end of the string
//     result = ft_substr(str, 11, 5);
//     printf("Test start == strlen(s): '%s'\n", result);

// 	// Case 4: Requested length greater than remaining string length
//     result = ft_substr(str, 3, 10);
//     printf("Test len > remaining string length: '%s'\n", result);

//     // Case 5: Requested length is zero
//     result = ft_substr(str, 2, 0);
//     printf("Test len == 0: '%s'\n", result);

//     // Case 6: Start is 0
//     result = ft_substr(str, 0, 5);
//     printf("Test start == 0: '%s'\n", result);

// 	// Case 7: Substring from beginning with full length
//     result = ft_substr(str, 0, 11);
//     printf("Test full string: '%s'\n", result);

// 	// Case 8: Substring from the middle
//     result = ft_substr(str, 6, 5);
//     printf("Test middle substring: '%s'\n", result);

// 	// Case 9: Long string
//     char new_str[] = "This is a very long string to test the";
//     result = ft_substr(new_str, 10, 20);
//     printf("Test long string: '%s'\n", result);
//     // Case 10: Empty string
//     result = ft_substr("", 0, 5);
//     printf("Test empty string: '%s'\n", result);
//     // Clean up
//     free(result);
//     return 0;
// }
