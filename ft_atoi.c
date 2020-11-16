/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:50:31 by knfonda           #+#    #+#             */
/*   Updated: 2020/11/02 19:54:03 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		unprintab(char ch)
{
	if ((ch >= 9 && ch <= 13) || ch == ' ')
		return (1);
	return (0);
}

int		numeric(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int number;
	int minus;

	minus = 1;
	number = 0;
	while (unprintab(*str))
		str++;
	if (*str == '-')
	{
		str++;
		minus = -1;
	}
	else if (*str == '+')
		str++;
	while (numeric(*str))
	{
		number = number * 10;
		number = number + (*str - '0');
		str++;
	}
	return (number * minus);
}
