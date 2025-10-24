/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:47:46 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 22:06:57 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
		*(temp)++ = 0;
}

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*temp;
// 	size_t	i;

// 	temp = (unsigned char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		temp[i] = 0;
// 		i++;
// 	}
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	char	*temp;

// 	temp = (char *)s;
// 	while (n > 0)
// 	{
// 		*temp++ = 0;
// 		n--;
// 	}
// }

// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
//     int i = 0;
//     char bef[9] = "ABCDEF";
//     printf("Before changing: \n");
//     while (bef[i] != '\0')
//     {
// 		printf("%c",bef[i]);
// 		i++;
// 	}
//     printf("\n");
//     ft_bzero(bef, 4);
//     printf("After changing: \n");
//     for (int k = 0; k < 7; k++)
//     	printf("%c", bef[k]);
// 	printf("\n");
// 	printf("Changed Hex value: \n");
// 	for (size_t i = 0; i < 6; i++)
// 		printf("%02x ", bef[i]);
// 	printf("\n");
// }
