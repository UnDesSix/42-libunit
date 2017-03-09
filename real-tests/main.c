/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:15:51 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 23:38:36 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int		main(void)
{
	int success;

	g_num_tests = 0;
	success = 0;
	print_header();
	success += strlen_launcher();
	success += strdup_launcher();
	success += strcpy_launcher();
	success += strcat_launcher();
	success += strcmp_launcher();
	success += strncpy_launcher();
	success += strncat_launcher();
	success += strncmp_launcher();
	success += strlcat_launcher();
	success += strchr_launcher();
	success += strrchr_launcher();
	success += strstr_launcher();
	success += strnstr_launcher();
	success += isalpha_launcher();
	success += isdigit_launcher();
	pl_putchar('\n');
	pl_putnbr(success);
	pl_putchar('/');
	pl_putnbr(g_num_tests);
	pl_putendl(" tests checked");
	return (0);
}
