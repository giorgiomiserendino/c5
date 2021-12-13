/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmiseren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:16:40 by gmiseren          #+#    #+#             */
/*   Updated: 2021/12/13 17:20:49 by gmiseren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	while (nb < 2147483647)
	{
		i = 2;
		while (i < nb / 2 && nb % i != 0)
			++i;
		if (nb % i != 0)
			return (nb);
		++nb;
	}
	return (0);
}	
