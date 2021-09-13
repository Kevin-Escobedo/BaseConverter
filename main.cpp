#include "Converter.hpp"

int main(int argc, char** argv)
{
    int num = 0;
    int base = 2;

    if(argc == 3)
    {
        num = atoi(argv[1]);
        base = atoi(argv[2]);
    }

    if(2 <= base && base <= 36)
    {
        std::string converted = decimalToBase(num, base);
        std::cout<<converted<<std::endl;
    }

    else
    {
        throw std::invalid_argument("Base must be 2 <= base <= 36");
    }

    return 0;
}
