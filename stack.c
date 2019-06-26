/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:13:24 by mashley           #+#    #+#             */
/*   Updated: 2019/06/24 21:53:46 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"head.h"
#include <stdlib.h>

t_stack	*create_node(char data)
{
	t_stack	*tmp;

	if ((tmp = malloc(sizeof(t_stack))))
	{
		tmp->data = data;
		tmp->next = NULL;	
	}
	return (tmp);
}

void	push(t_stack **head, char data)
{
	t_stack	*tmp;

	tmp = create_node(data);
	if (*head)
	{
		tmp->next = *head;
		*head = tmp;
	}
	else
		*head = tmp;
}

char	pop(t_stack **head)
{
	t_stack	*tmp;
	char	val;

	if (head == NULL)
		return ('\0');
	tmp = *head;
	val = tmp->data;
	*head = (*head)->next;
	free(tmp);
	return (val);
}
