/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpark <dpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:32:52 by sangminpark       #+#    #+#             */
/*   Updated: 2023/01/15 14:34:23 by dpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

int	quotes_func_len(int quotes, char argv)
{
	if ((argv == '\"' && quotes == 1) || \
					(argv == '\'' && quotes == 2))
		return (1);
	return (0);
}
// 값을 받아오고 따옴표를 없애준다.
char	**quotes_func(char **argv)
{
	int		i;
	int		j;
	int		quotes;
	char	**str;

	quotes = 0;
	i = 0;
	while (argv[i])
		i++;
	str = malloc(sizeof(char *) * (i)); //str 사이즈만큼 말록
	str = 
	i = -1;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			quotes = is_quotes_set(argv[i][j], quotes);
			if (quotes_func_len(quotes, argv[i][j]) == 1)
				str[i] = fts_strjoin(str[i], argv[i][j], 0);
			else if (argv[i][j] != '\"' && argv[i][j] != '\'')
				str[i] = fts_strjoin(str[i], argv[i][j], 0);
		}
	}
	str[i + 1] = NULL; // 밖으로 빼줌
	return (str);
}
 