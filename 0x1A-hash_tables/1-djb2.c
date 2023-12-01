/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The input string to be hashed.
 *
 * Return: The hash value generated using the djb2 algorithm.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Initial hash value (chosen by the algorithm's creator) */
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
