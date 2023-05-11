int	ft_isset(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str3;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_isset(s1[start], set))
		start++;
	while (ft_isset(s1[end], set) && end > start)
		end--;
	str3 = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str3 == NULL)
		return (NULL);
	for (int i = 0; i <= end - start; i++)
		str3[i] = s1[start + i];
	str3[end - start + 1] = '\0';
	return (str3);
}