/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:20:12 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:35:27 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - (char) 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	teststring1[40] = {"Absk0198561#+-,dekloxff"};
// 	char	teststring2[40] = {""};
// 	char	teststring3[40] = {"Abskd#OEelksf"};

// 	printf("First String to test. \"%s\" => ", teststring1);
// 	ft_strupcase(teststring1);
// 	printf("%s\n", teststring1);
// 	printf("Second String to test. \"%s\" => ", teststring2);
// 	ft_strupcase(teststring2);
// 	printf("%s\n", teststring2);
// 	printf("Third String to test. \"%s\" => ", teststring3);
// 	ft_strupcase(teststring3);
// 	printf("%s\n", teststring3);
// 	return (0);
// }