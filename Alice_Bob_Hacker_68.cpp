#include<bits/stdc++.h>
using namespace std;

int findTotalWeight(vector<int> products)
{
    int n = products.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({products[i], i});
    }
    sort(v.begin(), v.end());
    vector<int> t(n);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[v[i].second])
            continue;

        cnt += v[i].first;
        t[v[i].second] = 1;

        // mark left
        int id = v[i].second - 1;
        while (id >= 0)
        {
            if (t[id] == 0)
            {
                t[id] = 1;
                break;
            }
            else
                id--;
        }

        // mark right
        id = v[i].second + 1;
        while (id < n)
        {
            if (t[id] == 0)
            {
                t[id] = 1;
                break;
            }
            else
                id++;
        }
    }
    return cnt;
}

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);   //{6,4,9,10,34,56,54};
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<findTotalWeight(v);

  return 0;
}