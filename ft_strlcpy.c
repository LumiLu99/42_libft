/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:20:46 by yelu            #+#    #+#             */
/*   Updated: 2024/11/06 21:20:46 by yelu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * DESCRIPTION
 * strlcpy is designed to always return the length of src 
 * so you know how much space you would need to fully copy 
 * the string (including the null terminator).
 * strlcpy copies up to size - 1 char from the NULL
 * terminated string src to dst, then '\0' the result
 * 
 * RETURN VALUE
 * strlcpy returns the total length of the string 
 * they tried to create - the length of src.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
		return (count);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     char source [] = "abcdef";
//     char dest[] = "";
//     size_t len = ft_strlcpy(dest, source, 3);
//     printf("Destination: %s\n", dest);
//     printf("Length: %zu", len);
// }
