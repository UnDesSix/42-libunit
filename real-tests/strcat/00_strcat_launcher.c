/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:00:03 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 19:26:32 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcat_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRCAT:");
	load_test(&lst, "Basic test", &strcat_basic_test);
	load_test(&lst, "NULL test", &strcat_null_test);
	load_test(&lst, "BUSE test", &strcat_buse_test);
	return (launch_tests(&lst));
}
