#include <iostream>
#include <vector>
#include <algorithm>

template <class InputIt>
std::vector<int> f(InputIt first, InputIt last)
{
    std::vector<int> result;
    int temp = 0;
    int counter = 1;
    for( ; first != last; ++first)
    {
        temp += *first;
        result.push_back(temp / counter++);
    }
    return result;
}

int main()
{
    std::vector<int> v1{1, 6, 1, 5, 9, 8};
    auto result = f(v1.begin(), v1.end());
    std::for_each (result.begin(), result.end(), [](int value) {std::cout << value << " " ;});
    return 0;
}
