#include <stdio.h>
#include <stdlib.h>

/**
* @brief an example struct
*/
struct example {
    int a;
};

/**
* @brief database record struct grouping a row id, an age and a salary.
*/
struct dbRecord {
    int rowId;
    int age;
    float salary;
};

struct dbRecord newEmployee();

int main() {
    // to declare a struct the syntax is as follows
    // struct Tag name_of_struct;
    struct example myExample;
    // to access members of the struct you use the following syntax
    // name_of_struct.member
    myExample.a = 7;

    printf("The value of the member in the struct is: %d\n", myExample.a);
    
    // a struct can have many members but access remains the same.
    struct dbRecord record;

    // a struct can also be used as the return value of a function
    record = newEmployee();
    record.rowId = 1;
    record.age = 32;
    record.salary = 180000.00;
   
    // you can also use structs with pointers
    struct dbRecord *rowAlias;
    // give the pointer the address of a variable
    rowAlias = &record;
    // to access members when using a struct pointer you must use the -> syntax
    printf("The employees age is: %d\n", rowAlias->age);
    printf("The employees salary is %f\n", rowAlias->salary);

    // you can even dynamically allocate a struct
    struct dbRecord *fng = malloc(sizeof(*fng));
    fng->age = 21;
    fng->salary = 64000.00;
    printf("The employees age is: %d\n", fng->age);
    printf("The employees salary is %f\n", fng->salary);
    free(fng);
    fng = 0;

    return 0;
}

/**
* @brief The function returns a new employee of type dbRecord. All parameters
*        Are initialized to a zero value.
*
* @return 
*/
struct dbRecord newEmployee() {
    struct dbRecord new;
    new.rowId = 0;
    new.age = 0;
    new.salary = 0.0;
    return new;
}
