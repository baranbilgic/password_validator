#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define true 1
#define false 0

int has_more_than_six(const char*password);
int has_uppercase(const char*password);
int has_number(const char*password);

int main (){

	char password[100];
	printf("Enter your password:\n");
	scanf("%s", password);
	
	if(!has_more_than_six(password)){
		printf("\nPassword has less than 6 characters. Exitting.\n\n");
		exit(1);
	}
	if(!has_uppercase(password)){
		printf("\nPassword doesn't contain an uppercase letter. Exitting.\n\n");
		exit(1);
	}
	if(!has_number(password)){
		printf("\nPassword doesn't contain a number. Exitting.\n\n");
		exit(1);
	}

	printf("\nYour password is valid.\n");

	return 0;
}


int has_more_than_six(const char*password){
	int is_valid = false;
	if( strlen(password) > 5) is_valid = true;
	return is_valid;
}

int has_uppercase(const char*password){
	int is_valid = false;
	int i;
	for( i = 0; i < strlen(password); ++i)
		if( isupper(password[i]) )
			is_valid = true;
		
	return is_valid;
}

int has_number(const char*password){
	int is_valid = false;
	int i;
	for( i = 0; i < strlen(password); ++i)
		if( isdigit(password[i]) ) 
			is_valid = true;

	return is_valid;
}

