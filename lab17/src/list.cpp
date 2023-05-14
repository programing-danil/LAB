#include "list.h"

void Node::printNode() {

	std::cout << "Your Package" << std::endl;

	for (size_t i = 0; i < size; i++) {

		printf("%s %s %d %d %s %s\n", this->package_node[i].getSize(), this->package_node[i].getSender(), this->package_node[i].getData(),
		       this->package_node[i].bow.getBow_weight(), this->package_node[i].bow.getBow_cost(), this->package_node[i].getFormat());
	}
}

void Node::addPackage(size_t pos, Package *element)
{
	Package *new_vio = new Package[size + 1];
	if (pos > this->size) {
		pos = this->size;
	}
	memcpy(new_pack, this->package_node, pos * sizeof(Package));
	memcpy(new_pack + pos, element, sizeof(Package));
	memcpy(new_pack + pos + 1, this->package_node + pos, (this->size - pos) * sizeof(Package));
	delete[] package_node;
	this->package_node = new_pack;
	this->size++;
	std::cout << "Success, you add package" << pos << std::endl;
}

class Package &Node::findElementPackage(size_t pos) {
	if (pos >= size || pos < 0) {
		std::cout << "Mission failed" << std::endl;
		return package_node[0];
	} else
		std::cout << "Yes, you find package" << pos << std::endl;
	return package_node[pos];
}

void Node::delElementPackage(const size_t pos) {
Package *new_pack = new Package[size - 1];
	memcpy(new_pack, package_node, sizeof(Package) * pos);
	memcpy(new_pack + pos, (package_node + pos + 1), sizeof(Package) * (size - pos - 1));
	delete[] package_node;
	package_node = new_pack;
	size--;
	std::cout << "Yes, you delete package" << pos << std::endl;
}

class Package &Node::findPackageold() {

	for (unsigned long int i = 0; i < size; i++) {
		for (unsigned long int j = 0; j < size - i - 1; j++) {
			if (package_node[j].data > package_node[j + 1].data) {
				Packages temp = package_node[i];
				package_node[i] = package_node[i + 1];
				package_node[i + 1] = temp;
			}
			if (strcmp(Package_node[i].sender, "Nova Poshta") == 0) {
				std::cout << "The oldest package is" << std::endl;
				printf("%s %s %d %d %s %s\n", this->package_node[i].package(), this->package_node[i].package(),
				       this->package_node[i].getData(), this->package_node[i].bow.getBow_weight(),
				       this->package_node[i].bow.getBow_cost(), this->package_node[i].getFormat());
			}
		}
	}
	return *package_node;
}