//
#ifndef utility_f_hpp
#define utility_f_hpp

#include "Header.h"
std::vector<float> convert_to_vec(float x);
std::tuple<std::vector<std::vector<float>>,std::vector<std::vector<float>>>readMatFromFile(std::string str);
sf::Text simpleText(std::string str,int xOrigin, int yOrigin, int charSize);

#endif /* utility_f_hpp */
