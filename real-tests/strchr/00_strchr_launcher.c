/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strchr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:19:53 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:20:29 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strchr_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRCHR:");
	load_test(&lst, "Basic test", &strchr_basic_test);
	load_test(&lst, "NULL test", &strchr_null_test);
	load_test(&lst, "BUSE test", &strchr_buse_test);
	return (launch_tests(&lst));
}
