#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "exercise.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ofstream;
using std::ifstream;

//int main()
int main()
{
    std::ifstream iffile;
    iffile.open("/Users/mike/Documents/CPP_Kurs/6_Programmieraufgabe/text.txt", std::ios::in);//letzteres ist der Modus wie es geöffnet wird

    std::string content;

    iffile >> content; // von iffile in content
    iffile.close();

    std::cout << content << std::endl;

    ByteArray plane_text(content.begin(), content.end());
    ByteArray key(8,0xff);
    ByteArray cipher_text = hex_vector_xor(plane_text, key);

    for (size_t i = 0; i < cipher_text.size(); i++)
    {
        std::cout << "Cipher " << i << cipher_text[i] << std::endl;
    }

    ByteArray message = hex_vector_xor(cipher_text, key);

    for (size_t i = 0; i < message.size(); i++)
    {
        std::cout << "Message " << i << message[i] << std::endl;
    }
    


	return 0;
}