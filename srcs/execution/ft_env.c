/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:21:55 by azabir            #+#    #+#             */
/*   Updated: 2022/09/04 14:58:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	ft_env(char	**env)
{
	int	i;

	i = -1;
	while (env[++i])
	{
		if (ft_strchr(env[i], '='))
			printf("%s\n", env[i]);
	}
	return (0);
}