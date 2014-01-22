#include <iostream>
#include "multiply.h"
#include "power.h"
#include "add.h"

using namespace std;

int main(){

	cout << pow( add( multiply(2.0, 2.0), 4.0) , 3u ) << endl;

	return 0;
}

