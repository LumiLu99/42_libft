/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:24:15 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 21:49:17 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	return (c);
}

// int	ft_tolower(int c)
// {
// 	if (c >= 65 && c <= 90)
// 		return (c + 32);
// 	return (c);
// }
/**
int main()
{
	char str = 'B';
	printf("%c\n", str);
	int result = ft_tolower(str);
	printf("%c\n", result);
}
**/