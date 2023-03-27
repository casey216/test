/**
 * _strlen - returns the length of a string
 *
 * @str: string variable
 * Return: length of string
 */

int _strlen(const char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

