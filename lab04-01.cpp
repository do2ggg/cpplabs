#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <ccomplex>
#define brightcyan     "\033[96m"


using namespace std;
 
int main()
{
	double sum, n;
	cout << "Введіть N:";
	cin >> n;
	for (double i = 1; i <=n; i += 1) {
		sum += i;
	}
	cout << "Відповідь:" << sum << "\n";
	cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
	system("pause");
    return 0;
}


