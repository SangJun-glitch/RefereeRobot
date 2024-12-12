#include "RefereeRobot.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Constructor
RefereeRobot::RefereeRobot() {
    std::ifstream file("rules.txt");
    std::string rule;
    if (file.is_open()) {
        while (std::getline(file, rule)) {
            rules.push_back(rule);
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open rules.txt" << std::endl;
    }
}

// Display rules
void RefereeRobot::displayRules() const {
    std::cout << "Loaded Rules:" << std::endl;
    for (const auto& rule : rules) {
        std::cout << "- " << rule << std::endl;
    }
}

// Judge a situation
void RefereeRobot::judgeSituation(const GameSituation& situation) const {
    std::cout << "Judging the game situation:" << std::endl;
    std::cout << "Description: " << situation.description << std::endl;
    std::cout << "Decision: ";

    if (situation.violation == "Offside") {
        std::cout << "Offside violation detected. Free kick awarded." << std::endl;
    }
    else if (situation.violation == "Handball") {
        std::cout << "Handball violation detected. Penalty kick awarded." << std::endl;
    }
    else if (situation.violation == "Foul") {
        std::cout << "Foul detected. Free kick awarded." << std::endl;
    }
    else {
        std::cout << "No violations detected. Continue play." << std::endl;
    }
}
