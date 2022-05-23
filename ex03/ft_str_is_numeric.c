/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:57:28 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:34:18 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	is_numeric = 1;
	i = 0;
	while (is_numeric == 1 && str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_numeric = 0;
		}
		i++;
	}
	return (is_numeric);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*teststring1 = {"156893"};
// 	char	*teststring2 = {""};
// 	char	*teststring3 = {"Abs1k350BSf"};

// 	printf("First String to test. \"%s\" Result= %i\n",
// 		teststring1, ft_str_is_numeric(teststring1));
// 	printf("Second String to test. \"%s\" Result= %i\n",
// 		teststring2, ft_str_is_numeric(teststring2));
// 	printf("Third String to test. \"%s\" Result= %i\n",
// 		teststring3, ft_str_is_numeric(teststring3));
// 	return (0);
// }