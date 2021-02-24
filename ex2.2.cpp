#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> findTwoSum(const std::vector<int> &list, int sum)
{
    std::vector<int> tmp = list;
    std::vector<int> result_tmp = list;
    std::pair<int, int> result;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator it_left = tmp.begin();
    std::vector<int>::iterator it_right = tmp.end() - 1;

    int tmp_sum = *it_left + *it_right;
    while (tmp_sum != sum && it_left != it_right)
    {
        if (tmp_sum > sum)
        {
            it_right--;
            tmp_sum = *it_left + *it_right;
        }
        else
        {
            it_left++;
            tmp_sum = *it_left + *it_right;
        }
    }
    if ((it_left != it_right) && (tmp_sum == sum))
    {
        std::vector<int>::iterator res_first_it = find(result_tmp.begin(), result_tmp.end(), *it_left);
        result.first = res_first_it - result_tmp.begin();
        result.second = find(res_first_it, result_tmp.end(), *it_right) - result_tmp.begin();
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
    std::vector<int> list = {3, 1, 5, 7, 5, 9, 3, 1, 5,734, 42, 65, 56, 76,12, 43, 7, 5, 9, 43, 65, 654, 675, 75, 35, 57, 3};
    std::pair<int, int> indices = findTwoSum(list, 6);
    std::cout << indices.first << '\n'
              << indices.second;
}
#endif
