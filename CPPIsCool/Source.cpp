//Social studies project - console line app.  CPP file.
//Compiler command for replit.com: clang++-7 -pthread -std=c++17 -o main CPPIsCool/Source.cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <ctime>
#include <unistd.h>
#include <fstream>
//#include <windows.h>
using namespace std;
using g = long;
int randNum(int max) {
	int returnValue = (rand() % max) + 1;
	return returnValue;
}
class product {
	public:
		string products[4] = {"agriculture", "fuel", "electronics", "roadVehicles"};
		string services[3] = { "shipping", "hospitality", "garbage" };
		string supplyChain[3];
		string productName, field;
    bool outsourced;
		product(string prodName, string slupChain[3], string feld) {
			productName = prodName;
			supplyChain[0] = slupChain[0];
			supplyChain[1] = slupChain[1];
			supplyChain[2] = slupChain[2];
			field = feld;
		}
};
int main() {
  ofstream outStream("records.txt");
  time_t now = time(0);
  char* dt = ctime(&now);
  //cout << "DEBUG: " << dt << endl;
  srand((unsigned) time(0));
	int workers = 100, month = 1, randField;
	float totalCompanyValue = 101872.62, revenue = 6724.11, profitMargin = 0.34, wage = 9, percentOutsourced = 0, potentialWage, potentialWage2, profit;
	string version = "prod0.1.0", name, companyName, command = "", mainField;
	string randomEvents[] = { "deathAssassinated", "deathCancer", "deathCarCrash", "governmentGrant", "childLaborExposed"};
	string fields[4] = { "agriculture", "fuel", "electronics", "roadVehicles" };
	string fieldProdNames[4][5] = {{"Cereal", "Flour", "Sugar", "Eggs", "Meat"}, {"Refined gasoline", "Raw diesel", "Refined diesel", "Crude oil", "Kerosene"}, {"Smartphone", "Tablet", "Laptop", "Desktop", "Motherboard"}, {"SUV", "Car", "Truck", "Van", "Sports Car"}};
	string primarySectors[4][5] = { {"USA", "Denmark", "India", "Romania", "England"}, {"Canada", "Russia", "Kazakhstan", "USA", "India"}, {"China", "Malaysia", "Thailand", "Phillipines"}, {"Mexico", "England", "Germany", "Poland", "Spain"} };
	string secondarySectors[4][3] = { {"China", "USA", "Indonesia"}, {"USA", "India", "Sweden"}, {"China", "USA", "Thailand"}, {"Mexico", "England", "Poland"} };
	string terciarySectors[4][2] = { {"USA", "India"}, {"USA", "China"}, {"USA", "China"}, {"USA", "China"} };
  randField = (rand() % 3) + 1;
  mainField = fields[randField];
	bool nextMonth = false, playedBefore;
	vector<product> products;
	profit = revenue * profitMargin;
  /*
	for(int i = 0, i < 3, i++) {
		product newProd = new product()
		products.emplace();
	}
  */
	cout << "==========\nWelcome to Supply Chain. You are playing version: " + version + "\n\nPlease enter your name: \n> ";
	cin >> name;
	cout << "Thank you. Please enter your company name: \n> ";
	cin >> companyName;
  cout << "Please wait, loading...\n";

  //sleep(3);
  cout << "Have you played before?(y or n)\n";
  cin >> command;
  if (command == "y") {
    playedBefore = true;
  } else {
    playedBefore = false;
  }
  outStream << name << endl << companyName << endl << playedBefore << endl << dt << endl << "==========\n";
  outStream.close();
  if (!playedBefore) {
  	cout << "Welcome, " << name << ", owner of " << companyName << ", to Supply chain. You are a new US business owner toying with the idea of outsourcing, which is getting the materials for and creating your products in a different country. This can lower costs, but it has some effects.(Press Enter)\n";
	  cin.ignore();
    cin.ignore();
	  cout << "The United States outsources a ton of stuff - in 2017, 84.2% of outsourcing deals came from the US!\nYou are new to the concepts of globalization, which is the interdependence of countries on each other. While researching, you find that there are pros and cons to globalization.(Press Enter)\n";
  	cin.ignore();
	  cout << "Pros:\n-Lowers costs";
	  cin.ignore();
    cout << "-Provides jobs for third-world citizens\n";
    cin.ignore();
	  cout << "Cons:\n-Takes advantage of third-world countries, where children may be doing the labor";
	  cin.ignore();
    cout << "-Connor is weird\n";
    cin.ignore();
	  cout << "With these things in mind, you decide to outsource your products.  Go ahead  and complete month 1.";
  	cin.ignore();
  }
	while (true) {
		cout << "\n==========\nStart of month " << month << "\nTotal workers: " << workers << "\n\nTotal company value: $" << totalCompanyValue << "\nTotal revenue per month: $" << revenue;
		cout << "\nProfit per month: $" << profit << "\nProfit margin: " << profitMargin * 100 << "%\nPercent of products outsourced: " << percentOutsourced << "%\nMain product type: " << mainField << endl;

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
				cout << "Outsourcing options:\ntoggle <product index> - toggle if a product is outsourced\nexit - leave the outsourcing menu\n";
        while (true) {
          cout << "outsrc> ";
				  cin >> command;
          if (command == "exit") {
            break;
          } else if (command == "toggle") {
            cout << "Oof.\n";
          }
        }
			}
			else if (command == "product") {
				
			}
			else if (command == "stop") {
        cout << "END STATISTICS:\n==========\nTotal workers: " << workers << "\n\nTotal company value: $" << totalCompanyValue << "\nTotal revenue per month: $" << revenue;
        cout << "\nProfit per month: $" << profit << "\nProfit margin: " << profitMargin * 100 << "%\nPercent of products outsourced: " << percentOutsourced << "%\n";
				return 0;
			}
		}
		if (month == 1 && playedBefore == false) {
			cout << "Congratulations on completing month 1. ";
		}
		month++;
		workers = workers + randNum((int)workers / 5);
		totalCompanyValue = totalCompanyValue + randNum((int)totalCompanyValue / 3);
		revenue = revenue + randNum((int)revenue / 3);
		profit = revenue * profitMargin;
	}
	return 0;
};