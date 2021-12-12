#include <iostream>
#include <string>

int main()
{
    std::string s = "Hallo das ist ein Test";

    std::size_t index = s.find("Mike"); // Wenn wort nicht vorkommt, wird endpos also der gößte wert in size_t zurück
    std::size_t index2 = s.find('s');

    if (index != std::string::npos)
    {
        std::cout << index << std::endl;
    }
    else{
        std::cout << "Substring nocht found" << std::endl;
    }
    
    

    return 0;
}