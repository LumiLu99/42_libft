/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:08:38 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 16:23:27 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	ft_isprint(int c)
// {
// 	if (c >= 32 && c <= 126)
// 		return (1);
// 	else
// 		return (0);
// }

/*
int main()
{
    int c = '~';
    int result = ft_isprint(c);

    printf("Result: %d\n", result);
}
*/