/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 12:34:53 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/10 12:46:21 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
			res *= nb;
		nb -= 1;
		return (res);
	}
	else
		return (0);
}
