/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:18:54 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:17:35 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_des;
	const unsigned char	*temp_src;
	size_t				i;

	temp_des = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	i = -1;
	while (++i < n)
		temp_des[i] = temp_src[i];
	return (dest);
}

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	char	*temp_dest;
// 	char	*temp_src;

// 	temp_dest = (char *) dest;
// 	temp_src = (char *)src;
// 	while (n > 0)
// 	{
// 		*(temp_dest++) = *(temp_src++);
// 		n--;
// 	}
// 	return (dest);
// }
/**
int main()
{
    int i = 0;
    char dst[6] = "aaaaaa";
    char src[8] = "bbbb";
    memcpy(dst, src, 4);
    dst[4] = '\0';
    while (dst[i])
    {
        printf("%c", dst[i]);
        i++;
    }
    return 0;
}
**/
