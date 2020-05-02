# Sell All the Cars 
**Problem Code:** CARSELL

**Problem Link:** https://www.codechef.com/APRIL20B/problems/CARSELL
## Problem Description
Chef owns N cars (numbered 1 through N). He wishes to sell all of them over N years by selling exactly one car per year. For each valid i, the initial price of the i-th car is Pi. Due to depreciation, the price of each car decreases by 1 unit per year until it is sold.

Note that the price of a car cannot drop below 0 no matter how many years have passed, i.e. when the price of a car reaches 0 in some year, it remains 0 in all subsequent years.

Find the maximum profit Chef can make if he sells his cars in an optimal way. Since this number may be large, compute it modulo 1,000,000,007 (109+7).

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers P1,P2,…,PN.
## Output
For each test case, print a single line containing one integer ― the maximum profit Chef can make, modulo 1,000,000,007.

## Constraints
* 1≤T≤25
* 1≤N≤105
* 0≤Pi≤109 for each valid i

## Example 
```
Input:
2
3
6 6 6
3
0 1 0

Output:
15
1
```

