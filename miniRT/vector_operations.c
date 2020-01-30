/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:29:36 by mgarcia-          #+#    #+#             */
/*   Updated: 2020/01/30 16:56:21 by mgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"

t_p3		normalize(t_p3 p)
{
	t_p3	nv;
	double	mod;

	mod = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
	nv.x = p.x / mod;
	nv.y = p.y / mod;
	nv.z = p.z / mod;
	return (nv);
}

double		dot(t_p3 a, t_p3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_p3		vec_add(t_p3 a, t_p3 b)
{
	t_p3	p;

	p.x = a.x + b.x;
	p.y = a.y + b.y;
	p.z = a.z + b.z;
	return (p);
}

t_p3		vec_substract(t_p3 a, t_p3 b)
{
	t_p3	p;

	p.x = a.x - b.x;
	p.y = a.y - b.y;
	p.z = a.z - b.z;
	return (p);
}