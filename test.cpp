#include <iostream>
#include "add.h"
#include "multiply.h"
#include "power.h"

using namespace std;

void areEquals(double expected, double got){

	if(expected != got){

		cerr << "Expected: " << expected << " but got: " << got << endl;
	}
	else{

		cout << "Test passed" << endl;
	}
}

int main(){

	areEquals( 4.0, add(2.0, 2.0) );
	areEquals( 12.0, multiply(3.0, 4.0) );
	areEquals( 8.0, pow(2.0, 3u) );
	areEquals( 1.0, pow(2.0, 0u) );

	return 0;
}

