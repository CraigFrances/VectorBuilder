
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<int> list{};
	char selection{};
	do
	{
		cout << "P - Print numbers" << endl << "A - Add a number" << endl << "M - Display mean of the numbers" << endl
			<< "S - Display the smallest number" << endl << "L - Display the largest number" << endl << "Q - Quit\n" << endl << "Enter your choice: ";
		cin >> selection;
		switch (selection)
		{
		case 'p':
		case 'P':
			if (list.size() != 0)
			{
				cout << "[";
				for (auto value : list)
				{
					cout << " " << value << " ";
				}
				cout << "]";
			}
			else
				cout << "[] - The list is empty";
			cout << endl << endl;
			break;
		case 'a':
		case 'A':
		{
			int userInput{ 0 };
			cout << "\nPlease enter an int to add to the list: ";
			cin >> userInput;
			list.push_back(userInput);
			cout << "\n" << userInput << " added\n\n";
			break;
		}
			
		case 'm':
		case 'M':
			if (list.size() != 0)
			{
				int sum{};
				for (auto value : list)
				{
					sum += value;
				}
				cout << "Average = " << sum / list.size() << endl << endl;
			}
			else
				cout << "Unable to calculate average - no data\n\n";
			break;
		case 's':
		case 'S':
			if (list.size() != 0)
			{
				int smallest{ list.at(0) };
				for (int i{ 0 }; i < list.size(); ++i)
					if (smallest > list.at(i))
						smallest = list.at(i);
				cout << "The smallest number is: " << smallest << endl << endl;
			}
			else
				cout << "Unable to determine the smallest number - no data\n\n";
			break;
		case 'l':
		case 'L':
			if (list.size() != 0)
			{
				int largest{ list.at(0) };
				for (int i{ 0 }; i < list.size(); ++i)
					if (largest < list.at(i))
						largest = list.at(i);
				cout << "The largest number is: " << largest << endl << endl;
			}
			else
				cout << "Unable to determine the largest number - no data\n\n";
			break;
		case 'q':
		case 'Q':
			cout << "Goodbye\n\n";
		}
	} while (selection != 'q' && selection != 'Q');
	return 0;
}

