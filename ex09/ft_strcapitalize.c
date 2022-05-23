/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:25:03 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/13 07:35:57 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c);
int	is_numeric(char c);
int	is_lowercase(char c);
int	is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	capitalize;

	capitalize = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (capitalize == 1)
		{
			if (is_lowercase(str[i]) == 1)
			{
				str[i] = str[i] - (char) 32;
				capitalize = 0;
			}
			else if (is_numeric(str[i]) == 1 || is_uppercase(str[i]) == 1)
				capitalize = 0;
		}
		else if (is_uppercase(str[i]) == 1)
			str[i] = str[i] + (char) 32;
		else if (is_alpha(str[i]) == 0 && is_numeric(str[i]) == 0)
			capitalize = 1;
		i++;
	}
	return (str);
}

int	is_alpha(char c)
{
	int	result;

	result = 1;
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
	{
		result = 0;
	}
	return (result);
}

int	is_numeric(char c)
{
	int	result;

	result = 1;
	if (c < '0' || c > '9')
	{
		result = 0;
	}
	return (result);
}

int	is_lowercase(char c)
{
	int	result;

	result = 1;
	if (c < 'a' || c > 'z')
	{
		result = 0;
	}
	return (result);
}

int	is_uppercase(char c)
{
	int	result;

	result = 1;
	if (c < 'A' || c > 'Z')
	{
		result = 0;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	teststring1[] = {"salut, comment tu vas ? "
// 							"42mots quarante-deux; cinquante+et+un"};
// 	char	teststring2[] = {"THIS 9IS THE SECOND TEST!"};
// 	char	teststring3[] = {"this is the 1third test!"};

// 	printf("First String to test. before \n%s\n", teststring1);
// 	printf("%s\n", ft_strcapitalize(teststring1));
// 	printf("Second String to test. before \n%s\n", teststring2);
// 	printf("%s\n", ft_strcapitalize(teststring2));
// 	printf("Third String to test. before \n%s\n", teststring3);
// 	printf("%s\n", ft_strcapitalize(teststring3));
// 	return (0);
// }