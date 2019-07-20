
#include <iostream>

#include <fstream>

int main() {
    
    std::fstream f;
    f.open("test.csv", std::ios::out | std::ios::app);
    
    int test_1 = 10;
    int test_2 = 20;
    int test_3 = 40;
    int test_4 = 50;
    std::string test_5 = "abc";

    f << test_1 << ", " << test_2 << ", " << test_3 << ", " << test_4 << ", " << test_5 << "\n";
    f << test_1 << ", " << test_2 << ", " << test_3 << ", " << test_4 << ", " << test_5 << "\n";
    f << test_1 << ", " << test_2 << ", " << test_3 << ", " << test_4 << ", " << test_5 << "\n";
    f << test_1 << ", " << test_2 << ", " << test_3 << ", " << test_4 << ", " << test_5 << "\n";
    return 0;
}
