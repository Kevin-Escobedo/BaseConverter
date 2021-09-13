#include <gtest/gtest.h>
#include "Converter.hpp"

TEST(converter_tests, convertDecimalZeroToBinary)
{
    const int value = 0;
    const int base = 2;

    std::string convertedValue = decimalToBase(value, base);

    EXPECT_EQ(convertedValue, "0");
}

TEST(converter_tests, convertFromDecimalToBinary)
{
    const int value = 100;
    const int base = 2;

    std::string convertedValue = decimalToBase(value, base);

    EXPECT_EQ(convertedValue, "1100100");
}

TEST(converter_tests, convertDecimalZeroToBase3)
{
    const int value = 0;
    const int base = 3;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase3)
{
    const int value = 36;
    const int base = 3;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1100");
}

TEST(converter_tests, convertDecimalZeroToBase4)
{
    const int value = 0;
    const int base = 4;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase4)
{
    const int value = 356;
    const int base = 4;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "11210");
}

TEST(converter_tests, convertDecimalZeroToBase5)
{
    const int value = 0;
    const int base = 5;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase5)
{
    const int value = 234;
    const int base = 5;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1414");
}

TEST(converter_tests, convertDecimalZeroToBase6)
{
    const int value = 0;
    const int base = 6;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase6)
{
    const int value = 20;
    const int base = 6;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "32");
}

TEST(converter_tests, convertDecimalZeroToBase7)
{
    const int value = 0;
    const int base = 7;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase7)
{
    const int value = 105;
    const int base = 7;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "210");
}

TEST(converter_tests, convertDecimalZeroToOctal)
{
    const int value = 0;
    const int base = 8;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToOctal)
{
    const int value = 75;
    const int base = 8;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "113");
}

TEST(converter_tests, convertDecimalZeroToBase9)
{
    const int value = 0;
    const int base = 9;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase9)
{
    const int value = 888;
    const int base = 9;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1186");
}

TEST(converter_tests, convertDecimalZeroToDecimal)
{
    const int value = 0;
    const int base = 10;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToDecimal)
{
    const int value = 6502;
    const int base = 10;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, std::to_string(value));
}

TEST(converter_tests, convertDecimalZeroToBase11)
{
    const int value = 0;
    const int base = 11;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase11)
{
    const int value = 505;
    const int base = 11;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "41A");
}

TEST(converter_tests, convertDecimalZeroToBase12)
{
    const int value = 0;
    const int base = 12;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase12)
{
    const int value = 697;
    const int base = 12;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "4A1");
}

TEST(converter_tests, convertDecimalZeroToBase13)
{
    const int value = 0;
    const int base = 13;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase13)
{
    const int value = 426;
    const int base = 13;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "26A");
}

TEST(converter_tests, convertDecimalZeroToBase14)
{
    const int value = 0;
    const int base = 14;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase14)
{
    const int value = 607;
    const int base = 14;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "315");
}

TEST(converter_tests, convertDecimalZeroToBase15)
{
    const int value = 0;
    const int base = 15;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase15)
{
    const int value = 55;
    const int base = 15;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "3A");
}

TEST(converter_tests, convertDecimalZeroToHexadecimal)
{
    const int value = 0;
    const int base = 16;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToHexadecimal)
{
    const int value = 3590;
    const int base = 16;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "E06");
}

TEST(converter_tests, convertDecimalZeroToBase17)
{
    const int value = 0;
    const int base = 17;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase17)
{
    const int value = 657;
    const int base = 17;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "24B");
}

TEST(converter_tests, convertDecimalZeroToBase18)
{
    const int value = 0;
    const int base = 18;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase18)
{
    const int value = 607;
    const int base = 18;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1FD");
}

TEST(converter_tests, convertDecimalZeroToBase19)
{
    const int value = 0;
    const int base = 19;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase19)
{
    const int value = 5689;
    const int base = 19;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "FE8");
}

TEST(converter_tests, convertDecimalZeroToBase20)
{
    const int value = 0;
    const int base = 20;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase20)
{
    const int value = 57;
    const int base = 20;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "2H");
}

TEST(converter_tests, convertDecimalZeroToBase21)
{
    const int value = 0;
    const int base = 21;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase21)
{
    const int value = 808;
    const int base = 21;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1HA");
}

TEST(converter_tests, convertDecimalZeroToBase22)
{
    const int value = 0;
    const int base = 22;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase22)
{
    const int value = 100;
    const int base = 22;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "4C");
}

TEST(converter_tests, convertDecimalZeroToBase23)
{
    const int value = 0;
    const int base = 23;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase23)
{
    const int value = 785;
    const int base = 23;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1B3");
}

TEST(converter_tests, convertDecimalZeroToBase24)
{
    const int value = 0;
    const int base = 24;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase24)
{
    const int value = 404;
    const int base = 24;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "GK");
}

TEST(converter_tests, convertDecimalZeroToBase25)
{
    const int value = 0;
    const int base = 25;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase25)
{
    const int value = 24;
    const int base = 25;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "O");
}

TEST(converter_tests, convertDecimalZeroToBase26)
{
    const int value = 0;
    const int base = 26;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase26)
{
    const int value = 666;
    const int base = 26;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "PG");
}

TEST(converter_tests, convertDecimalZeroToBase27)
{
    const int value = 0;
    const int base = 27;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase27)
{
    const int value = 589;
    const int base = 27;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "LM");
}

TEST(converter_tests, convertDecimalZeroToBase28)
{
    const int value = 0;
    const int base = 28;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase28)
{
    const int value = 55;
    const int base = 28;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1R");
}

TEST(converter_tests, convertDecimalZeroToBase29)
{
    const int value = 0;
    const int base = 29;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase29)
{
    const int value = 467;
    const int base = 29;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "G3");
}

TEST(converter_tests, convertDecimalZeroToBase30)
{
    const int value = 0;
    const int base = 30;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase30)
{
    const int value = 563;
    const int base = 30;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "IN");
}

TEST(converter_tests, convertDecimalZeroToBase31)
{
    const int value = 0;
    const int base = 31;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase31)
{
    const int value = 59;
    const int base = 31;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "1S");
}

TEST(converter_tests, convertDecimalZeroToBase32)
{
    const int value = 0;
    const int base = 32;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase32)
{
    const int value = 30;
    const int base = 32;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "U");
}

TEST(converter_tests, convertDecimalZeroToBase33)
{
    const int value = 0;
    const int base = 33;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase33)
{
    const int value = 405;
    const int base = 33;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "C9");
}

TEST(converter_tests, convertDecimalZeroToBase34)
{
    const int value = 0;
    const int base = 34;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase34)
{
    const int value = 3004;
    const int base = 34;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "2KC");
}

TEST(converter_tests, convertDecimalZeroToBase35)
{
    const int value = 0;
    const int base = 35;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase35)
{
    const int value = 500;
    const int base = 35;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "EA");
}

TEST(converter_tests, convertDecimalZeroToBase36)
{
    const int value = 0;
    const int base = 36;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "0");
}

TEST(converter_tests, convertFromDecimalToBase36)
{
    const int value = 5902;
    const int base = 36;

    std::string converted = decimalToBase(value, base);

    EXPECT_EQ(converted, "4JY");
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
