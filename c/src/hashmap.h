#define MAX_NAME 20
#define MAX_LIST 30

typedef struct {
    int age;
    char name[MAX_NAME];
} Person;

int hash(char name[MAX_NAME]);
