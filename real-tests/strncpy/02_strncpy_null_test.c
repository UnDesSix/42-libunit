/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strncpy_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:11:40 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:18:48 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncpy_null_test(void)
{
	char	buf[6];
	char	*s;

	s = "abc\0\0\0";
	ft_strncpy(buf, NULL, 6);
	if (pl_strcmp(buf, s) == 0)
		return (0);
	else
		return (-1);
}
