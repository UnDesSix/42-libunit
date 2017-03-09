/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:55:54 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 19:56:18 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcmp_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRCMP:");
	load_test(&lst, "Basic test", &strcmp_basic_test);
	load_test(&lst, "NULL test", &strcmp_null_test);
	load_test(&lst, "BUSE test", &strcmp_buse_test);
	return (launch_tests(&lst));
}
