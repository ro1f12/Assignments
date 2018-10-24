/*
30. Write a program to concatenate two strings using function (without using library function).
*/
#include<iostream>
#include<cstring>

using namespace std;

char * strcat(char s1[], char s2[])
{
	int len = strlen(s1) + strlen(s2) - 1;

	char *str = new char[len];

    int i, j=0;

    i=0;
	while(s1[i] != '\0'){
		str[j] = s1[i];
		i++;
		j++; 
	}


	i=0;
	while(s2[i] != '\0'){
		str[j] = s2[i];
		i++;
		j++;
	}

	str[j] = '\0';

	return str;
}

int main(int argc, char const *argv[])
{
	char s1[] = "hello";
	char s2[] = " world";

	char *str;

	str = strcat(s1,s2);

	cout<<str;
	return 0;
}
