/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:14:07 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/05 16:04:19 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return (0);
}*/
