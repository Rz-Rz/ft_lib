/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:42:02 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/18 19:05:01 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nb;
	
	nb = n;
	if(nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb/10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	else 
		ft_putchar_fd(nb + '0', fd);
}
