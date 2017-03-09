/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcat_buse_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:08:57 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:11:30 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strlcat_buse_test(void)
{
	char	buf[11];
	char	*s;

	s = "abcdefg";
	pl_strcpy(buf, "abc");
	s[0] = 'x';
	if (ft_strlcat(buf, s, 11) == 11)
		return (0);
	else
		return (-1);
}
