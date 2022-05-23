/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:03:07 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:34:41 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	is_lowercase = 1;
	i = 0;
	while (is_lowercase == 1 && str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			is_lowercase = 0;
		}
		i++;
	}
	return (is_lowercase);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*teststring1 = {"abcdefghijklmnopqrstuvwxyz"};
// 	char	*teststring2 = {""};
// 	char	*teststring3 = {"Abskd#OEBSf"};

// 	printf("First String to test. \"%s\" Result= %i\n",
// 		teststring1, ft_str_is_lowercase(teststring1));
// 	printf("Second String to test. \"%s\" Result= %i\n",
// 		teststring2, ft_str_is_lowercase(teststring2));
// 	printf("Third String to test. \"%s\" Result= %i\n",
// 		teststring3, ft_str_is_lowercase(teststring3));
// 	return (0);
// }