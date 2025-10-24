/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:42:21 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 16:27:36 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

// size_t	ft_strlen(const char	*s)
// {
// 	size_t	i;
// 	size_t	count;

// 	count = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 		count++;
// 	}
// 	return (count);
// }

// #include <stdio.h>

// int main()
// {
//     char s[]= "1234567890";
//     size_t length = ft_strlen(s);
//     printf("The total length is %zu\n", length);
// }
