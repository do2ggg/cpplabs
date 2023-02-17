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
	for (double x = 1; x <=n;  x++) {
		sum += 1/x;
	}
	cout << "Відповідь:" << sum << "\n";
	cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
	system("pause");
    return 0;
}


