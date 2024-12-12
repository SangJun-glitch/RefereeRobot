#ifndef REFEREEROBOT_H
#define REFEREEROBOT_H

#include "GameSituation.h"
#include <vector>
#include <string>

class RefereeRobot {
public:
    RefereeRobot(); // 생성자
    void displayRules() const; // 규칙을 출력하는 함수
    void judgeSituation(const GameSituation& situation) const; // 상황을 판단하는 함수
private:
    std::vector<std::string> rules; // 규칙 목록
};

#endif
