/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:31:07 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 20:00:40 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_length;

	i = 0;
	src_length = ft_strlen(src);
	if (size > 0)
	{
		size--;
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <bsd/string.h>
// //compile strlcpy with: gcc -Wall -Wextra -Werror *.c -lbsd
// int	main(void)
// {
// 	char	source[30] = {"This is the source string!"};
// 	char	destination[255] = {"The destination String should"
// 						" always be longer than the source!"};

// 	printf("Destination String to test. \"%s\" \n", destination);
// 	printf("Result= %li", strlcpy(destination, source, 28));
// 	printf("\nString= %s\n", destination);
// 	printf("Result= %li", strlcpy(destination, "YEA I GOT IT!", 15));
// 	printf("\nString= %s\n", destination);
// 	printf("Result= %li", strlcpy(destination, "new input", 4));
// 	printf("\nString= %s\n", destination);
// 	return (0);	
// }
