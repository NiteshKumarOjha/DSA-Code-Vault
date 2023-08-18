/*
  Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
  There is only one repeated number in nums, return this repeated number.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1, 3, 4, 2, 2};

    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    cout << nums[0];
}
