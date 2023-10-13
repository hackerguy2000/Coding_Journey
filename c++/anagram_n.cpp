#include <bits/stdc++.h>
// using namespace std;

int main()
{
    std::vector<int> a = {4, 22, 5, 75, 56};
    std::vector<int>::iterator it;
    for (auto it = a.rbegin(); it != a.rend(); it++)
    {
        std::cout <<" " <<*it<<std::endl;
    }

    return 0;
}