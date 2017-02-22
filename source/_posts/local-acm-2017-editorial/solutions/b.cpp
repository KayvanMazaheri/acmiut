#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a;
	long long result = a;
	a = 0;
	while(!(a == 0 && c < b))
	{
		a += c / b;
		c %= b;
		result += a;
		c += a;
		a = 0;
	}
	cout << result << endl;

	return 0;
}
