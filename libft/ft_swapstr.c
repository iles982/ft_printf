/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclarita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:19:05 by tclarita          #+#    #+#             */
/*   Updated: 2019/09/12 21:19:07 by tclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapstr(char **str1, char **str2)
{
	char *ptr;

	ptr = *str1;
	*str1 = *str2;
	*str2 = ptr;
}
