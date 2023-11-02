#include "main.h"

/**
 * multiply - Multiply two numbers represented as strings.
 * @num1: First number as a string
 * @num2: Second number as a string
 *
 * Return: Pointer to the result or NULL if failed
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, d1, d2, sum;
	int *result;
	char *res;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		d1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = num2[j] - '0';
			sum = d1 * d2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (result[i] == 0)
		i++;
	res = malloc(sizeof(char) * (len1 + len2 - i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (i < len1 + len2)
	{
		res[j] = result[i] + '0';
		i++;
		j++;
	}
	res[j] = '\0';
	free(result);
	return (res);
}

/**
 * is_all_digits - Check if a string contains only digits.
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_all_digits(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3 || !is_all_digits(argv[1]) || !is_all_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

