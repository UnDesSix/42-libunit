/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:04:54 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:05:33 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strstr_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRSTR:");
	load_test(&lst, "Basic test", &strstr_basic_test);
	load_test(&lst, "NULL test", &strstr_null_test);
	load_test(&lst, "BUSE test", &strstr_buse_test);
	return (launch_tests(&lst));
}
