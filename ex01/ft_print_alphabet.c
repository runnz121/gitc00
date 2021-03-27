/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jongbpar <jongbpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:47:53 by jongbpar          #+#    #+#             */
/*   Updated: 2021/03/27 17:27:26 by jongbpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter >= 97 && letter <= 122)
	{
		write(1, &letter, 1);
		letter++;
	}
}
