#include "../push_swap.h"

static int slen(char *s)
{
	int	ct;

	ct = 0;
	while(s[ct])
		ct++;
	return (ct);
}
char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * slen(src) + 1);
	if (!new)
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}


char *join_all(char *s1, char *s2)
{
	int		i;
	//int		len;
	char	*new;

	i = 0;
	//if (!s1)
	//	return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	new = malloc(sizeof(char) * (slen(s1) + slen(s2) + 2));
	if (!new)
		return (NULL);
	while (*s1)
		new[i++] = *s1++;
	new[i++] = ' ';
	while (*s2)
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}