#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog- new type
 * @name: dog name of char data tyoe
 * @age: age of dog including decimal points
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t- typedef for struct dog
 */
typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif

