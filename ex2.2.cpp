#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_set>
#include <map>
std::pair<int, int> findTwoSum(const std::vector<int> &list, int sum)
{
    std::vector<int> tmp = list;
    std::unordered_set<int> list_set;
    std::map<int, int> list_map;
    std::pair<int, int> result;
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
    {
        int t = sum - *it;
        if (list_set.find(t) != list_set.end())
        {
            result.first = it - tmp.begin();
            result.second = list_map.at(t);
            return result;
        }
        else
            {
                list_set.insert(*it);
                list_map.insert(std::pair<int,int>(*it, it - tmp.begin()));
            }
    }
    result.first = -1;
    result.second = -1;
    return result;
}

#ifndef RunTests
int main()
{
        std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 8);
    std::cout << indices.first << '\n'
              << indices.second;
}
#endif
