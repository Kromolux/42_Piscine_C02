/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:08:23 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 13:35:15 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_address(void *addr);
void	ft_print_hex(void *addr, unsigned int n);
void	ft_print_content(void *addr, unsigned int n);
char	*convert_to_hex(unsigned char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	i_remaining;
	unsigned int	n;
	void			*ptr;

	i = 0;
	if (size > 0)
	{	
		n = (int)((size / 16) + 0.5);
		ptr = addr;
		while (i <= n)
		{
			if ((i + 1) * 16 < size)
				i_remaining = 16;
			else
				i_remaining = size % 16;
			ft_print_address(ptr);
			ft_print_hex(ptr, i_remaining);
			ft_print_content(ptr, i_remaining);
			write(1, "\n", 1);
			ptr += 16;
			i++;
		}
	}
	return (addr);
}

void	ft_print_address(void *addr)
{
	unsigned long long	memory_address;
	unsigned char		*ptr_addr;
	int					i;

	i = 7;
	while (i >= 0)
	{
		memory_address = ((unsigned long long) addr);
		ptr_addr = (unsigned char *) &memory_address;
		write(1, convert_to_hex(ptr_addr[i]), 2);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_hex(void *addr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		write(1, convert_to_hex(((unsigned char *) addr)[i]), 2);
		i++;
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		i++;
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
	}
}

void	ft_print_content(void *addr, unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < n)
	{
		c = ((unsigned char *) addr)[i];
		if (c < ' ' || c > '~')
		{
			c = '.';
		}
		write(1, &c, 1);
		i++;
	}
}

char	*convert_to_hex(unsigned char c)
{
	char	output[2];
	char	*ptr;
	char	*mask;

	mask = "0123456789abcdef";
	ptr = &output[0];
	output[0] = mask[(c >> 4) & 15];
	output[1] = mask[c & 15];
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	unsigned char	s[] = {0x42, 0x6f, 0x6e, 0x6a, 0x6f, 0x75, 0x72, 0x20,
// 						   0x6c, 0x65, 0x73, 0x20, 0x61, 0x6d, 0x69, 0x6e,
// 						   0x63, 0x68, 0x65, 0x73, 0x09, 0x0a, 0x09, 0x63,
// 						   0x20, 0x20, 0x65, 0x73, 0x74, 0x20, 0x66, 0x6f,
// 						   0x75, 0x09, 0x74, 0x6f, 0x75, 0x74, 0x09, 0x63,
// 						   0x65, 0x20, 0x71, 0x75, 0x20, 0x6f, 0x6e, 0x20,
// 						   0x70, 0x65, 0x75, 0x74, 0x20, 0x66, 0x61, 0x69,
// 						   0x72, 0x65, 0x20, 0x61, 0x76, 0x65, 0x63, 0x09,
// 						   0x0a, 0x09, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x5f,
// 						   0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x0a, 0x0a,
// 						   0x0a, 0x09, 0x6c, 0x6f, 0x6c, 0x2e, 0x6c, 0x6f,
// 						   0x6c, 0x0a, 0x20, 0x00, 0x42, 0x6f, 0x6e, 0x6a};

// 	ft_print_memory(s, 13);
// 	write(1, "\n", 1);
// 	ft_print_memory(s, 26);
// 	write(1, "\n", 1);
// 	ft_print_memory(s, 0);
// 	write(1, "\n", 1);
// 	ft_print_memory(s, 92);
// 	write(1, "\n", 1);
// 	printf("pointer address = %s \n", s);
// 	printf("return value = %s \n", (char *)ft_print_memory(s, 25));
// 	return (0);
// }