/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:18:00 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/05 14:57:25 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
	}
	return (*--s1 - *--s2);
}

/*int main()
{
    char *str1 = "HIII";
    char *str2 = "H";
    int result;

    result = ft_strcmp(str1, str2);
    if (result > 0)
    {
		char* string = "The first string is greater than the second.\n";
		int		len;
		int		i;

		len = ft_strlen(string);
		i = 0;
		while (i < len)
		{
			ft_putchar(string[i]);
			i++;
		}
    }
    else if (result < 0)
    {
        char* string = "The first string is less than the second.\n";
		int		len = ft_strlen(string);
		int		i;

		len = ft_strlen(string);
		i = 0;
		while (i < len)
		{
			ft_putchar(string[i]);
			i++;
		}
    }
    else
    {
        char* string = "The strings are equal.\n";
		int		len;
		int		i;

		len = ft_strlen(string);
		i = 0;
		while (i < len)
		{
			ft_putchar(string[i]);
			i++;
		}
    }

    return 0;
}*/
