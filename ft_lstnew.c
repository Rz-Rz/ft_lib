/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:33:06 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/19 10:10:58 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
		t_list *new; 

		new = malloc(sizeof(t_list));
		if (!new) 
				return (NULL);
		new->content = content;
		new->next = NULL;
		return (new);
}
