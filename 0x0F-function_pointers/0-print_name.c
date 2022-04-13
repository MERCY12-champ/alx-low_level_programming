/**
 * print_name - prints a name.
 *
 * @name: string to print
 * @f: function to be invoked
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
