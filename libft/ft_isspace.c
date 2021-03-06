/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:16:08 by flogan            #+#    #+#             */
/*   Updated: 2019/09/08 21:53:20 by flogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n'
			|| ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}
