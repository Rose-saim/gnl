#include "get_next_line_bonus.h"

t_fd	*is_exist_node(t_fd *li, int fd)
{
	if (!li)
	{
		puts("initialise");
		li = (t_fd *)malloc(sizeof(t_fd));
		ft_memset(li->buff, 0, BUFFER_SIZE);
		li->value_fd = fd;
		li->next = NULL;
	}
	while (li)
	{
		puts("search");
		if (li->value_fd == fd)
			return li;
		li = li->next;
	}
	puts("add");
	return (add_front_li(li, fd));
}

// int main()
// {
// 	t_fd *list = NULL;
// 	int	add1 = 0;

// 	is_exist_node(list, add1);
// }

// t_fd	*add_front_li(t_fd *li, int add_value)
// {
// 	t_fd	*node;

// 	node = malloc(sizeof(t_fd));
// 	if (!node)
// 		return (NULL);
// 	node->value_fd = add_value;
// 	node->next = li;
// 	return (node);
// }

// int	copy_after_nl(char *str)
// {
// 	int		j;

// 	if (ft_strchr(str, '\n'))
// 	{
// 		j = (ft_strchr(str, '\n') + 1) - str;
// 		str = (ft_strchr(str, '\n') + 1);
// 		while (*str)
// 		{
// 			*(str - j) = *str;
// 			str++;
// 		}
// 		*(str - j) = 0;
// 		return (1);
// 	}
// 	else
// 		str = ft_memset(str, 0, BUFFER_SIZE + 1);
// 	return (0);
// }

// int	ft_return(int ret, char *buff, int j)
// {
// 	if (ret < 0)
// 		return (-1);
// 	if (ft_strlen(buff) == 0 && ret < BUFFER_SIZE && j == 0)
// 		return (0);
// 	if (ret > 0 || j > 0)
// 		return (1);
// 	return (ret);
// }

// static	void	debug_print_lst(t_fd *list)
// {
// 	printf("\nfd list:\n");
// 	while (list)
// 	{
// 		printf("%d -> ", list->value_fd);
// 		list = list->next;
// 	}
// 	printf("\n\n");
// }

// int	get_next_line(int fd, char **line)
// {
// 	static t_fd		*list;
// 	t_fd			*curr;
// 	int				ret;

// 	curr = is_exist_node(list, fd);
// 	if (!list)
// 		list = curr;
// 	debug_print_lst(list);
// 	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, "", 0) < 0 || read(fd, list->buff, 0) < 0 || !curr)
// 		return (-1);
// 	*line = NULL;
// 	ret = 1;
// 	if (curr->buff[0] != 0)
// 		*line = ft_realloc(*line, curr->buff);
// 	printf("curr->buff before the loop|%s|\n", curr->buff);
// 	while (!ft_strchr(curr->buff, '\n') && ret > 0)
// 	{
// 		ret = read(fd, curr->buff, BUFFER_SIZE);
// 		curr->buff[ret] = 0;
// 		printf("curr->buff |%s|\n", curr->buff);
// 		*line = ft_realloc(*line, curr->buff);
// 		if (ret < 1 || curr->buff[0] == '\0')
// 			break ;
// 	}
// 	return (ft_return(ret, curr->buff, copy_after_nl(curr->buff)));
// }

// int	main(void)
// {
	
// 	// int		fd[3];
// 	// int 	ret = 0;
// 	// char 	*line;
// 	// fd[0] = open("file_0", O_RDONLY);
// 	// fd[1] = open("file_1", O_RDONLY);
// 	// fd[2] = open("file_2", O_RDONLY);
// 	// ret = get_next_line(fd[0], &line);
// 	// printf("file_0: line [1] : |\e[33m%s\e[0m| ret [1] : %d\n", line, ret);
// 	// free(line);
// 	// ret = get_next_line(fd[1], &line);
// 	// printf("file_1: line [1] : |\e[33m%s\e[0m| ret [2] : %d\n", line, ret);
// 	// free(line);

// 	// // ret = get_next_line(fd[2], &line);
// 	// // printf("file_2: line [1] : |\e[33m%s\e[0m| ret [3] : %d\n", line, ret);
// 	// // free(line);

// 	// ret = get_next_line(fd[0], &line);
// 	// printf("file_0: line [2] : |\e[33m%s\e[0m| ret [6] : %d\n", line, ret);
// 	// free(line);

// 	// ret = get_next_line(fd[1], &line);
// 	// printf("file_1: line [2] : |\e[33m%s\e[0m| ret [4] : %d\n", line, ret);
// 	// free(line);
// 	// // ret = get_next_line(fd[2], &line);
// 	// // printf("file_2: line [2] : |\e[33m%s\e[0m| ret [5] : %d\n", line, ret);
// 	// // free(line);


// 	return (0);
// }


// int main()
// {
// 	t_fd	*list;
// 	t_fd	*temp_list ;
// 	int		i = 0;
// 	list = (t_fd *)malloc(sizeof(t_fd));

// 	// temp_list = NULL;
// 	temp_list = list;
// 	while (i < 10)
// 	{
// 		puts("in the loop");
// 		fflush(stdout);
// 		temp_list->value_fd = i;
// 		printf("temp_list->value_fd |%d|", temp_list->value_fd);
// 		temp_list = list->next;
// 		i++;
// 	}
// }