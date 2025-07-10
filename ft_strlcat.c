/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:57:24 by mezhang           #+#    #+#             */
/*   Updated: 2025/07/10 11:17:01 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	deslen;
	size_t	srclen;

	i = 0;
	deslen = ft_strlen(dst);
	if (deslen >= dstsize)
		deslen = dstsize;
	srclen = ft_strlen(src);
	if (dstsize <= deslen || dstsize == 0)
		return (dstsize + srclen);
	while (src[i] != '\0' && i + deslen < dstsize - 1)
	{
		dst[deslen + i] = src[i];
		i++;
	}
	dst[i + deslen] = '\0';
	return (deslen + srclen);
}

// #include <string.h>
// #include <unistd.h>
// #include <stdio.h>
// int main (void)
// {
// 	char	dest[20] = "abc";
// 	char	src[] = "abc";

// 	char	dest1[20] = "abc";
// 	char	src1[] = "abc";

// 	printf("\n %s + %u +%s \n", dest, ft_strlcat(dest, src, 15), dest);
// 	printf("\n %s + %lu +%s \n", dest1, strlcat(dest1, src1, 15), dest1);
// 	return 0;
// }
