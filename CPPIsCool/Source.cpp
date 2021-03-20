#include <iostream>
#include <string>
using namespace std;
int main() {
	int workers = 100;
	float totalCompanyValue = 100000.0;
	string version = "0.0.2", name, companyName;
	string randomEvents[] = { "deathAssassinated", "deathCancer" };
	cout << "==========\nWelcome to Supply Chain. You are playing version: " + version + "\n\nPlease enter your name: \n> ";
	cin >> name;
	cout << "Thank you. Please enter your company name: \n> ";
	cin >> companyName;
	cout << "Press enter to begin.\n";
	cout << "\n==========\nStart of month 1\nTotal workers: " << workers << endl << "\nTotal comany value: $" << totalCompanyValue;
	return 0;
};