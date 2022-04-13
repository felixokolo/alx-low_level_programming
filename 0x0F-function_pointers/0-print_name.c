/**
 * print_name - Function that prints a name
 * @name: Name to be printed
 * @f: Callback function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
