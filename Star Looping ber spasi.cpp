#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	system ("color B");
	
	string star[10]= {"*"," *","  *","   *","    *","     *","      *","       *","        *","         *"};
	
	for (int a=0; a<10; a++){
		for (int b=0; b<10; b++){
			cout << star[a];
		}
		cout << endl;
	}

	getch();
	return 0;
}
