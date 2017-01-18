#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char *argv[]) {
    vector<string> s;
    for (string line; getline(std::cin, line);) {
        std::cout << line << std::endl;
        s.push_back(line);
    }
    sort(s.begin(), s.end());
    std::cout << "Sortierte Buchungsnummern" << std::endl;
    for(vector<string>::size_type i = 0; i != s.size(); i++) {
       std::cout << s[i] << std::endl;
    }
    return 0;
}
