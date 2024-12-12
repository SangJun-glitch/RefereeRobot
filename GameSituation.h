#ifndef GAMESITUATION_H
#define GAMESITUATION_H

#include <string>

class GameSituation {
public:
    std::string description; // ���� ��Ȳ ����
    std::string violation;   // ���� ���� (��: Offside, Handball, Foul)

    GameSituation(const std::string& desc, const std::string& viol); // ������ ����
};

#endif
