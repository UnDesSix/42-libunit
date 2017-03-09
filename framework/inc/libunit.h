/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:29:11 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 23:34:19 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include <string.h>

int					g_num_tests;

typedef struct		sp_list
{
	char			*name;
	int				(*func)(void);
	int				success;
	struct sp_list	*next;
}					t_unit_test;

void				load_test(t_unit_test **alst, char *name, int (*f)(void));
int					launch_tests(t_unit_test **alst);
void				output_test(t_unit_test *lst);
void				print_header(void);
void				pl_putchar(char c);
void				pl_putstr(char const *s);
void				pl_putendl(char const *s);
void				pl_putnbr(int n);
char				*pl_strdup(char const *s);
size_t				pl_strlen(const char *s);
void				pl_memdel(void **ap);
int					pl_strcmp(const char *s1, const char *s2);
char				*pl_strnew(size_t size);
void				pl_bzero(void *s, size_t n);
void				*pl_memset(void *b, int c, size_t len);
char				*pl_strcpy(char *dst, const char *src);

#endif
