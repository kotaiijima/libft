/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/10 15:39:29 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	re_nb;
	int			sign;

	i = 0;
	re_nb = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isdigit(str[i]))
	{
		re_nb = (re_nb * 10) + (str[i] - '0');
		i++;
	}
	return (re_nb * sign);
}

int	ft_isspace(int c)
{
	return ((c == '\t' || c == '\n' || c == '\v' || \
					c == '\f' || c == '\r' || c == ' '));
}

// int main(int argc, char **argv){
// 	printf("ft :%d\n",ft_atoi(argv[1]));
// 	printf("org:%d\n",atoi(argv[1]));
// 	(void)argc;
// }
