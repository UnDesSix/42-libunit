/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcat_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:54:08 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:04:07 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strlcat_basic_test(void)
{
	char	buf[11];

	pl_strcpy(buf, "abc");
	if (ft_strlcat(buf, "abcdefgh", 11) == 11)
		return (0);
	else
		return (-1);
}
