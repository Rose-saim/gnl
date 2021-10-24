#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 5

#endif

# include <ctype.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct	s_fd
{
	int		value_fd;
	char	buff[BUFFER_SIZE + 1];
	struct s_fd *next;
}				t_fd;

int		ft_return(int ret, char *buff, int j);
int		copy_after_nl(char *str);

char	*get_next_li(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_realloc(char *line, char *buff);

void	*ft_memset( void *pointer, int value, size_t count);
void	*ft_memcpy(void *dest, void *src, size_t n);

size_t	ft_strlen(char *s);

t_fd	*add_front_li(t_fd *li, int add_value);
t_fd	*is_exist_node(t_fd *li, int fd);

#endif