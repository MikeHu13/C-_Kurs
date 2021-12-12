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

    std::string search = "eins";
    std::string replace_str = "one";
    auto idx = text.find(search);
    text.replace(idx, search.size(), replace_str);

    std::cout <<  text << std::endl;

    std::ofstream offile;
    offile.open("Textoutput.txt");
    if (offile.is_open())
    {
        offile << text;
    }
    
    offile.close();
    


    return 0;
}
