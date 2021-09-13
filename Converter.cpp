#include "Converter.hpp"

void reverseStr(std::string& s)
{
    const int n = s.length();
    int half = n >> 1;

    for(int i = 0; i < half; i++)
    {
        std::swap(s[i], s[n - i - 1]);
    }
}

std::map<std::string, std::string> makeAlphabetValues()
{
    std::map<std::string, std::string> values;
    std::string alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T" ,"U", "V", "W", "X", "Y", "Z"};
    static constexpr int alphabetLength = sizeof(alphabet)/sizeof(alphabet[0]);

    for(int i = 0; i < alphabetLength; i++)
    {
        std::string index = std::to_string(i + 10);
        values.insert(std::make_pair(index, alphabet[i]));
    }

    return values;
}

std::string decimalToBase(int num, const int base)
{
    std::map<std::string, std::string> alphabetValues = makeAlphabetValues();
    std::string result = "";

    int modResult = 0;
    int divResult = 0;

    while(divResult != 1)
    {
        modResult = num % base;
        divResult = num / base;

        std::string stringValue = std::to_string(modResult);

        if(base >= 11 && 9 < modResult && modResult < 36)
        {
            std::string actualValue = alphabetValues.at(stringValue);
            result += actualValue;
        }

        else
        {
            result += stringValue;
        }

        divResult = num / base;
        num = divResult;

        if(divResult == 0)
        {
            reverseStr(result);
            return result;
        }
    }

    result += std::to_string(divResult);
    reverseStr(result);
    return result;
}
