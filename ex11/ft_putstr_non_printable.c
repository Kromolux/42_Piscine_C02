/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:11:50 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 13:27:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char c);
char	*convert_to_hex(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]) == 1)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, convert_to_hex(str[i]), 3);
		}
		i++;
	}
}

int	is_printable(char c)
{
	int	result;

	result = 1;
	if (c < ' ' || c > '~')
	{
		result = 0;
	}
	return (result);
}

char	*convert_to_hex(unsigned char c)
{
	char	output[3];
	char	*ptr;
	char	*mask;

	mask = "0123456789abcdef";
	ptr = &output[0];
	output[0] = '\\';
	output[1] = mask[(c >> 4) & 15];
	output[2] = mask[c & 15];
	return (ptr);
}

// int	main(void)
// {
// 	int	i;
// 	int	n;
// 	char	teststring1[323];

// 	i = 0;
// 	while (i < 321)
// 	{
// 		teststring1[i] = ' ';
// 		i++;
// 	}
// 	teststring1[322] = '\0';
// 	i = 1;
// 	n = 1;
// 	while (n < 32)
// 	{
// 		teststring1[i] = n;
// 		i += 2;
// 		n++;
// 	}
// 	i = 65;
// 	n = 127;
// 	while (n <= 254)
// 	{
// 		teststring1[i] = n;
// 		i += 2;
// 		n++;
// 	}
// 	teststring1[i] = 255;
// 	ft_putstr_non_printable(teststring1);
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	write(1, "\n", 1);
// 	return (0);
// }