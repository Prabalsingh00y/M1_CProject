#ifndef BANKING_H_
#define BANKING_H_
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct user {
	char phone[50];
	char ac[50];
	char password[50];
	float balance;
};
	struct user user,usr;
	char filename[50],phone[50],password[50],phone2[50];
	FILE *fp,*fptr;
	int opt,choice;
	int amount;
	char cont = 'y';
#endif