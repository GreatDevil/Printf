/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:11:24 by flogan            #+#    #+#             */
/*   Updated: 2019/09/08 21:52:16 by flogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}