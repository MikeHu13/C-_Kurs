#include <iostream>

// ENUM values in UPPERCASE
// ENUM values are constant
// ENUm values are integers

enum PermissionLevel
{
    // Wenn man nur von 1 hochzählen will kann man die Werte auch weg lassen

    STUDENT = 1,
    TUTORS = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKOWN = 5
};

struct UserData
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
};

void read_permission_level(PermissionLevel level)
{
    switch (level)
    {
    case PermissionLevel::STUDENT:
        std::cout << "Hello Student" << std::endl;
        break;
    case PermissionLevel::TUTORS:
        std::cout << "Hello Tutor" << std::endl;
        break;
    case PermissionLevel::INSTRUCTOR:
        std::cout << "Hello Instructor" << std::endl;
        break;
    case PermissionLevel::ADMIN:
        std::cout << "Hello Admin" << std::endl;
        break;

    default:
        std::cout << "Unkown ! Error !" << std::endl;
        break;
    }
}

int main()
{
    PermissionLevel permission_level_mike = PermissionLevel::STUDENT;
    PermissionLevel permission_level_peter = PermissionLevel::INSTRUCTOR;

    UserData user_mike = {"Mike", 10, permission_level_mike};
    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.id = 11;
    user_peter.permission_level = permission_level_peter;

    read_permission_level(user_mike.permission_level);

    return 0;
}
