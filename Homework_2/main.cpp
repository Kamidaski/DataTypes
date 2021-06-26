#include <iostream>
using namespace std;

int main()
{
	char C;
	int length;
	int width;
	int count = 0;
	int N;
	int row = 0;
	int col = 0;

	cout << "Input C" << endl;
	cin >> C;
	cout << "Input length" << endl;
	cin >> length;
	cout << "Input width" << endl;
	cin >> width;
	cout << "Input N" << endl;
	cin >> N;

	for (row = 0; row < N; ++row) {
		if (row % 2 == 1) {
			for (count = 0; count < length; count++) {
				{
					cout << " ";
				}
				cout << "";
			}
		}
		for (col = 0; col < N; ++col) {
			for (count = 0; count < length; count++) {
				{
					cout << C;
				}
				cout << "";
			}
			if (col != N) {
				for (count = 0; count < length; count++) {
					{
						cout << "-";
					}
					cout << "";
				}
			}
		}
		cout << endl;
	}
	printf("\n");
}
