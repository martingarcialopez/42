/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:22:38 by mgarcia-          #+#    #+#             */
/*   Updated: 2019/11/24 16:35:18 by mgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	_putchar(char c, t_flags *f)
{
	write(1, &c, 1);
	(f->idx)++;
}

int		_atoi(const char **str)
{
	int i;

	i = 0;
	while (ft_isdigit(**str))
		i = i * 10 + (*((*str)++) - '0');
	return i;
}