/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:08:41 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 18:09:20 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcpy_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRCPY:");
	load_test(&lst, "Basic test", &strcpy_basic_test);
	load_test(&lst, "NULL test", &strcpy_null_test);
	load_test(&lst, "BUSE test", &strcpy_buse_test);
	return (launch_tests(&lst));
}
