/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:06:34 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:34:56 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	is_uppercase = 1;
	i = 0;
	while (is_uppercase == 1 && str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			is_uppercase = 0;
		}
		i++;
	}
	return (is_uppercase);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*teststring1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
// 	char	*teststring2 = {""};
// 	char	*teststring3 = {"Abskd#OEBSf"};

// 	printf("First String to test. \"%s\" Result= %i\n",
// 		teststring1, ft_str_is_uppercase(teststring1));
// 	printf("Second String to test. \"%s\" Result= %i\n",
// 		teststring2, ft_str_is_uppercase(teststring2));
// 	printf("Third String to test. \"%s\" Result= %i\n",
// 		teststring3, ft_str_is_uppercase(teststring3));
// 	return (0);
// }