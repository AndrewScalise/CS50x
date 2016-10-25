#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    int age;
    int lives;
    string color;
} CAT;

void meow(CAT kitty);
void meow2(CAT* kitty);

int main()
{
    CAT franklin = {"franklin", 9, 9, "orange"};
    CAT* sally = malloc(sizeof(CAT));

    //set properties for sally
    sally->name = "sally";
    sally->age = 2;
    sally->lives = 9;
    sally->color = "brown";

    //two functions that print the name of the cat
    //one pass by value, the other pass by reference
    meow(franklin);
    meow(*sally);
    meow2(&franklin);
    meow2(sally);

    free(sally);
}

void meow(CAT kitty)
{
    printf("%s says ROWWWORR\n", kitty.name);
}

void meow2(CAT* kitty)
{
    printf("%s says mew\n", kitty->name);
}