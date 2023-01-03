_memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b


1._memcpy() function copies n bytes from memory area src to memory area dest

2.  a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3. strspn
mandatory
Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept