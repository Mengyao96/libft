/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:02:10 by mezhang           #+#    #+#             */
/*   Updated: 2025/07/10 12:17:26 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	unsigned char		*m_des;
	const unsigned char	*m_src;

	if (des == NULL && src == NULL && len > 0)
		return (NULL);
	m_des = (unsigned char *)des;
	m_src = (const unsigned char *)src;
	if ((uintptr_t)m_des > (uintptr_t)m_src && (uintptr_t)m_des
		< (uintptr_t)m_src + len)
	{
		m_des = m_des + len - 1;
		m_src = m_src + len - 1;
		while (len--)
			*m_des-- = *m_src--;
	}
	else
	{
		while (len--)
			*m_des++ = *m_src++;
	}
	return (des);
}

/* #include <string.h>

int	main(void)
{
	// char		*des=NULL;
	// const char	*src=NULL;
	// size_t		n = 5;


	printf("%s \n", memmove("12345", (void *)0, 0));
	ft_putchar_fd('\n', 1);
	printf("%s \n", ft_memmove("45645", (void *)0, 0));
} */
