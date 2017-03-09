/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:05:48 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 18:05:55 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*lst;

	lst = NULL;
	pl_putendl("STRLEN:");
	load_test(&lst, "Basic test", &strlen_basic_test);
	load_test(&lst, "NULL test", &strlen_null_test);
	load_test(&lst, "BUSE test", &strlen_buse_test);
	return (launch_tests(&lst));
}
