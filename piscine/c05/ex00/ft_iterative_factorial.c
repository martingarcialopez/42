/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 21:54:21 by mgarcia-          #+#    #+#             */
/*   Updated: 2019/07/09 18:42:13 by mgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = 1;
	while (nb > 0)
		fact *= nb--;
	return (fact);
}
