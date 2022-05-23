/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:21:22 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:35:44 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + (char) 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	teststring1[40] = {"Absk 0198561#+-,OSJFSKLCJIOE W93209"};
// 	char	teststring2[40] = {""};
// 	char	teststring3[40] = {"Abskd#J ISFDJEXCsf"};

// 	printf("First String to test. \"%s\" => ", teststring1);
// 	ft_strlowcase(teststring1);
// 	printf("%s\n", teststring1);
// 	printf("Second String to test. \"%s\" => ", teststring2);
// 	ft_strlowcase(teststring2);
// 	printf("%s\n", teststring2);
// 	printf("Third String to test. \"%s\" => ", teststring3);
// 	ft_strlowcase(teststring3);
// 	printf("%s\n", teststring3);
// 	return (0);
// }