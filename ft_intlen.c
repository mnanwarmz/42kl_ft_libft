int	ft_intlen(unsigned long n)
{
	if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	return (1);
}
