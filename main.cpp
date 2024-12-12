#include "RefereeRobot.h"
#include "GameSituation.h"
#include <iostream>

int main() {
    // Initialize the referee robot
    RefereeRobot robot;

    // Display the loaded rules
    robot.displayRules();

    // Create a game situation
    GameSituation situation1("Player was in an offside position.", "Offside");
    GameSituation situation2("Player handled the ball intentionally.", "Handball");
    GameSituation situation3("Player committed a foul by tackling unfairly.", "Foul");
    GameSituation situation4("Player made a fair play.", "None");

    // Judge each situation
    std::cout << "\nJudging Situations:" << std::endl;
    robot.judgeSituation(situation1);
    robot.judgeSituation(situation2);
    robot.judgeSituation(situation3);
    robot.judgeSituation(situation4);

    return 0;
}
