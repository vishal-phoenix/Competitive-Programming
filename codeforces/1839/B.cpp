#include <bits/stdc++.h>
using namespace std;

class pred
{
public:
	bool operator()(pair<int, int>& e1, pair<int, int>& e2)
	{
		if (e1.first == e2.first)
			return e1.second > e2.second;
		return e1.first < e2.first;
	}
};
 
 
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> d(n);
		map<int, int> m;
		map<int, int>st;
		for (int i = 0; i < n; ++i)
			cin >> d[i].first >> d[i].second;
		sort(d.begin(), d.end(), pred());
		int x = 0;
		long long maxv = 0;
		for (int i = 0; i < n; ++i)
		{
			if (d[i].first > x&&st[d[i].first]!=-1)
			{
				m[d[i].first]++;
				maxv += d[i].second;
				++x;
				if (m[x]!=0)
				{
					st[x] = -1;
					int temp = m[x];
					m[x] = 0;
					x -= temp;
				}
			}
		}
		cout << maxv << '\n';
	}
	return 0;
}