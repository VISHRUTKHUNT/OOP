#include <iostream>
#include <string.h>
using namespace std;
class AddString{

public:
	
	char s1[25], s2[25];

	
	AddString(char str1[], char str2[])
	{
		
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}

	
	void operator+()
	{
		cout << "\nConcatenation: " << strcat(s1, s2);
	}
};


main()
{
	
	char str1[] = "Welcome";
	char str2[] = " to Tops";
	
	AddString a1(str1, str2);

	+a1;

}

