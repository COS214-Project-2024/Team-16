/**
 * @file Policies.cpp
 * @brief Implements the Policies class, representing a department responsible for managing and operating policies within an organization.
 */

#include "Policies.h"
#include <iostream>
#include <algorithm>

/**
 * @brief Constructs a Policies department with the given name.
 * 
 * @param name Name of the policies department.
 */
Policies::Policies(const std::string& name) : Department(name) {}

/**
 * @brief Operates the policies department by displaying active policies.
 * 
 * This method prints all the active policies managed by the department.
 */
void Policies::operate() {
    std::cout << "Operating Policies Department:\n";
    if (activePolicies.empty()) {
        std::cout << "No active policies.\n";
    } else {
        std::cout << "Active Policies:\n";
        for (const auto& policy : activePolicies) {
            std::cout << "- " << policy << "\n";
        }
    }
}

/**
 * @brief Adds a new policy to the department's list of active policies.
 * 
 * @param policy The policy to be added.
 */
void Policies::addPolicy(const std::string& policy) {
    activePolicies.push_back(policy);
    std::cout << "Policy added: " << policy << "\n";
}

/**
 * @brief Removes a policy from the department's list of active policies.
 * 
 * If the policy is found, it is removed from the list. Otherwise, a message is displayed 
 * indicating that the policy was not found.
 * 
 * @param policy The policy to be removed.
 */
void Policies::removePolicy(const std::string& policy) {
    auto it = std::remove(activePolicies.begin(), activePolicies.end(), policy);
    if (it != activePolicies.end()) {
        activePolicies.erase(it, activePolicies.end());
        std::cout << "Policy removed: " << policy << "\n";
    } else {
        std::cout << "Policy not found: " << policy << "\n";
    }
}

/**
 * @brief Retrieves the count of active policies in the department.
 * 
 * @return The number of active policies as a size_t.
 */
size_t Policies::getActivePoliciesCount() {
    return activePolicies.size();
}

/**
 * @brief Executes a predefined command within the Policies department.
 * 
 * This function currently does nothing and serves as a placeholder.
 */
void Policies::execute() {
    // Do nothing
}

/**
 * @brief Adds a command to the Policies department.
 * 
 * This function currently does nothing and serves as a placeholder.
 * 
 * @param command Pointer to the Command object to add.
 */
void Policies::addCommand(Command* command) {
    // Do nothing
}

/**
 * @brief Removes a command from the Policies department by index.
 * 
 * This function currently does nothing and serves as a placeholder.
 * 
 * @param i Index of the command to remove.
 */
void Policies::removeCommand(int i) {
    // Do nothing
}


std::vector<std::string> Policies::getActivePolicies() const {
    return activePolicies;
}