// CST126_1.cpp : this lab will find a case sensitive letter in the provided string


#include "stdafx.h"
#include <iostream>

using namespace std;

char fLetter;
int i=0;
char phrase1[] = "I was born with a plastic spoon in my mouth";
char * ptr_phrase = phrase1;
char copied1[50];
char * ptr_copied;


void phraseCopy(char *input, char *output);

int main()
{
	cout << "Please enter a letter so we can find it in the phrase: " << endl;
	cout << phrase1 << endl;
	
	cin >> fLetter;
	 
	
	
	

	phraseCopy(ptr_phrase, ptr_copied);

	


	



	//for(i = 0; i < 50; i++)			//cycles through phrase and outputs letter position based on 1 being starting point
	//{								//checks evey letter in array and compares to input letter 
	//	
	//	cout << phrase1[i] << " " << i + 1 << endl;

	//	if (fLetter == phrase1[i])
	//		cout << fLetter << " and " << phrase1[i] << " match." << endl;
	//	else
	//		cout << "no match" << endl;
	//}

	/*letterComp(fLetter);*/

	return 0;
}

void phraseCopy(char * input, char *output)
{
	char phrase3[50];
	char *ptr_copied = phrase3;
	*ptr_copied = *input;

	ptr_copied = input;

	output = ptr_copied;
	
	
}

//void letterComp(char letter)
//{
//
//	char letterSample[];
//
//	for (i = 0; i < 50; i++)
//	{
//		LetterSample[i] = letter
//
//
//	}
//
//}