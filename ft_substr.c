/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:30:30 by yelu              #+#    #+#             */
/*   Updated: 2025/10/23 21:17:55 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}


/**
int main()
{
    char *str = "Hello world";
    char *result;

	// Case 1: Null string
    result = ft_substr(NULL, 0, 5);
    printf("Test NULL string: %s\n", result ? result : "NULL");

	// Case 2: Start greater than string length
    result = ft_substr(str, 20, 5);
    printf("Test start > strlen(s): '%s'\n", result);

	// Case 3: Start index at the end of the string
    result = ft_substr(str, 11, 5);
    printf("Test start == strlen(s): '%s'\n", result);

	// Case 4: Requested length greater than remaining string length
    result = ft_substr(str, 3, 10);
    printf("Test len > remaining string length: '%s'\n", result);

    // Case 5: Requested length is zero
    result = ft_substr(str, 2, 0);
    printf("Test len == 0: '%s'\n", result);

    // Case 6: Start is 0
    result = ft_substr(str, 0, 5);
    printf("Test start == 0: '%s'\n", result);

	// Case 7: Substring from beginning with full length
    result = ft_substr(str, 0, 11);
    printf("Test full string: '%s'\n", result);

	// Case 8: Substring from the middle
    result = ft_substr(str, 6, 5);
    printf("Test middle substring: '%s'\n", result);

	// Case 9: Long string
    str = "This is a very long string to test the limits of ft_substr";
    result = ft_substr(str, 10, 20);
    printf("Test long string: '%s'\n", result);

    // Case 10: Empty string
    result = ft_substr("", 0, 5);
    printf("Test empty string: '%s'\n", result);

    // Clean up
    free(result);

    return 0;
}
**/