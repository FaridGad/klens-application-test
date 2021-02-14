#include "stdafx.h"
#include "Adder.h"

Adder::Adder()
{

}

string Adder::LibrarySummation()
{
	string str;
	cout << "Enter the numbers to be added:" << endl;
	getline(cin, str);

	int total = 0;
	stringstream str_stream;
	//Convert string to stringstream
	str_stream << str;
	//Flag that gets raised if an integer is found
	bool found_integer = false;

	string temp_str;
	int single_integer;
	//Loop through the stringstream word-by-word and try to convert the words to integers
	while (!str_stream.eof())
	{
		str_stream >> temp_str;
		if (stringstream(temp_str) >> single_integer)
		{
			found_integer = true;
			total += single_integer;
		}
		temp_str = "";
	}

	if (found_integer)
		return "Total number = " + to_string(total);

	else
		return "No numbers were found in the input string";
}

string Adder::PointerSummation()
{
	string str;
	cout << "Enter the numbers to be added:" << endl;
	getline(cin, str);
	string temp_str = "";
	int total = 0;
	int temp_int;
	//Flag that gets raised if an integer is found
	bool found_integer = false;
	
	for (int i = 0; i < str.size(); i++)
	{
		switch (str.at(i)) {
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0': temp_str += str.at(i); found_integer = true; break;
		case '-':
			if (temp_str.empty())
			{
				temp_str += str.at(i);
			}
			break;
		case ' ':
			if (!temp_str.empty())
			{
			 	temp_int = stoi(temp_str);
				total += temp_int;
				temp_str = "";
			}
		}
	}

	//Check if a number was present at th end of the string
	if (!temp_str.empty())
	{
		temp_int = stoi(temp_str);
		total += temp_int;
		temp_str = "";
	}

	if (found_integer)
		return "Total number = " + to_string(total);

	else
		return "No numbers were found in the input string";
}
