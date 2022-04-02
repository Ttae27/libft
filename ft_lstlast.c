/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:23:40 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/02 20:42:51 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
#include <stdio.h>                                                                                                
                                                                                                
int     main()                                                                                                
{                                                                                                
	t_list  *head;                                                                                                
	                                                                                                
	head = malloc(sizeof(t_list));                                                                                                
	head->content = "67";                                                                                                
	head->next = NULL;                                                                                              
		t_list  *current;
		current = malloc(sizeof(t_list));
		current->content = "89";
		current->next = NULL;
	head->next = current;

	current = malloc(sizeof(t_list));
	current->content = "90";
	current->next = NULL;
	head->next->next = current;

	t_list	*test;

	test = ft_lstlast(head);
	printf("%s",test->content);
}
