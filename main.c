/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:43:13 by skawanis          #+#    #+#             */
/*   Updated: 2023/03/27 21:18:03 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test1(void)
{
	puts("==test1== (\"hello,world!\\t\")");
	printf("return = %d\n", printf("hello, world!\t"));
	printf("return = %d\n", ft_printf("hello, world!\t"));
	puts("==test2== (\"num = %d\\t\", 1)");
	printf("return = %d\n", printf("num = %d\t", 1));
	printf("return = %d\n", ft_printf("num = %d\t", 1));
	puts("==test3== (\"num = %i\\t\", INT_MIN)");
	printf("return = %d\n", printf("num = %i\t", INT_MIN));
	printf("return = %d\n", ft_printf("num = %i\t", INT_MIN));
	puts("test4== (\"char = %c\\t\", 'c')");
	printf("return = %d\n", printf("char = %c\t", 'c'));
	printf("return = %d\n", ft_printf("char = %c\t", 'c'));
	puts("==test4== (\"str = %s\t\", \"sabakan\")");
	printf("return = %d\n", printf("str = %s\t", "sabakan"));
	printf("return = %d\n", ft_printf("str = %s\t", "sabakan"));
	puts("==test5== (\"uint = %u\\t\", UINT_MAX)");
	printf("return = %d\n", printf("uint = %u\t", UINT_MAX));
	printf("return = %d\n", ft_printf("uint = %u\t", UINT_MAX));
}

void	test2(void)
{
	int	a;

	puts("==test6== (\"hex = %x\\t\", 123456)");
	printf("return = %d\n", printf("hex = %x\t", 123456));
	printf("return = %d\n", ft_printf("hex = %x\t", 123456));
	puts("==test7== (\"HEX = %X\\t\", 123456)");
	printf("return = %d\n", printf("HEX = %X\t", 123456));
	printf("return = %d\n", ft_printf("HEX = %X\t", 123456));
	puts("==test8== (\"ptr = %p\\t\", &a)");
	printf("return = %d\n", printf("ptr = %p\t", &a));
	printf("return = %d\n", ft_printf("ptr = %p\t", &a));
	puts("==test9== (\"ptr = %p\\t\", NULL)");
	printf("return = %d\n", printf("ptr = %p\t", NULL));
	printf("return = %d\n", ft_printf("ptr = %p\t", NULL));
	puts("==test10== (\"%%\")");
	printf("return = %d\n", printf("%%"));
	printf("return = %d\n", ft_printf("%%"));
}

int	main(void)
{
	test1();
	test2();
}
