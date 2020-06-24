#include "utility_f.hpp"

std::tuple<vector<vector<float>>,vector<vector<float>>> readMatFromFile(string str) {
    vector<vector<float>> matAPP;
    vector<float> lineAPP;
    vector<vector<float>> targets;
    float x;
    string line;
    ifstream APP;
    APP.open(str);
    std::vector<int> v;

    while (std::getline(APP, line)) {
        std::stringstream iss(line);
        string n;
        bool first = true;
        while (std::getline(iss, n, ',')) {
            if (first) {
                targets.push_back(convert_to_vec(std::stof(n)));
            } else {
                lineAPP.push_back(std::stof(n));
            }
            first = false;
        }
        matAPP.push_back(lineAPP);
        lineAPP.clear();
    }

    return {targets, matAPP};
}

sf::Text text;
sf::Font font;

sf::Text simpleText(std::string str, int xOrigin, int yOrigin, int charSize) {

    font.loadFromFile("/Library/Fonts/arial.ttf");
    text.setFont(font);
    text.setCharacterSize(charSize);
    text.setOrigin(-xOrigin, -yOrigin);
    text.setString(str);

    return text;
}

std::vector<float> convert_to_vec(float x){
    vector<float> v(10);
    v[x] = 1;
    return v;
}