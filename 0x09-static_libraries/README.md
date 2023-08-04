.# C - Static libraries

![image](https://user-images.githubusercontent.com/105589308/194304775-87c925ad-f7dc-41b9-a28a-68e7f8396659.png)

In this project, I learned what static libraries are and practiced creating and
using them with `ar`, `ranlib`, and `nm`.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by ALX.

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libmy.a](./libmy.a): C Static library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libmy.a`.

	"Steps to create static library.
		- First compile all `.c` files to get our object files `.o` files.
			`gcc -c *c`
		- Then we create our static library from our object files.
			`ar rc libmy.a *.o`
		- Then we confirm if our static library was created successfully by listing it with this command.
			`ar -t libmy.a`
		- We confirm if our object files were linked successfully.
			`nm libmy.a`
		- We converts to random library
			`ranlib libmy.a`
	- Compile the main code to test our static library this way: `gcc -std=gnu89 main.c -L -lmy -o(new_file_name)`
 
 
* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory

