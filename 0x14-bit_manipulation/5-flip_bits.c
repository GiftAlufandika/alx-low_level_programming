/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bts = 0;
	unsigned long int x_o_r;

	x_o_r = n ^ m;

	do
	{
		bts += x_o_r & 1;
		x_o_r >>= 1;
	}
	while (x_o_r);

	return (bts);
}
