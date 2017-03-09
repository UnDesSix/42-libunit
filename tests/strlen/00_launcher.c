/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:46:37 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:45:46 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*lst;

	lst = NULL;
	pl_putendl("STRLEN:");
	load_test(&lst, "Basic test", &strlen_basic_test);
	load_test(&lst, "NULL test", &strlen_null_test);
	load_test(&lst, "Bigger string test", &strlen_bigger_str_test);
	load_test(&lst, "BUSE test", &strlen_buse_test);
	load_test(&lst, "KO test", &strlen_ko_test);
	return (launch_tests(&lst));
}
