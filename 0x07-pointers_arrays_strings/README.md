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

4. Write a function that searches a string for any of a set of bytes.

5. The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

6. Write a function that prints the chessboard.