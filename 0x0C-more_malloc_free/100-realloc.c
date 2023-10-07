#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**_realloc- unction that reallocates a memory
 * block using malloc and free
 * @old_size: original size of allocated memory
 * @int new_size: memory block new allocated memory
 * @ptr: pointer to the memory previously
 * allocated with a call to malloc
 * Return: pointer to the memory allocated by malloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char new_ptr;
	char og_ptr;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	 if (new_size == 0 && ptr)
	 {
		 free(ptr);
		 return (NULL);
	 }

	 if (!ptr)
	 {
		 return (malloc(new_size));
	 }
	 new_ptr = malloc(new_size);

	 if (!new_ptr)
	 {
		 return (NULL);
	 }
	 og_ptr = ptr;

	 if (new_size > old_size)
	 {
		 for (x = 0; x < new_size; x++;)
		 {
			 new_ptr[x] = og_ptr[x];
		 }
	 }
	 if (new_size > old_size)
	 {
		 for (x = 0; x < old_size; x++)
		 {
			 new_ptr[x] = og_ptr[x];
		 }
	 }
	 free(ptr);
	 return (new_ptr);
}
