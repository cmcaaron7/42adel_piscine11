#include <unistd.h>

void ft_putchar(void)
{
	char word;
	word = 'f';
	write (1, &word, 1);
}

void ft_newline(void)
{
	int newline;
	newline = '\n';
	write (1, &newline, 1);
}

int main(void)
{
	ft_putchar();
	ft_newline();
}


