/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jongbpar <jongbpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:47:53 by jongbpar          #+#    #+#             */
/*   Updated: 2021/03/29 19:05:14 by jongbpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter >= 97 && letter <= 122)
	{
		ft_putchar(letter);
		letter++;
	}
}
