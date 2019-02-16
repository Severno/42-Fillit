/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:08:47 by jcope             #+#    #+#             */
/*   Updated: 2019/02/15 16:37:02 by cschulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "../../libft/libft.h"

char	*parser(char *filename);

typedef struct		s_piece
{
	int				width;
	int				height;
	char			**piecemap;
	char			pieceletter;
	struct s_piece	next;
}					t_piece;

typedef struct	s_map
{
	int			size;
	char		**array;
}				t_map;

#endif
