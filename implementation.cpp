#include<iostream>
#include<string>
#include<fstream>
#include "doubleLinkedList.h"

using namespace std;

int main()
{
	ifstream file("words.txt");
	string word;
	dLinkedList<string> list;
	bool answer;
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> word;
			list.insert(word);
		}
	}
	else
	{
		cout << "File did not open";
	}

	//list.print();
	answer = list.find("Oreoluwa");
	if (answer == true) cout << "Word Found\n";
	else cout << "word not found\n";
	system("pause");
	return 0;
}