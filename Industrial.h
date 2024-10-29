#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

#include "Building.h"
#include <string>
using namespace std;

class Industrial : public Building {

private:
    string name;
    int satisfaction;
    double economicImpact;
    double resourceConsumption;
    bool constructionStatus;
    int improvementLevel;
    bool resourcesAvailable;
    int citizenNotificationRadius;

public:

	Industrial(string name, int satisfaction, double economicImpact, double resourceConsumption, bool constructionStatus, int improvementLevel, bool resourcesAvailable, int notificationRadius);

	string getType();

	int calculateSatisfaction();

	double calculateEconomicImpact();

	double calculateResourceConsumption();

	bool constructionComplete();

	void doImprovements();

	bool checkResourceAvailability();

	void notifyCitizens();
};

#endif
