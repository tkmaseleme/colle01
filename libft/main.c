/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:53:34 by tmaselem          #+#    #+#             */
/*   Updated: 2019/01/28 15:07:14 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		check_puzzle(char **tab, int n);
int		check_line(char **tab, char nb, int x);
int		check_column(char **tab, char nb, int y);
int		check_block(char **tab, int x, int y, char nb);

void	display(char **tab)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (tab[i][j] != 0)
		{
			ft_putchar(tab[i][j]);
			if (j != 8)
				ft_putchar(32);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

int		solver(char **puzzle, int position)
{
	int		x;
	int		y;
	char	nb;

	nb = 48;
	x = position / 9;
	y = position % 9;
	if (position == 90)
		return (1);
	if (puzzle[x][y] != 46)
		return (solver(puzzle, position + 1));
	while (++nb <= 57)
	{
		if (check_line(puzzle, nb, x) + check_column(puzzle, nb, y) == 2)
		{
			if (check_block(puzzle, x, y, nb) == 1)
			{
				puzzle[x][y] = nb;
				if (solver(puzzle, position + 1))
					return (1);
			}
		}
	}
	puzzle[x][y] = 46;
	return (0);
}

int		main(int argc, char **argv)
{
	if (check_puzzle(argv, argc))
	{
		if (solver(argv, 9))
			display(argv);
		else
		{
			ft_putstr("A fuck up");
			ft_putchar(10);
		}
	}
	else
	{
		ft_putstr("A fuck up");
		ft_putchar(10);
	}
	return (0);
}
