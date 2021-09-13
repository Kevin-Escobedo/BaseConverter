CXX=g++
CXXFLAGS=-std=c++17 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O2
FILES=Converter.hpp Converter.cpp
MAINFILE=main.cpp
TARGET=converter
TESTFILES=converterTests.cpp
TESTLIBRARIES=-l gtest -l pthread

all: $(TARGET)
$(TARGET): $(FILES) $(MAINFILE)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) $(FILES) $(MAINFILE) -o $(TARGET)

debug: $(FILES) $(MAINFILE)
	$(CXX) $(CXXFLAGS) -g $(FILES) $(MAINFILE) -o $(TARGET)-debug

tests: $(FILES) $(TESTFILES)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) $(FILES) $(TESTFILES) -o $(TARGET)-tests $(TESTLIBRARIES)

run: $(TARGET)
	valgrind ./$(TARGET)

clean:
	/bin/rm -f $(TARGET)
	/bin/rm -f $(TARGET)-debug
	/bin/rm -f $(TARGET)-tests
