#ifndef GAMESITUATION_H
#define GAMESITUATION_H

#include <string>

class GameSituation {
public:
    std::string description; // 게임 상황 설명
    std::string violation;   // 위반 사항 (예: Offside, Handball, Foul)

    GameSituation(const std::string& desc, const std::string& viol); // 생성자 선언
};

#endif
