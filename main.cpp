#include <iostream>
#include <map>
#include <algorithm>
#include <string>

std::string convert(int num, int base, const std::map<int, char>& values)
{
    std::string newValue;
    div_t divValue;

    while(divValue.quot != 1)
    {
        divValue = div(num, base);
        if(base >= 11 && divValue.rem > 9 && divValue.rem < 36)
        {
            int actualValue = values.at(divValue.rem);
            divValue.rem = actualValue;
        }

        newValue += std::to_string(divValue.rem);
        divValue = div(num, base);

        num = divValue.quot;

        if(divValue.quot == 0)
        {
            std::reverse(newValue.begin(), newValue.end());
            return newValue;
        }

        if(divValue.quot == 1)
        {
            newValue += std::to_string(divValue.quot);
            std::reverse(newValue.begin(), newValue.end());
            return newValue;
        }
    }

    return newValue;
}

int main(int argc, char** argv)
{
    int start = 0;
    int base = 2;

    if(argc == 3)
    {
        start = atoi(argv[1]);
        base = atoi(argv[2]);
    }

    const std::map<int, char> ALPHABET_VALUES = {{10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'},
                                                    {16, 'G'}, {17, 'H'}, {18, 'I'}, {19, 'J'}, {20, 'K'},
                                                    {21, 'L'}, {22, 'M'}, {23, 'N'}, {24, 'O'}, {25, 'P'},
                                                    {26, 'Q'}, {27, 'R'}, {28, 'S'}, {29, 'T'}, {30, 'U'},
                                                    {31, 'V'}, {32, 'W'}, {33, 'X'}, {34, 'Y'}, {35, 'Z'}};

    std::string value = convert(start, base, ALPHABET_VALUES);

    std::cout<<value<<std::endl;
    return 0;
}