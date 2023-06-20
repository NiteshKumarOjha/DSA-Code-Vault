/* You are given an array prices where prices[il is the price of a given stock
on the ith day. You want to maximize your profit by choosing a single day to
buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you
cannot achieve any profit, return 0. */
#include <bits/stdc++.h>
using namespace std;
int buySellStock(vector<int> &price)
{
  int n = price.size();
  int buyPrice = INT_MAX;
  int maxProfit = 0;

  for (int i = 0; i < n; i++)
  {
    if (price[i] > buyPrice)
    {
      int profit = price[i] - buyPrice;
      maxProfit = max(maxProfit, profit);
    }
    else
      buyPrice = price[i];
  }
  return maxProfit;
}

int main()
{
  vector<int> price;
  price = {7, 1, 6, 3, 6, 4};
  cout << buySellStock(price);
}