/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:48:07 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 13:29:29 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * DESCRIPTION
 * Copies a specified number of bytes from one place in memory
 * to another. It works safely even if the two memory areas overlap
 * (They might share some of the same space). It decides whether to 
 * copy the bytes from the beginning or from the end, so it 
 * doesn't accidentally overwrite the data it still needs to copy
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	int				i;

	if (n == 0 || dest == src)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = -1;
	if (temp_dest < temp_src)
		while (++i < n)
			temp_dest[i] = temp_src[i];
	else
		while (++i < n)
			temp_dest[n - 1 - i] = temp_src[n - 1 - i];
	return (dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char	*temp_dest;
// 	unsigned char	*temp_src;

// 	if (n == 0 || dest == src)
// 		return (dest);
// 	temp_dest = (unsigned char *)dest;
// 	temp_src = (unsigned char *)src;
// 	if (temp_dest < temp_src)
// 	{
// 		while (n--)
// 			*temp_dest++ = *temp_src++;
// 	}
// 	else
// 	{
// 		temp_dest = temp_dest + n;
// 		temp_src = temp_src + n;
// 		while (n--)
// 			*(--temp_dest) = *(--temp_src);
// 	}
// 	return (dest);
// }
/**
int main()
{
    int i = 0;
    int j = 0;
    char str[10] = "AAAAAA";
    char dest[10] = "BBBCCCCC";
    printf("Before:\n");
    while (dest[i])
    {
        printf("%c", dest[i]);
        i++;
    }
    printf("\n");
    ft_memmove(dest, str, 6);
    printf("After: \n");
    while (dest[j])
    {
        printf("%c", dest[j]);
        j++;
    }
}
**/
