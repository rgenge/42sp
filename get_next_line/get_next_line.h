

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
#define BUFFER_SIZE 20

char	*ft_strjoin(char const *s1, char const *s2);
char *get_next_line(int fd);
char *get_line(char	*text);


#endif