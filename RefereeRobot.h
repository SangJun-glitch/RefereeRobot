#ifndef REFEREEROBOT_H
#define REFEREEROBOT_H

#include "GameSituation.h"
#include <vector>
#include <string>

class RefereeRobot {
public:
    RefereeRobot(); // ������
    void displayRules() const; // ��Ģ�� ����ϴ� �Լ�
    void judgeSituation(const GameSituation& situation) const; // ��Ȳ�� �Ǵ��ϴ� �Լ�
private:
    std::vector<std::string> rules; // ��Ģ ���
};

#endif
