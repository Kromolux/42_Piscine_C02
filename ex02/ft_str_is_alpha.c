/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:25:17 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:34:03 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	is_alpha = 1;
	i = 0;
	while (is_alpha == 1 && str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			is_alpha = 0;
		}
		i++;
	}
	return (is_alpha);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*teststring1 = {"AbskdOEBSf"};
// 	char	*teststring2 = {""};
// 	char	*teststring3 = {"Abs1kdOEBSf"};

// 	printf("First String to test. \"%s\" Result= %i\n",
// 		teststring1, ft_str_is_alpha(teststring1));
// 	printf("Second String to test. \"%s\" Result= %i\n",
// 		teststring2, ft_str_is_alpha(teststring2));
// 	printf("Third String to test. \"%s\" Result= %i\n",
// 		teststring3, ft_str_is_alpha(teststring3));
// 	return (0);
// }