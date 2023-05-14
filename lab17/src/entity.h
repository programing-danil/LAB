#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#define N 10


class Package {

    private:
	char size[N];
	char sender[N];
	int date;

	class bow {

	    private:
		int bow_weight;
		char bow_cost[N];

	    public:
		char* getBow_cost();
		void setBow_cost(char *bow_cost);
		int getBow_weight();
		void setBow_weight(int bow_weight);
		friend class Package;
		friend class Information;
	} bow;
	char format[N];

    public:
 Package(const char size[N], const char sender[N], const int data, const int bow_weight, const char bow_cost[N],
		const char format[N]);
	Package();


char *getSize();
void setSize(char *size);
char *getSender();
void setSender(char *sender);
int getData();
void setData(int data);
char *getFormat();
void setformat(char *format);
    friend class Node;
};