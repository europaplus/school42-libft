/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:09:45 by knfonda           #+#    #+#             */
/*   Updated: 2020/10/28 14:41:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int ch)
{
	if (ch - 48 >= 0 && ch - 48 <= 9)
		return (1);
	return (0);
}
