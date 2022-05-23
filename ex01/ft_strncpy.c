/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:09:24 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 13:34:17 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// The strncpy() function is similar, except that at most n bytes of src are
//	 copied. Warning: If there is no null byte among the first n bytes of src,
//the string placed in  dest  will not be null-terminated.

// #include <stdio.h>
// int	main(void)
// {
// 	char	source[30] = {"This is the source string!"};
// 	char	destination[255] = {"The destination St"};

// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "an apple", 10));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "on a day", 2));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "keeps\0", 6));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "the doctor", 0));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "away! ", 3));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, source, 30));
// 	return (0);
// }