#include <iostream>
#include <fstream>
#include <queue>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	string nextNum;
	queue<string> myque;
  ifstream myfile(argv[1]);
	
	if (myfile.is_open()){
		while (getline(myfile, nextNum)) {
			myque.push(nextNum);
		}
	} else {
		cout << "Err: check file name" << endl;
	}
	int queSize = myque.size();
	for (int i = 0; i < queSize; i++){ //see queue
	cout << myque.front() << endl;
	myque.pop();
	}
	
} 