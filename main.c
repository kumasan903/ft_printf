/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:43:13 by skawanis          #+#    #+#             */
/*   Updated: 2023/03/27 20:51:13 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
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
