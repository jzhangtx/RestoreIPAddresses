// RestoreIPAddresses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

void GetIP(const std::string& s, int start, std::string address, int dotCount, std::vector<std::string>& result)
{
    if (address.size() == s.size()+3 && dotCount == 4)
    {
        result.push_back(address);
        return;
    }

    if (dotCount == 4)
        return;

    int maxLen = std::min(3, static_cast<int>(s.size()) - start);
    for (int i = 1; i <= maxLen; ++i)
    {
        std::string sub = s.substr(start, i);
        char* pEnd = nullptr;
        long l = std::strtol(sub.data(), &pEnd, 10);
        if (l < 0 || l > 255)
            break;
        std::string add(address);
        if (address.size() != 0)
        {
            add.push_back('.');
        }
        add.append(sub);
        GetIP(s, start + i, add, dotCount + 1, result);
        if (l == 0)
            break;
    }
}

std::vector<std::string> RestorIPAddresses(const std::string& s)
{
    std::vector<std::string> result;
    std::string address;

    GetIP(s, 0, address, 0, result);
    return result;
}

int main()
{
    while (true)
    {
        std::cout << "Enter your string (\"q\" to exit): ";
        std::string s;
        std::cin >> s;
        if (s == "q" || s == "Q")
            break;

        std::vector<std::string> r = RestorIPAddresses(s);
        for (auto& ip : r)
        {
            std::cout << ip << std::endl;
        }
        std::cout << std::endl;
    }
}
