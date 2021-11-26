#include <iostream>

// ENUM values in UPPERCASE
// ENUM values are constant
// ENUm values are integers

enum PermissionLevel
{
    // Wenn man nur von 1 hochzählen will kann man die Werte auch weg lassen

    STUDENT = 1,
    TUROS = 2,
    INSTRUCTOR = 3,
    ADMIN = 4

};

int main()
{
    PermissionLevel permission_level_mike = PermissionLevel::STUDENT;
    PermissionLevel permission_level_peter = PermissionLevel::INSTRUCTOR;


    return 0;
}
