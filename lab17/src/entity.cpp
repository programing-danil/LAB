#include "entity.h"


char* Package::bow::getBow_cost() {
	return bow_cost;
}

void Package::bow::setBow_cost(char *Bow_cost) {
	strcpy(this->bow_cost, Bow_cost);
}

int Package::bow::getBow_weight() {
	return bow_weight;
}

void Package::bow::setBow_cost(int Bow_weight) {
	this->bow_weight = Bow_weight;
}

Package::Package(const char size[N], const char sender[N], const int date, const int size_weight, const char size_cost[N],
		 const char format[N]) {
	strcpy(this->size, size);
	strcpy(this->sender, sender);
	this->date = date;
	this->size.size_weight = size_weight;
	strcpy(this->size.size_cost, size_cost);
	strcpy(this->format, format);
}

Package::Package() {
}

char *Package::getSize() {
	return size;
}

void Package::setSize(char *Size) {
	strcpy(this->size, Size);
}

char *Package::getSender() {
	return sender;
}

void Package::setSender(char *Sender) {
	strcpy(this->sender, Sender);
}

int Package::getDate() {
	return date;
}

void Package::setDate(int Date) {
	this->date = Date;
}

char *Package::getFormat() {
	return format;
}

void Package::setformat(char *Format) {
	strcpy(this->format, Format);
}