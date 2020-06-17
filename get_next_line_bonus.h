/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:07:16 by pcunha            #+#    #+#             */
/*   Updated: 2020/05/27 15:34:25 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define ERRO   -1
# define LEU    1
# define EOFF   0

int		get_next_line(int fd, char **line);
int		ft_len(char *s);
int		tem_barra_n(char *s);
int		erro(char **s);
int		extrai(char *str);
char	*concat(char *str_a, char *str_b);
void	salva(char *fonte, char *destino, int idx);
void	zera_armazem(char *armazem);

#endif
