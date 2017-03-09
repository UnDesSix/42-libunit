/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncat_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:24:34 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:24:56 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncat_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRNCAT:");
	load_test(&lst, "Basic test", &strncat_basic_test);
	load_test(&lst, "NULL test", &strncat_null_test);
	load_test(&lst, "BUSE test", &strncat_buse_test);
	return (launch_tests(&lst));
}
