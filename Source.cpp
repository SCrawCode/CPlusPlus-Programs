#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
	string cypher[5];
	int i;
	int x;
	cout << "Press 1 to encrypt:\nOr press 0 to end program: ";
	cin >> x;
	
	switch (x) {
	case 1:
	{ofstream outfile;
	outfile.open("cypher.txt");

	cout << endl << "Enter 5 word phrase: ";


	for (i = 0; i < 5; i++) { cin >> cypher[i]; }

	for (i = 0; i < 5; i++) { outfile << cypher[i][0] << " "; }

	outfile.close(); }

	



	default: {return 0; }
	}

	system("pause");

}



