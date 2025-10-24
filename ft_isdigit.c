/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:47:53 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 15:38:26 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	ft_isdigit(int d)
// {
// 	if (d >= 48 && d <= 57)
// 		return (1);
// 	else
// 		return (0);
// }

/**
 * char c = 'A';
 * int i = c + 1;  // c is automatically promoted to int
 * printf("%c %d\n", i, i);  // prints 'B' 66
 */
// int main()
// {
//     int digit = '9';
//     int result = ft_isdigit(digit);
//     printf("Result: %d\n", result);
// }

