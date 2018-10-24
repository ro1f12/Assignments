/**
34. Write a program using pointers to copy a string to another string variable 
(without using library function).
**/
#include<iostream>
#include<cstring>
using namespace std;
#define BUF 100





char* str_copy(char* dstn, const char* src)
{
	// return if no memory is allocated to the destination
	if (dstn != NULL){

		char *buf = dstn;

		while(*src != '\0'){
			*dstn = *src;
			dstn++;
			src++;
		}
		//end 
		*dstn = '\0';

        return buf;
	}
	return NULL;
		
}

//driver code
int main(void)
{
	char src[] = "hello world";
	char dstn[BUF];

	cout<<str_copy(dstn, src)<<"\n";
	
	return 0;
}
