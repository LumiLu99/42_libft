/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:17:29 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 20:09:23 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * strlcat safely appends src to end of dst, it never write past the buffer
 * limit. Always leave room for null terminator. dst must be NULL-terminated
 * already. Size is the total size of the destination buffer, not just 
 * current string length.
 * 1) Find the end of dst and measure its length (where the '\0' is)
 * 2) Calculate how much space is left in the buffer (size - len_dst - 1)
 * 		- minus 1 because we need room for the '\0'
 * 3) Copy as much of src as will fit into the remaining space
 * 4) Add the null terminator at the end
 * 5) Return the length of the string it tried to make (len_dst + len_src)
 * 		- This tells the caller if truncation happened
 * 		- Returned size >= size == truncated
 * 
 * If there is not enough space to append anything, (size = 3, dest only 5),
 * return the lenth it TRIED to create
 */

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	if (!dst)
		return (0);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// #include <stdio.h>
// int main()
// {
//     char dest[20] = "World";
//     char source[] = "Hello";
//     size_t result;
//     result = ft_strlcat(dest, source, 3);
//     printf("%s\n", dest);
//     printf("The total length: %zu\n", result);
// }