/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:27:41 by knfonda           #+#    #+#             */
/*   Updated: 2020/10/28 12:45:31 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int ch)
{
	if (ch > 31 && ch < 127)
		return (1);
	return (0);
}
