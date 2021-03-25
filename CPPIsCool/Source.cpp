//Social studies project - console line app.  CPP file.
//Compiler command for replit.com: clang++-7 -pthread -std=c++17 -o main CPPIsCool/Source.cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <ctime>
//#include <unistd.h>
#include <windows.h>
using namespace std;
string version = "prod0.1.4";



typedef int __Ifd, *_IN_, (*lmt)(void);
  string fields[4] = { "agriculture", "fuel", "electronics", "roadVehicles" };
	string fieldProdNames[4][5] = {{"Cereal", "Flour", "Sugar", "Eggs", "Meat"}, {"Refined gasoline", "Raw diesel", "Refined diesel", "Crude oil", "Kerosene"}, {"Smartphone", "Tablet", "Laptop", "Desktop", "Motherboard"}, {"SUV", "Car", "Truck", "Van", "Sports Car"}};
	string primarySectors[4][5] = { {"USA", "Denmark", "India", "Romania", "England"}, {"Canada", "Russia", "Kazakhstan", "USA", "India"}, {"China", "Malaysia", "Thailand", "Phillipines"}, {"Mexico", "England", "Germany", "Poland", "Spain"} };
	string secondarySectors[4][3] = { {"China", "USA", "Indonesia"}, {"USA", "India", "Sweden"}, {"China", "USA", "Thailand"}, {"Mexico", "England", "Poland"} };
	string terciarySectors[4][2] = { {"USA", "India"}, {"USA", "China"}, {"USA", "China"}, {"USA", "China"} };
  int randField = (rand() % 3) + 1;
  


int randNum(int max) {
	int returnValue = (rand() % max) + 1;
	return returnValue;
}



class product {
	public:
		string products[4] = {"agriculture", "fuel", "electronics", "roadVehicles"};
		string services[3] = { "shipping", "hospitality", "garbage" };
		string supplyChain[3];
		string productName;
		double productCost;
		int field, soldPerMonth;
		bool outsourced;
		product(string prodName, string slupChain[3], int feld) {
			productName = prodName;
			supplyChain[0] = slupChain[0];
			supplyChain[1] = slupChain[1];
			supplyChain[2] = slupChain[2];
			field = feld;
			if (feld == 4) {
				productCost = 50000;
				soldPerMonth = 2;
			}
			else if (feld == 3) {
				productCost = 2000;
				soldPerMonth = 200;
			}
			else if (feld == 2) {
				productCost = 30;
				soldPerMonth = 1000;
			}
			else {
				productCost = 6;
				soldPerMonth = 10000;
			}
		outsourced = false;
		}
};






product makeProduct(int fieldNew) {
  int rand5 = randNum(4);
  int rand3 = randNum(2);
  __Ifd rand2 = randNum(1);
  string supplyChainNew[3];
  supplyChainNew[0] = primarySectors[fieldNew][rand5];
  supplyChainNew[1] = secondarySectors[fieldNew][rand3];
  supplyChainNew[2] = terciarySectors[fieldNew][rand2];
  string prodNameNew = fieldProdNames[fieldNew][rand5];
  product returnObject(prodNameNew, supplyChainNew, fieldNew);
  return returnObject;
}





int main() {
  //cout << "DEBUG: " << dt << endl << &fields[2] << endl << "Possible 0x8007002\n";
  srand((unsigned) time(0));
	int workers = 100, month = 1, hoursPerMonth = 150, randWork, marginChange, randTrue;
	float totalCompanyValue = 101872.62, profitMargin = 0.34, wage = 9, percentOutsourced = 0, potentialWage, potentialWage2, profit, workerCost, monthlyExpenses = 0, newWorkCost;
	string name, companyName, command = "";
	string randomEvents[] = { "deathAssassinated", "deathCancer", "deathCarCrash", "governmentGrant", "childLaborExposed"};
	string mainField = fields[randField];
	bool nextMonth = false, playedBefore;
	double revenue = 0;
	vector<product> products;
    workerCost = wage * hoursPerMonth * workers;
	for (int f = 0; f < 3; f++) {
		product newProd = makeProduct(randField);
		products.emplace_back(newProd);
	}
	for (int i = 0; i < products.size(); i++) {
		revenue += products[i].productCost * products[i].soldPerMonth;
	}
	profit = revenue * profitMargin;






	cout << "==========\nWelcome to Supply Chain. You are playing version: " + version + "\n\nPlease enter your name: \n> ";
	cin >> name;
	//Sleep(1000);
	cout << "Thank you. Please enter your company name: \n> ";
	cin >> companyName;
    cout << "Please wait, loading...\n";

    //Sleep(3000);
    cout << "Have you played before?(y or n)\n";
    cin >> command;
    if (command == "y") {
        playedBefore = true;
    } else {
		playedBefore = false;
    }
  cout << "Loading...\n";


  //Sleep(1000);







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
	cout << "Your company has started off specialized, which is where you focus on only one type of product.  Sometimes companies and even countries specialize because that is the only thing that they can do.(Press enter)\n";
	cin.ignore();
	  cout << "With these things in mind, you decide to outsource your products.  Go ahead  and complete month 1.";
  	cin.ignore();
  }








	while (true) {
		cout << "\n==========\nStart of month " << month << "\nTotal workers: " << workers << "\n\nTotal company value: $" << totalCompanyValue << "\nTotal revenue per month: $" << revenue << "\nCost of workers: $" << workerCost;
		cout << "\nProfit per month: $" << profit << "\nProfit margin: " << profitMargin * 100 << "%\nLast month's expenses: " << monthlyExpenses << "\nPercent of products outsourced: " << percentOutsourced << "%\nMain product type: " << mainField << endl;

		while (true) {
			cout << "Enter a command(help for a list): \n> ";
			cin >> command;
			if (command == "help") {
				cout << "next - move to the next month\nhelp - show this list\nsc - show the supply chain\nwage - change the wage of your workers\noutsrc - edit your outsourcing settings\nproduct - show the product menu\nstop - end the game\n";
			}
			else if (command == "next") {
				break;
			}
			else if (command == "sc") {
        cout << "Note that the supply chain is irrelivant if the product is not outsourced.\n";
				for (int i = 0; i < products.size(); i++) {
          cout << "Name: " << products[i].productName << "  Primary Sector: " << products[i].supplyChain[0] << "  Secondary Sector: " << products[i].supplyChain[1] << "  Terciary Sector: " << products[i].supplyChain[2] << "  Is outsourced: " << products[i].outsourced << endl;
        }
			}
			else if (command == "wage") {
        try {
          cout << "Change the wage of your workers(current wage is " << wage << "):\n> ";
          cin >> potentialWage;
			  	potentialWage2 = (float)potentialWage;
		  		if (potentialWage2 < 0) {
	  				cout << "Invalid wage.\n";
  				} else {
					wage = potentialWage2;
					cout << "Changed the wage to " << wage << ".\n";
			  	}
        } catch (exception e) {
          cout << "Wrong. " << endl;
          break;
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
            cout << "Which product(As a number): ";
            cin >> command;
            if (products[stoi(command)].outsourced == false) {
              products[stoi(command)].outsourced = true;
            } else {
              products[stoi(command)].outsourced = false;
            }
          }
        }
			}
			else if (command == "product") {
        cout << "PRODUCT MENU\nFields:\n1 - Agriculture\n2 - Fuel\n3 - Electronics\n4 - Road Vehicles\nnew - make a new product\nlist - show all your products\nexit - leave the product menu\n";
				while (true) {
          cout << "product> ";
          cin >> command;
          if (command == "new") {
            cout << "Enter a product field as a number:\nproduct> ";
            cin >> command;
            products.emplace_back(makeProduct(stoi(command)));
            int newThang = (rand() % 3500);
            totalCompanyValue -= newThang;
            monthlyExpenses += newThang;
          } else if (command == "list")  {
            for (int i = 0; i < products.size(); i++) {
              cout << "Name: " << products[i].productName << "  Outsourced: " << products[i].outsourced << "  Field: " << products[i].field << endl; 
            }
          } else if (command == "exit") {
            break;
          } else {
            cout << "Wrong. Try again: \n";
          }
        }
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
		else if (month == 2 && playedBefore == false) {
			cout << "RHETORICAL QUESTION: Would stricter business laws and higher enforcment of those laws reduce child labor in third-world countries?\n";
		}
		else if (month == 3 && playedBefore == false) {
			Sleep(500);
      cout << "Hopefully, you've outsourced some of your products and seen how it can lower costs.  In the US, more than 2/3 of products are outsourced, which has lowered costs and helped some businesses, but also created another problem: child labor.";
	  cin.ignore();
	  cin.ignore();
	  cout << "Many outsourced products are made in third-world countires.  These countries usually have a higher level of desperation, and also less regulations on businesses.  These can cause additional problems like seriously damaging the environment.  But the desperation is often exploited by some people who promise a better life, but in reality make people slaves.";
	  cin.ignore();
	  cout << "RHETORICAL QUESTION: What is the source of child labor? \n";
    }
		month++;
    randWork = randNum((int)workers / 5);
    newWorkCost = randWork * (rand() % 3000);
  	workers = workers + randWork;
    totalCompanyValue -= newWorkCost;
    monthlyExpenses += newWorkCost;
		
    marginChange = rand() % 5;
    randTrue = rand() % 1;
    if (randTrue == 0) {
      profitMargin -= marginChange / 100;
    } else {
      profitMargin += marginChange / 100;
    }
    profit = revenue * profitMargin;
	totalCompanyValue += profit;
	for (int i = 0; i < products.size(); i++) {
		if (products[i].outsourced == 1) {
			products[i].soldPerMonth *= 2;
		}
	}
	}
	return 0;
};