/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:27:37 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 17:30:59 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function converts strings that represent number into integer.
 * It only looks at the beginning of the string until it reaches something
 * that is not a number. 
 * If the string does not start with a number, it returns 0.
 * If the string starts with whitespaces, it ignores spaces
 * before converting the number
 * atoi("42") returns 42
 * atoi("-15") returns -15
 * atoi("123abc") returns 123, stops at a
 * atoi("abc123") returns 0 because no number at the start
 */

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		sum;

	sign = 1;
	sum = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		sum = (sum * 10) + (*nptr - '0');
		nptr++;
	}
	return (sum * sign);
}

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	sign;
// 	int	sum;

// 	i = 0;
// 	sign = 1;
// 	sum = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] && str[i] >= 48 && str[i] <= 57)
// 	{
// 		sum = (sum * 10) + (str[i] - 48);
// 		i++;
// 	}
// 	return (sum * sign);
// }

// #include <stdio.h>
// int main()
// {
// 	char num[] = "   93845";
// 	printf("Original string: %s\n", num);
// 	int number = ft_atoi(num);
// 	printf("Converted decimals: %d\n", number);
// }
