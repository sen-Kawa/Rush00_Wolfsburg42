/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 01:03:55 by coder             #+#    #+#             */
/*   Updated: 2021/10/03 16:36:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// helper function to check for min/max values
// should return 0 if val is not min or max
// should return 1 if value is min or max

void	ft_putchar(char c);

int	check_min_max(int	val1, int	val2)
{
	if (val1 == 0)
	{
		return (1);
	}
	else if (val1 - (val2 - 1) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	condition_checker(int	x, int	y, int	x_pos, int	y_pos)
{
	if (check_min_max(x_pos, x) && check_min_max(y_pos, y))
	{
		ft_putchar('o');
	}
	else if (check_min_max(y_pos, y))
	{
		ft_putchar('-');
	}
	else if (check_min_max(x_pos, x))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	x_pos;
	int	y_pos;

	x_pos = 0;
	y_pos = 0;
	while (y_pos < y)
	{
		while (x_pos < x)
		{
			condition_checker(x, y, x_pos, y_pos);
			x_pos++;
		}
		ft_putchar('\n');
		x_pos = 0;
		y_pos++;
	}
}
