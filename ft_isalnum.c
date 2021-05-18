int	ft_isdigit(int c)
{
	return ((c < 58 && c > 47) || (c < 123 && c > 96) || (c > 64 && c < 91));
}
