/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcat_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:53:13 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:12:02 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strlcat_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRNCAT:");
	load_test(&lst, "Basic test", &strlcat_basic_test);
	load_test(&lst, "NULL test", &strlcat_null_test);
	load_test(&lst, "BUSE test", &strlcat_buse_test);
	return (launch_tests(&lst));
}
