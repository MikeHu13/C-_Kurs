#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string str;
    std::string text;

    std::ifstream iffile;

    iffile.open("/Users/mike/Documents/CPP_Kurs/5_STLString/Text.txt");
    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
        
    }
    

    iffile.close();
    std::cout << text << std::endl;
    



    return 0;
}
