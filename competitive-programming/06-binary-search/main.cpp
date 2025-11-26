#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>

using namespace std;

ll binary_search(const vll &values, ll target)
{
    ll left = 0; 
    ll right = values.size() - 1;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (values[mid] == target)
        {
            return mid;
        }
        else if (values[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
    
}

int main()
{
    ll number;
    cin >> number;
    vll values(100);
}