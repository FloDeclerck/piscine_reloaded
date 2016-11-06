/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:24:37 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/04 16:32:09 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char		**ft_sort_words_table(int ac, char **tab)
{
	int		ordered;
	char	*tmp;
	int		i;

	ordered = 1;
	while (ordered)
	{
		ordered = 0;
		i = 0;
		while ((i + 2) < ac)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ordered = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
	return (tab);
}

int			main(int ac, char **av)
{
	char	**tab;
	int		i;

	tab = ft_sort_words_table(ac, av + 1);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
	return (0);
}
