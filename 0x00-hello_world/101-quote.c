#include<unistid.h>

/**
 * main - Entry point
 *
 * Description: print sentence
 *   write (int fd,const void,size)
 *
 * Return: 1(failed)
*/

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, arr, 59);
	return (1);
}
