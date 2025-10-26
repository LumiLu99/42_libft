/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:53 by yelu              #+#    #+#             */
/*   Updated: 2025/10/26 19:16:29 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int	ft_isalnum(int alnum)
// {
// 	if ((alnum >= 48 && alnum <= 57) || (alnum >= 65 && alnum <= 90)
// 		|| (alnum >= 97 && alnum <= 122))
// 		return (1);
// 	else
// 		return (0);
// }

// #include <stdio.h>
// int main()
// {
//     int c = 76;
//     int result = ft_isalnum(c);
//     printf("Result: %d\n", result);

// }
