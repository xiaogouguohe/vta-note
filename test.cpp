#include <testlib.h>
#include <iostream>
using namespace std;
int main() {
    int status = 0;

	cout << "FETCH testing..." << endl;
    status |= fetchTest();
	if (status == 0) {
		cout << "FETCH test succeed!" << endl;
	}
	else {
		cout << "FETCH test fail!" << endl; 
	}

	cout << "LOAD testing..." << endl;
    status |= loadTest();
	if (status == 0) {
		cout << "LOAD test succeed!" << endl;
	}
	else {
		cout << "LOAD test fail!" << endl; 
	}

	cout << "LOAD testing..." << endl;
    status |= loadTest();
	if (status == 0) {
		cout << "LOAD test succeed!" << endl;
	}
	else {
		cout << "LOAD test fail!" << endl; 
	}

	cout << "ALU testing..." << endl;
	status |= aluTest();
	if (status == 0) {
		cout << "ALU test succeed!" << endl;
	}
	else {
		cout << "ALU test fail!" << endl; 
	}

	cout << "GEMM testing..." << endl;
	status |= gemmTest();
	if (status == 0) {
		cout << "GEMM test succeed!" << endl;
	}
	else {
		cout << "GEMM test fail!" << endl; 
	}

	cout << "STORE testing..." << endl;
	status |= storeTest();
	if (status == 0) {
		cout << "STORE test succeed!" << endl;
	}
	else {
		cout << "STORE test fail!" << endl; 
	}

	return 0;
}