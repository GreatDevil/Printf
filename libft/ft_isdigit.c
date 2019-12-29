/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:33:41 by flogan            #+#    #+#             */
/*   Updated: 2019/09/05 14:39:14 by flogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int chr)
{
	if (chr >= '0' && chr <= '9')
		return (1);
	else
		return (0);
}