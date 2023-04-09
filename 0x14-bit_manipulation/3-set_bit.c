/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index:
 *
 * Return: 1 for Sucess, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if (!((*n >> index) & 1))
	{
		*n = (*n + 1) << index;
		return (1);
	}
	return (-1);
}
