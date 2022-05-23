/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:13:11 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:35:13 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	is_printable = 1;
	i = 0;
	while (is_printable == 1 && str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*teststring1 = {"Absk0198561#+-,dOEBSf"};
// 	char	*teststring2 = {""};
// 	char	*teststring3 = {"Absk\td#OEBSf"};

// 	printf("First String to test. \"%s\" Result= %i\n",
// 		teststring1, ft_str_is_printable(teststring1));
// 	printf("Second String to test. \"%s\" Result= %i\n",
// 		teststring2, ft_str_is_printable(teststring2));
// 	printf("Third String to test. \"%s\" Result= %i\n",
// 		teststring3, ft_str_is_printable(teststring3));
// 	return (0);
// }