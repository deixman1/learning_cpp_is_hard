//8.3 by me and crusadwerei0fojxskvmjsklf
#include <iostream>
#include <conio.h>
using namespace std;

int a;
int n;

long long int stepen(int n, int b);
int main()
{
	long long int proiz;
	cin >> n >> a;
	if (n % 2 == 0) proiz = stepen(n / 2, a)*stepen(n / 2, a); else  proiz = a*stepen(n - 1, a);
	cout << proiz;
	_getch();
}

long long int stepen(int n, int b)
{
	if (n)
	{
		if (n == 1)
			return b;
		b *= a;
		stepen(n - 1, b);
	}
	else 
		return 1;
}
