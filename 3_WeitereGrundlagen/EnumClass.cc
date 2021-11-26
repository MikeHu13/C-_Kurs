#include <iostream>


// Two Enums can not share the same name
// No variables can have a name which already reserved by an enum
// Enum are not type safe

// Durch enum class wird das Problem behoben und es können mehrere
// enums angelegt werden mit den selben variablen

enum class PermissionLevel : unsigned int // Gibt Datentyp der vars vor
{
    // Wenn man nur von 1 hochzählen will kann man die Werte auch weg lassen

    STUDENT = 1,
    TUROS = 2,
    INSTRUCTOR = 3,
    ADMIN = 4

};

enum class ExamPersons
{
    STUDENT,
    INSTRUCTOR
};

int main()
{
    PermissionLevel permission_level_mike = PermissionLevel::STUDENT;
    PermissionLevel permission_level_peter = PermissionLevel::INSTRUCTOR;

    ExamPersons mike = ExamPersons::INSTRUCTOR;

    return 0;
}
