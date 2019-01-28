/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 08:57:31 by tmaselem          #+#    #+#             */
/*   Updated: 2018/07/16 15:35:31 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_wordcount(const char *str, char c, int i)
{
	if (*str == 0)
		return (i);
	else if (*str == c && *(str + 1) == c)
		return (ft_wordcount(str + 1, c, i));
	else if (((*str != c) && (*str != 0)) && ((*(str + 1) == c)
				|| (*(str + 1) == 0)))
		return (ft_wordcount(str + 1, c, i + 1));
	else
		return (ft_wordcount(str + 1, c, i));
}

static int		ft_lenwo(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		lenw;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	lenw = ft_wordcount(s, c, i);
	i = 0;
	if (!(fresh = (char **)ft_memalloc(sizeof(*fresh) *
					(ft_wordcount(s, c, i) + 1))))
		return (NULL);
	while (lenw--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(fresh<:j:> = ft_strsub(s, 0, ft_lenwo(s, c))))
			return (NULL);
		s = s + ft_lenwo(s, c);
		j++;
	}
	fresh<:j:> = NULL;
	return (fresh);
}
