#include "main.h"                                                                                                                                     /**                                                                         * *_strcpy - copies the string pointed to by src                           * @dest: char type string                                                  * @src: char type sting                                                    * Description: Copy the string pointed to by pointer 'src' to              * the buffer pointed to by 'dest'                                          * Return: Pointer to 'dest                                                 */                                                                            
char *_strcpy(char *dest, char *scr)
{
	int z = -1;
	
	do {
		z++;
		dest[z] = scr[z];
	} while(scr[z] != '\0');

	return (dest);
}
