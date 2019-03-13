#ifndef TEST


#include <iostream>
#include "numbers.h"

using namespace std;

int main (int argc, char *argv[])
	{
		int height=5, length=10;
		cout << "|";
		for(int z= 0; z < length;z++ )
				cout << "-";
		cout << "|";
		cout << "\n";
		 cout << "|";
		for(int i = 0; i < height-2; i++){
			  for(int z= 0; z < length;z++ ){
				 cout << " ";
			  }
		 cout << "|";
		 cout << "\n";
		 cout << "|";
			}
		for(int z= 0; z < length;z++ )
				cout << "-";
		cout << "|"<<endl;

	system ("pause");
			return 0;
	}

#endif