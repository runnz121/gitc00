/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jongbpar <jongbpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:02:53 by jongbpar          #+#    #+#             */
/*   Updated: 2021/03/27 22:50:22 by jongbpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int w;
	int size;

	size = 999;
	w = 10;
	while (size > 0)
	{
		if (w > 10 && w < 100)
		{
			if ((w / 10) == (w % 10))
			{
				w++;
			}
			else
			{
				write(1, &w, 3);
				w++;
			}
		}
		if (w > 100 && w < 999)
		{
			if (((w / 100) == ((w % 100) / 10)) || ((w / 10) == (w % 10)))
			{
				w++;
			}
			else
			{
				write(1, &w, 3);
				w++;
			}
		size--;
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
