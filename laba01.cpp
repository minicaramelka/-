#include <iostream>

using namespace std;

int main(){
	int ArrayStatic1[3];
	int ArrayStatic2[3][3];	
	int *ArrayDynamic1 = new int[3];
	int **ArrayDynamic2 = new int*[3];
	for (int i = 0; i < 3; i++){
		ArrayDynamic2[i] = new int[3];
	}
	for(int i = 0; i < 3; i++){
		cout << &ArrayStatic1[i] << "   ";
	}
	cout << endl << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << &ArrayStatic2[i][j] << "   ";
		}
	}
	cout << endl << endl;
	for(int i = 0; i < 3; i++){
                cout << &ArrayDynamic1[i] << "   ";
        }
	cout << endl << endl;
	for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                        cout << &ArrayDynamic2[i][j] << "   ";
                }
        }
	delete[] ArrayDynamic1;
	for(int i = 0; i < 3; i++){
		delete[] ArrayDynamic2[i];
	}
	return 0;
}
