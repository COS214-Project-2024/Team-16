#include "Industrial.h"
#include <iostream>

/**
 * @brief Constructs an Industrial building with the given attributes.
 * 
 * @param name Name of the industrial building.
 * @param satisfaction Initial satisfaction score associated with the building.
 * @param economicImpact Initial economic impact generated by the building.
 * @param resourceConsumption Initial resource consumption of the building.
 * @param constructionStatus Boolean indicating whether construction is complete.
 * @param improvementLevel Initial improvement level of the building.
 * @param resourcesAvailable Boolean indicating if resources are available for improvements.
 * @param notificationRadius Radius within which citizens are notified of changes to the building.
 */
Industrial::Industrial(std::string name, int satisfaction, double economicImpact, 
                       double resourceConsumption, bool constructionStatus, 
                       int improvementLevel, bool resourcesAvailable, int notificationRadius)
    : Building(name, satisfaction, economicImpact, resourceConsumption, 
               constructionStatus, improvementLevel, resourcesAvailable, notificationRadius), name(name), satisfaction(satisfaction), economicImpact(economicImpact),
      resourceConsumption(resourceConsumption), constructionStatus(constructionStatus),
      improvementLevel(improvementLevel), resourcesAvailable(resourcesAvailable),
      citizenNotificationRadius(notificationRadius) {}

/**
 * @brief Returns the type of the building as its name.
 * 
 * @return A string representing the name/type of the industrial building.
 */
std::string Industrial::getType() {
    return name;
}

/**
 * @brief Calculates the satisfaction level for the industrial building.
 * 
 * @return An integer representing the satisfaction score.
 */
int Industrial::calculateSatisfaction() {
    return satisfaction;
}

/**
 * @brief Calculates the economic impact of the industrial building.
 * 
 * @return A double representing the economic impact value.
 */
double Industrial::calculateEconomicImpact() {
    return economicImpact;
}

/**
 * @brief Calculates the resource consumption of the industrial building.
 * 
 * @return A double representing the amount of resources consumed.
 */
double Industrial::calculateResourceConsumption() {
    return resourceConsumption;
}

/**
 * @brief Checks if the construction of the industrial building is complete.
 * 
 * @return True if construction is complete, false otherwise.
 */
bool Industrial::constructionComplete() {
    return constructionStatus;
}

/**
 * @brief Performs improvements on the industrial building.
 * 
 * If resources are available, the improvement level and satisfaction are increased, 
 * and the economic impact is boosted. Citizens observing the building are notified 
 * of the improvements.
 */
void Industrial::doImprovements() {
    if (checkResourceAvailability()) {
        improvementLevel++;
        satisfaction += 5;  // Increase satisfaction
        economicImpact *= 1.1;  // Boost economic impact slightly

        std::cout << "Industrial building improved! New Improvement Level: " 
                  << improvementLevel << "\n";

        // Notify citizens about the improvements
        notifyCitizens();
    } else {
        std::cout << "Resources unavailable for improvements.\n";
    }
}

/**
 * @brief Checks if resources are available for improvements.
 * 
 * @return True if resources are available, false otherwise.
 */
bool Industrial::checkResourceAvailability() {
    return resourcesAvailable;
}

/**
 * @brief Notifies all attached citizens about changes to the industrial building.
 * 
 * Uses the base class implementation to notify all observers (citizens) about changes.
 */
void Industrial::notifyCitizens() {
    std::cout << "Notifying citizens about changes in the industrial building: " << name << "\n";
    Building::notifyCitizens();  // Call the base class notify method
}
