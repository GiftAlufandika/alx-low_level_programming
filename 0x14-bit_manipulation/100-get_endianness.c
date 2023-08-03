/**
 * get_endianness -  function that checks the endianness
 *
 * Return: 0 for Big Endian, 1 for  Little Endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *chr = (char *) & n;

	if (*chr)
		return (1);

	return (0);
}
