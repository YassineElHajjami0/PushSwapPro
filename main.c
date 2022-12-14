/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:50:45 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/12/21 11:35:21 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list		*a;
	t_list		*b;
	t_allvar	allvar;

	b = NULL;
	a = NULL;
	if (ac == 1)
	{
		write(2, "Eroor\n", 6);
		return (0);
	}
	if (!parsing(&a, ac, av))
		return (0);
	from_a_to_b(&a, &allvar);
	set_num(&a, &allvar);
	move_to_top_of_a(&a, &b, &allvar);
	count_best_moves(&a, &b, &allvar);
	from_b_to_a(&a, &b, &allvar);
	set_the_head(&a, &allvar);
}
