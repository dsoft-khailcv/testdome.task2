#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> findTwoSum(const std::vector<int> &list, int sum)
{
    std::vector<int> tmp = list;
    std::pair<int, int> result;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator it_begin = tmp.begin();
    std::vector<int>::iterator it_end = tmp.end();

    int tmp_sum = *it_begin + *it_end;
    while (tmp_sum != sum && it_begin != it_end)
    {
        if (tmp_sum > sum)
        {
            it_end--;
            tmp_sum = *it_begin + *it_end;
        }
        else
        {
            it_begin++;
            tmp_sum = *it_begin + *it_end;
        }
    }
    if ((it_begin != it_end) && (tmp_sum == sum))
    {
        result.first = *it_begin;
        result.second = *it_end;
    }
    else
    {
        result.first = -1;
        result.second = -1;
    }

    return result;
}

#ifndef RunTests
int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 8);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
