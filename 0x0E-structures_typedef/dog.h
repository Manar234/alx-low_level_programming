#ifndef DOG_H
#define DOG_H
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * struct dog - data of data
 * @name: name ;f the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /*DOG_H*/
