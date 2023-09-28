#ifndef MAIN_H
#define MAIN_H

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to the binary string
 *
 * Return: The converted unsigned integer
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The unsigned long integer to print in binary
 */
void print_binary(unsigned long int n);

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The unsigned long integer
 * @index: The index of the bit to get
 *
 * Return: The value of the bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointer to the unsigned long integer
 * @index: The index of the bit to set
 *
 * Return: 1 if successful, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Sets a bit at a given index to 0
 * @n: Pointer to the unsigned long integer
 * @index: The index of the bit to clear
 *
 * Return: 1 if successful, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Flips (bitwise NOT) bits of one number to match another
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits needed to flip to match 'm'
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer
 */
int _atoi(const char *s);

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: The number of characters written
 */
int _putchar(char c);

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void);

#endif
