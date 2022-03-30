#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
	int n, x, y, t, b, h;
	cin >> n;
	int a[n], l, p;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	b = n;
	h = 0;
	while (h < 100)
	{
		l = 0;
		p = 0;
		for (int i = p; i < b; i++)
		{
			if (a[i] == a[i+1])
			{
				l++;
			}
			else
			{
				p = l;
				l = 0;
				if (p >= 2) 
				{
					x = abs(p - i);
					y = p + 1;
					break;
				}
			}
		}
		if (p < 2) break;
		t = 0;
		while (t < y)
		{
			for (int i = x; i < b - t; i++)
			{
			a[i] = a[i+1];
			}
			t++;
		}
		b = b - t;
		h++;
	}
	cout << n - b;
}