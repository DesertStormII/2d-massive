#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int array[20][20] = { {},{} };
	cout << " Enter scale of array"<<endl;
	cout << " Enter lenght:";
	cin >> a;
	cout << " Enter width:";
	cin >> b;
	for (int i=0; i < a ; i++) {
		cout << endl;
		for (int j=0; j < b ; j++) {
			cin >> array[i][j];
		
		}
	}
	for (int i = 0; i < a; i++) {
		cout << endl;
		for (int j = 0; j < b; j++) {
			cout << array[i][j];
			cout << " ";
		}
	}

	return 0;
}