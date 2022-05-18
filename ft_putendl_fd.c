/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:54:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/16 22:37:25 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	int fd = open("putendl_file", O_RDWR | O_CREAT);
// 	if (fd == -1)
// 	{
// 		perror("error!");
//         exit(EXIT_FAILURE);
// 	}
// 	printf("%d\n",fd);
// 	ft_putendl_fd("abcde", fd);

//     close(fd);
//     exit(EXIT_SUCCESS);
// }
