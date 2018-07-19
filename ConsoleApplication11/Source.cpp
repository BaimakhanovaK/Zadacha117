#include<iostream>

using namespace std;

void main() {

	//zadacha 117 iz abramovicha
	int n;
	int p = 1, z = 1;

	cout << "Vvedite znachenie n: ";
	cin >> n;

	for (int i = 1; i <= n * 2 - 1; i = i + 2)
		p = p*i;
	for (int i = 2; i <= n * 2; i = i + 2)
		z = z*i;
	cout << (double)p / z << endl;
}