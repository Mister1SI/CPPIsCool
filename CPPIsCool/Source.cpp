#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;
int randNum(int max) {
	int returnValue = (rand() % max) + 1;
	return returnValue;
}
class product {
	public:
		string products[4] = {"agriculture", "fuel", "electronics", "cars"};
		string services[3] = { "shipping", "hospitality", "garbage" };
		string supplyChain[3];
};
int main() {
	int workers = 100, month = 1;
	float totalCompanyValue = 101872.62, revenue = 6724.11, profitMargin = 0.34, wage = 9, percentOutsourced = 0, potentialWage, potentialWage2, profit;
	string version = "prod0.0.5", name, companyName, command = "";
	string randomEvents[] = { "deathAssassinated", "deathCancer", "deathCarCrash", "governmentGrant", "childLaborExposed"};
	bool nextMonth = false;

	profit = revenue / profitMargin;

	cout << "==========\nWelcome to Supply Chain. You are playing version: " + version + "\n\nPlease enter your name: \n> ";
	cin >> name;
	cout << "Thank you. Please enter your company name: \n> ";
	cin >> companyName;
	cout << "Welcome, " << name << ", owner of " << companyName << ", to Supply chain. You are a new business owner toying with the idea of outsourcing, which is getting the materials for and creating ypur products in a different country. This can lower costs, but it has some effects.(Press Enter)\n";
	_getch();
	cout << "The United States outsources a ton of stuff - in 2017, 84.2% of outsourcing deals came from the US!\nYou are new to the concepts of globalization, which is the interdependence of countries on each other. While researching, you find that there are pros and cons to globalization.(Press Enter)\n";
	_getch();
	cout << "Pros:\n-Lowers costs\n";
	_getch();
	cout << "Cons:\n-Takes advantage of third-world countries, where children may be doing the labor.\n";
	_getch();
	while (true) {
		cout << "\n==========\nStart of month " << month << "\nTotal workers: " << workers << "\n\nTotal comany value: $" << totalCompanyValue << "\nTotal revenue per month: $" << revenue;
		cout << "\nProfit per month: $" << profit << "\nProfit margin: " << profitMargin * 100 << "%\nPercent of products outsourced: " << percentOutsourced << "%\n";

		while (true) {
			cout << "Enter a command(help for a list): \n> ";
			cin >> command;
			if (command == "help") {
				cout << "next - move to the next month\nhelp - show this list\nsc - show the supply chain\nwage - change the wage of your workers\noutsrc - edit your outsourcing settings\nproduct - create a new product(costs money)\nstop - end the game\n";
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
			else if (command == "outsrc") {
				cout << "Outsourcing options:\ntoggle <product> - toggle if a product is outsourced\nexit - leave the outsourcing menu\noutsource> ";
				cin >> command;
			}
			else if (command == "product") {
				
			}
			else if (command == "stop") {
				return 0;
			}
		}
		month++;
	}
	return 0;
};