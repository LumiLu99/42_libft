/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelu <yelu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:09:17 by yelu              #+#    #+#             */
/*   Updated: 2025/10/24 17:43:16 by yelu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calloc is used to allocate memory for an array of elements count.
 * The memory is set to zero. If nmemb or size is 0, returns either NULL 
 * or a unique pointer value that can later be successfully passed to free.
 * If multiplication nmemb and size would result in integer overflow,
 * then calloc returns an error.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (size > 0 && size > UINT_MAX / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count != 0 && size > UINT_MAX / count)
		return (NULL);
	if (count == 0 || size == 0)
	{
		tmp = (malloc(0));
		if (!tmp)
			return (NULL);
		return (tmp);
	}
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/**
int main()
{
	size_t len = 4;
	size_t i = 2;
	int *array = ft_calloc(len, sizeof(int));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
	}

	while (i < len)
	{
		printf("%i", array[i]);
		i++;
	}
	printf("\n");

	free(array);
	return 0;

}
**/
