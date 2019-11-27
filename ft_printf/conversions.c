/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:05:54 by mgarcia-          #+#    #+#             */
/*   Updated: 2019/11/27 16:07:50 by mgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t			signed_cast(t_flags *f, va_list ap)
{
	if (f->flags & (FLAG_LONG_LONG | FLAG_LONG))
		return (va_arg(ap, ssize_t));
	if (f->flags & FLAG_CHAR)
		return ((signed char)va_arg(ap, int));
	if (f->flags & FLAG_SHORT)
		return ((short)va_arg(ap, int));
	return (va_arg(ap, int));
}

size_t			unsigned_cast(t_flags *f, va_list ap)
{
	if (f->flags & (FLAG_LONG_LONG | FLAG_LONG))
		return (va_arg(ap, size_t));
	if (f->flags & FLAG_CHAR)
		return ((unsigned char)va_arg(ap, int));
	if (f->flags & FLAG_SHORT)
		return ((unsigned short)va_arg(ap, int));
	return ((unsigned int)va_arg(ap, int));
}
