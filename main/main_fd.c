#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char	c[11] = "a";
	int		fd;

	FILE	*file = fopen("text.txt", "a");
	fclose(file);

	fd = open("text.txt", O_RDWR);
	ft_putchar_fd('c', fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 1, file);
	fwrite(c, 1, 1, stdout);
	fclose(file);

	printf("\n");

	fd = open("text.txt", O_RDWR);
	ft_putnbr_fd(2147483647, fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 10, file);
	fwrite(c, 1, 10, stdout);
	fclose(file);

	printf("\n");

	fd = open("text.txt", O_RDWR);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 11, file);
	fwrite(c, 1, 11, stdout);
	fclose(file);

	printf("\n");

	fd = open("text.txt", O_RDWR);
	ft_putnbr_fd(0, fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 1, file);
	fwrite(c, 1, 1, stdout);
	fclose(file);

	printf("\n");

	fd = open("text.txt", O_RDWR);
	ft_putendl_fd("Hello", fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 6, file);
	fwrite(c, 1, 6, stdout);
	fclose(file);

	printf("\n");

	fd = open("text.txt", O_RDWR);
	ft_putstr_fd("Hello", fd);
	close(fd);
	file = fopen("text.txt", "r");
	fread(c, 1, 5, file);
	fwrite(c, 1, 5, stdout);
	fclose(file);

	printf("\n");

	system("rm text.txt");
	
}