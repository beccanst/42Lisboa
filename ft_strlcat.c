
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:52:53 by beccka            #+#    #+#             */
/*   Updated: 2022/11/03 01:31:24 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int ft_strlen(const char *s){
	int  i = 0;

	while(s[i] != '\0'){
		i++;
	}
	return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char *str_dst = dst;
	const char *str_src = src;
	size_t n = size;
	size_t buf_size;

	while (n-- != 0 && *str_dst != '\0')
			str_dst++;
	buf_size = str_dst - dst;
	n = size - buf_size;
	if (n == 0)
			return(buf_size + ft_strlen(str_src));
	while (*str_src != '\0') {
			if (n != 1) {
					*str_dst++ = *str_src;
					n--;
			}
			str_src++;
	}
	*str_dst = '\0';
	return(buf_size + (str_src - src));
}

// int main()
// {
//     char first[] = "This is ";
//     const char last[] = "a potentially long string";
//     size_t r;
//     size_t size = 16;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);
// 	printf("%d\n", (int)r);

//     return(0);
// }