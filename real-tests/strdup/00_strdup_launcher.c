/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:07:19 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 18:07:24 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strdup_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRDUP:");
	load_test(&lst, "Basic test", &strdup_basic_test);
	load_test(&lst, "NULL test", &strdup_null_test);
	load_test(&lst, "BUSE test", &strdup_buse_test);
	return (launch_tests(&lst));
}
