#include "CollectTax.h"

CollectTax::CollectTax(Citizen* citizenReceiver, Building* buildingReceiver) {
	this->buildingList.push_back(buildingReceiver);
	this->citizenList.push_back(citizenReceiver);
	this->name = "Collect";
}

void CollectTax::execute() {
	for (int i = 0; i < this->buildingList.size(); i++) {
		this->buildingList[i]->performAction(0);
	}
	for (int i = 0; i < this->citizenList.size(); i++) {
		this->citizenList[i]->performAction(0);
	}
}

void CollectTax::addBuilding(Building* buildingReceiver) {
	this->buildingList.push_back(buildingReceiver);
}

void CollectTax::addCitizen(Citizen* citizenReceiver) {
	this->citizenList.push_back(citizenReceiver);
}