#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{
#ifdef _WIN32
	cout << "hello Linux!" << endl;
	cout << "i think i can successful!" << endl;
#endif
	return 0;
}