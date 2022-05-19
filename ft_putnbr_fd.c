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

		if (n == -2147483648)
				ft_putstr_fd("-2147483648", fd);
		else if(n < 0)
		{
				ft_putchar_fd('-', fd);
				ft_putnbr_fd(-n, fd);
		}
		else if (n >= 10)
		{
				ft_putnbr_fd(n / 10, fd);
				ft_putchar_fd(n % 10 + '0', fd);
		}
		else 
				ft_putchar_fd(n + '0', fd);
}
