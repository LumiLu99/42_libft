/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:46:13 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:17:53 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Splits a string into smaller strings every time it finds a delimited
 * character.
 * Returns an array of strings
 * "Hello world test", ' '
 * array[0] = "Hello"
 * array[1] = "world"
 * array[2] = "test"
 * array[3] = NULL
 */

// void	ft_allocate(char **array, char const *s, char delim);
// int	word_count(const char *str, char c);
// char	*ft_substr(const char *s, unsigned int start, size_t len);
// size_t ft_strlen(const char *s);
// void	*ft_calloc(size_t nmemb, size_t size);
// char	*ft_strdup(const char *s);
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

// size_t ft_strlen(const char *s)
// {
// 	size_t	i;
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	size_t	str_len;
// 	char	*new_str;
// 	char	*ptr;

// 	if (!s)
// 		return (NULL);
// 	str_len = ft_strlen(s);
// 	if (start >= str_len)
// 		return (ft_strdup(""));
// 	if (len > str_len - start)
// 		len = str_len - start;
// 	new_str = ft_calloc((len + 1), sizeof(char));
// 	if (!new_str)
// 		return (NULL);
// 	ptr = new_str;
// 	while (len--)
// 		*new_str++ = *(s + start++);
// 	*new_str = '\0';
// 	return (ptr);
// }

void	ft_allocate(char **array, char const *s, char delim)
{
	char		**arr;
	char const	*str;

	str = s;
	arr = array;
	while (*str)
	{
		while (*s == delim)
			s++;
		str = s;
		while (*str && *str != delim)
			str++;
		if (*str == delim || str > s)
		{
			*arr = ft_substr(s, 0, str - s);
			s = str;
			arr++;
		}
	}
	*arr = NULL;
}

int	word_count(char const *s, char delim)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == delim)
			++s;
		if (*s)
			++count;
		while (*s && *s != delim)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		size;

	if (!s)
		return (NULL);
	size = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (size + 1));
	if (!array)
		return (NULL);
	ft_allocate(array, s, c);
	return (array);
}

// #include <stdio.h>
// int main() {
//     char **result;
//     int i;

//     // Test case 1: Simple split
//     printf("Test Case 1: Simple split\n");
//     result = ft_split("Hello world, how are you?", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     }
//     printf("\n");

//     // Test case 2: Multiple spaces between words
//     printf("Test Case 2: Multiple spaces\n");
//     result = ft_split("Hello    world     how  are    you?", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     }
//     printf("\n");

//     // Test case 3: Empty string
//     printf("Test Case 3: Empty string\n");
//     result = ft_split("", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     } else {
//         printf("No words found\n");
//     }
//     printf("\n");

//     // Test case 4: String with only delimiters
//     printf("Test Case 4: Only delimiters\n");
//     result = ft_split("   ", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     } else {
//         printf("No words found\n");
//     }
//     printf("\n");

//     // Test case 5: Delimiter at the start and end
//     printf("Test Case 5: Delimiters at start and end\n");
//     result = ft_split("   Hello world  ", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     }
//     printf("\n");

//     // Test case 6: No delimiters, one word
//     printf("Test Case 6: Single word\n");
//     result = ft_split("Hello", ' ');
//     if (result) {
//         for (i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]);  // Free each word after use
//         }
//         free(result);  // Free the result array
//     }
//     printf("\n");

//     return 0;
// }
