#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int randNum(int max) {
	int returnValue = (rand() % max) + 1;
	return returnValue;
}
int main() {
	int workers = 100, month = 1;
	float totalCompanyValue = 101872.62, revenue = 6724.11, profitMargin = 0.34, wage = 9, potentialWage, potentialWage2, profit;
	string version = "0.0.3", name, companyName, command = "";
	string randomEvents[] = { "deathAssassinated", "deathCancer", "deathCarCrash", "governmentGrant", "childLaborExposed"};
	bool nextMonth = false;

	profit = revenue / profitMargin;

	cout << "==========\nWelcome to Supply Chain. You are playing version: " + version + "\n\nPlease enter your name: \n> ";
	cin >> name;
	cout << "Thank you. Please enter your company name: \n> ";
	cin >> companyName;
	cout << "Welcome, " << name << ", owner of " << companyName << ", to Supply chain. You are a new business owner toying with the idea of outsourcing, which is getting the materials for and creating ypur products in a different country.\n";
	while (true) {
		cout << "\n==========\nStart of month " << month << "\nTotal workers: " << workers << endl << "\nTotal comany value: $" << totalCompanyValue << "\nTotal revenue per month: $" << revenue << "\nProfit per month: $" << profit << "\nProfit margin: " << profitMargin * 100 << "%\n";

		while (true) {
			cout << "Enter a command(help for a list): \n> ";
			cin >> command;
			if (command == "help") {
				cout << "next - move to the next month\nhelp - show this list\nsc - show the supply chain\nwage - change the wage of your workers\nstop - end the game\n";
			}
			else if (command == "next") {
				break;
			}
			else if (command == "sc") {
				cout << "Yes\n";
			}
			else if (command == "wage") {
				cout << "Change the wage of your workers(current wage is " << wage << "):\n> ";
				cin >> potentialWage;
				potentialWage2 = (float)potentialWage;
				if (potentialWage2 < 0) {
					cout << "Invalid wage.\n";
				}
				else {
					wage = potentialWage2;
					cout << "Changed the wage to " << wage << ".\n";
				}
			}
			else if (command == "stop") {
				return 0;
			}
		}
		month++;
	}
	return 0;
};