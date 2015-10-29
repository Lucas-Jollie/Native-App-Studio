#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void talk(PersonPtr p)
{
    printf("Hi, my name is %s\n", p->name);
    printf("and my age is %d\n", p->age);
}

void commentAboutAge(PersonPtr p)
{
    if (p->age < 5)
    {
        printf("baby");
    }
    else
    {
        printf("time to start school");    
    }
}

PersonPtr make_person(string aName, int anAge)
{
    PersonPtr p = malloc(sizeof(struct Person));
    p->name = aName;
    p->age = anAge;
    return p;
}

int main()
{
    PersonPtr AH = make_person("A. H.", 116);
    PersonPtr Lucas = make_person("Lucas Jollie", 22);
    
    talk(AH);
    talk(Lucas);
    commentAboutAge(AH);
    commentAboutAge(Lucas);
}
