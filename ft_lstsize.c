/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:40:14 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/02 20:39:38 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = lst;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
#include <stdio.h>

int	main()
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->content = "67";
	head->next = NULL;

	t_list	*current;
	
	current = malloc(sizeof(t_list));
	current->content = "89";
	current->next = NULL;
	head->next = current;

	current = malloc(sizeof(t_list));
	current->content = "90";
	current->next = NULL;
	head->next->next = current;

	printf("%d",ft_lstsize(head));
}
