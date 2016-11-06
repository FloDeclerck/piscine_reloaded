/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:49:55 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/04 16:51:40 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb > 0 && nb < 13)
	{
		while (nb > 0)
		{
			result = nb * result;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
