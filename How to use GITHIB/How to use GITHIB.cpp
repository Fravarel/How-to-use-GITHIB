#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int BiAI, tries = 0, num = rand() % 64;
int main()
{
	/*
	how to use git 
	right click solution file under Solutio Explorer
	clikc on "Add solution to source control
	right click solution file under Solutio Explorer
	select commit

	*/





	//Declare high and low variables
	int lowVal = 1, highVal = 64;
	do
	{
		//Binary search algorithm
		BiAI = lowVal + ((highVal - lowVal) / 2);
		tries++;
		if (BiAI > num)
		{
			cout << "Too high, Still Guessing \n" << endl;
			highVal = BiAI - 1;
		}
		else if (BiAI < num)
		{
			cout << "Too Low, Still Guessing \n" << endl;
			lowVal = BiAI + 1;
		}
		else
		{
			cout << "AI: Got it! the number is: " << num << endl;
			cout << "Great job!\nit took the Binary AI " << tries << " tries\n\n";
		}
	} while (BiAI != num);
	tries = 0;
	system("PAUSE");
	return 0;
}

