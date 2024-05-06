#include <iostream>
#include <map>

std::string CalculateRanking(size_t victoryCount, size_t defeatCount)
{
    std::map<int, std::string> my_map = {
        { 0, "Ferro" },
        { 11, "Bronze" },
        { 21, "Prata" },
        { 51, "Ouro" },
        { 81, "Diamante" },
        { 91, "Lendario" },
        { 101, "Imortal" }
    };

    size_t totalPoints = victoryCount - defeatCount;
    std::string ranking;

    for (const auto& pair : my_map) {
        if (totalPoints >= pair.first) {
            ranking = pair.second;
        }
    }

    return ranking;
}

int main()
{
    size_t victoryCount;
    size_t defeatCount;

    std::cout << "Insert the number of victories of player\n";
    std::cin >> victoryCount;

    std::cout << "Insert the number of defeats of player\n";
    std::cin >> defeatCount;

    std::cout << CalculateRanking(victoryCount, defeatCount) << "\n";
}


