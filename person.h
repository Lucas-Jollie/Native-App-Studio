struct Person
{
    char* name;
    int age;
};

/* useful Java-like abbreviation for "char *" */
typedef char *string;
/* useful abbreviation for "struct Person *" */
typedef struct Person *PersonPtr;

void talk(PersonPtr p);
void commentAboutAge(PersonPtr p);
PersonPtr make_person(string aName, int anAge);
