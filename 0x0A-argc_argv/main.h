/*#ifdef UNUSED
*#elif defined(__GNUC__)
*# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
*#elif defined(__LCLINT__)
*# define UNUSED(x) /*@unused@ x
*#else
*# define UNUSED(x) x
*#endif
*void dcc_mon_siginfo_handler(int UNUSED(whatsig))
*/

/**
* _putchar - This is used to output the character.
* @c: This is a character
* Return: int
*/
int _putchar(char c);