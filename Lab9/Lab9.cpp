#include <iostream>
#include <string>

using namespace std;

bool get_valid_int(int&);

int main()
{
	int x, y, answer;
	cout << "Enter X: ";
	if (get_valid_int(x)) {
		cout << "Enter Y: ";
		if (get_valid_int(y)) {
			answer = x + y;
			cout << "The sum is: " << answer;
		}
		else {
			cout << "The second integer was poorly formed" << endl;
		}
	}
	else {
		cout << "The first integer was poorly formed" << endl;
	}
}
bool get_valid_int(int& num) {
	bool valid;
	int value, length, position;
	char ch;
	string test_int;

	valid = true;
	value = 0;

    getline(cin, test_int);

	length = test_int.length();
	for (position = 0; position < length; position++) {
		ch = test_int.at(position);
		if (ch >= '0' && ch <= '9') {
			value = value * 10 + ch - char('0');
		}
		else {
			valid = false;
		}
	}
	num = value;
	return(valid);

}
