/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:36 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 15:38:04 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	ft_isascii(int c)
// {
// 	if (c >= 0 && c <= 127)
// 		return (1);
// 	return (0);
// }

// int main()
// {
//     int c = '0';
//     int result = ft_isascii(c);

//     printf("Result: %d\n", result);
// }
