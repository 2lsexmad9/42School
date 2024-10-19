/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:37:20 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/07 21:37:38 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, const char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
