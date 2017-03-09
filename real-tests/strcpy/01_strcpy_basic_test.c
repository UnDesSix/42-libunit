/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:16:00 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 18:47:12 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strcpy_basic_test(void)
{
	char	*s1;
	char	*s2;

	s2 = "hello";
	s1 = pl_strnew(pl_strlen(s2));
	ft_strcpy(s1, s2);
	if (pl_strcmp(s1, s2) == 0)
		return (0);
	else
		return (-1);
}
