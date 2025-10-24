/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:10:09 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 21:43:47 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	return (c);
}

// int	ft_toupper(int c)
// {
// 	if ((c >= 97) && (c <= 122))
// 	{
// 		return (c - 32);
// 	}
// 	return (c);
// }

// #include <stdio.h>
// int main()
// {
// 	char str = 'a';
// 	printf("%c\n", str);
// 	int result = ft_toupper(str);
// 	printf("%c\n", result);
// }
