#ifndef HEADER_FILE
#define HEADER_FILE


struct dog
{
char* name;
float age;
char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif