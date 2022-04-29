

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (NULL);
}


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dest == NULL)
		return (NULL);
	else
	{
		while (s1[i])
			dest[i++] = s1[j++];
		j = 0;
		while (s2[j])
			dest[i++] = s2[j++];
		dest[i] = '\0';
	}
	return (dest);
}


char *get_next_line(int fd)
{
	char			*buffer;
	static char			*text;
//	int				counter;
	int 			read_size;
	char		*line;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	text = NULL;
	if(!buffer)
		return (NULL);
	read_size = 1;
	while(read_size > 0 && ft_strchr(text, '\n') == NULL)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		buffer[read_size] = '\0';
		text = ft_strjoin(text, buffer);
	}
	free(buffer);
	line = get_line(text);
//	text = newtext(text);
	return (line);	
}

char *get_line(char	*text)
{
	char	*line;
	int		i;
	int		size_line;

	i = 0;
	size_line = 0;
	
	while(text[size_line] != '\n' && text[size_line] != '\0')
		size_line++;
	line = malloc((sizeof(char) * size_line + 1));
	if (!line || !text)
		return (NULL);
	while(text[i++] != '\n' && text[i] != '\0')
		line[i] = text[i];
	line[i] = '\0';
	return (line);
}

char *get_newtext(char	*text)
{
	char	*line;
	int		i;
	int		size_line;
}
