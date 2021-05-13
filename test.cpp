#include <testlib.h>
#include <iostream>
using namespace std;
int main() {
    int status = 0;

	cout << "LOAD testing..." << endl;
    status |= loadTest();
	cout << "LOAD test succeed!" << endl;

	cout << "ALU testing..." << endl;
	status |= aluTest();
	cout << "ALU test succeed!" << endl;

	cout << "GEMM testing..." << endl;
	status |= gemmTest();
	cout << "GEMM test succeed!" << endl;

	cout << "STORE testing..." << endl;
	status |= storeTest();
	cout << "STORE test succeed!" << endl;

	return 0;
}