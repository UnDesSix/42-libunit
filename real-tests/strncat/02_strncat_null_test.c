/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strncat_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:39:33 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:39:40 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncat_null_test(void)
{
	char	*s;

	s = ft_strnew(10);
	s = pl_strcpy(s, "hello");
	s = ft_strncat(s, NULL, 5);
	if (pl_strcmp(s, "helloworld") == 0)
		return (0);
	else
		return (-1);
}
