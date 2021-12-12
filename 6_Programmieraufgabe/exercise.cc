#include <iostream>
#include <string>
#include "exercise.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;	

// Aufgabe 1
uchar hex_xor(uchar &hex1, uchar &hex2)
{
    return (hex1 ^ hex2);
}

// Aufgabe 2
ByteArray hex_vector_xor(ByteArray &vec1, ByteArray &vec2)
{
    std::vector<uchar> vec_xor(vec1.size(), 0x00);
    for (size_t i = 0; i != vec1.size(); i++)
    {
        vec_xor.push_back(hex_xor(vec1[i], vec2[i]));
    }
    
}