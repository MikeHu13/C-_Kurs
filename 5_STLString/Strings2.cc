#include <iostream>
#include <string>
#include <fstream>

std::string read_text(const std::string &path)
{
    std::string str;
    std::string text;

    std::ifstream iffile;

    iffile.open(path);
    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        } 
    }
    iffile.close();
    return text;
}

void write_text(const std::string &path, const std::string &text)
{
    std::ofstream offile;
    offile.open(path);
    if (offile.is_open())
    {
        offile << text;
    }
    
    offile.close();
}

int main()
{
    std::string text = read_text("Text.txt");
    std::cout << text << std::endl;

    std::string search_str = "drei";
    auto idx = text.find(search_str);
    std::cout << idx << std::endl;

    //wenn find nichts findet wird der gößte unsigened int wert zurück gegeben
    //Dieser wert enstpricht dem npos, so kann geprüft werden ob der suchbegriff gefunden wurde oder nicht
    if (idx != std::string::npos)
    {
        std::cout << "found" << std::endl;
    }

    std::string text2 = "ababc";
    std::string search_str2 = "ab";
    auto idx2 = text2.find(search_str2);
    std::cout << idx2 << std::endl;

    auto idx3 = text2.rfind(search_str2);
    std::cout << idx3 << std::endl;

    auto idx4 = text2.find_first_not_of(search_str2); // ungleich a und b
    std::cout << idx4 << std::endl;

    auto idx5 = text2.find_last_not_of(search_str2); // ungleich a und b
    std::cout << idx5 << std::endl;

    auto idx6 = text2.find_first_of(search_str2); // erste stelle an der a oder b im string vorkommt
    std::cout << idx6 << std::endl;

    auto idx7 = text2.find_last_of(search_str2); // letzes vorkommen von a oder b
    std::cout << idx7 << std::endl;


    


    return 0;
}
