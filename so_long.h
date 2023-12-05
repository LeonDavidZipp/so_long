/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:43:26 by lzipp             #+#    #+#             */
/*   Updated: 2023/12/05 17:23:11 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../libs/printf/ft_printf.h"
# include "../libs/get_next_line/get_next_line.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct field
{
	char	type;
	int		is_start;
	int		is_end;
}	field;

typedef struct node {
	int	x;
	int	y;
	int	g;
	int	h;
	int	f;
	struct node* parent;
}	node;

field	*get_fields(char *map);
field	**get_field_rows(char **map_array, int row_num);
field	**get_map(char *file);

char	*get_next_line(int fd);

#endif