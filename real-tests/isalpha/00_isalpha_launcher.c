/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalpha_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:31:44 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:37:14 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		isalpha_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("ISALPHA:");
	load_test(&lst, "Basic test", &isalpha_basic_test);
	return (launch_tests(&lst));
}
