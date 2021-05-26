#include <iostream>
#include <cstring>

using namespace std;

int main()

{
	struct yugiohCard
	{
		string name;
		string description;
		int level;
		string picture;
	};

	yugiohCard ygocarddeck[50];


	ygocarddeck[0].name = "Dark Magician";
	ygocarddeck[0].description = "A wizard skilled in the dark arts.";
	ygocarddeck[0].level = 7;

	cout << ygocarddeck[0].name << ygocarddeck[0].description << ygocarddeck[0].level << endl;
	//implement shuffling and array manipulation using RNG
	//implement hands using variable placeholders

	return 0;
}