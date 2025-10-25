/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:06:37 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 21:36:39 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = ch;
		str++;
		n--;
	}
	return (s);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	int				i;

// 	str = (unsigned char *)s;
// 	i = -1;
// 	while (++i < n)
// 		str[i] = (unsigned char)c;
// 	return (s);
// }

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	char	*str;

// 	str = (char *)s;
// 	while (n > 0)
// 	{
// 		*str = (char)c;
// 		str++;
// 		n--;
// 	}
// 	return (s);
// }

// #include <stdio.h>
// int main()
// {
//     char str[30] = "ABCDEFGHIJKLM";
//     ft_memset(str,'a',6);
//     printf("Result: %s", str);
// }
