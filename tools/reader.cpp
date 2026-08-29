#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <nlohmann/json.hpp> // Include the library

#include <reader.hpp>
using json = nlohmann::json;

Reader::Reader(){};

std::list<std::unordered_map<std::string, int, char>> Reader::shipReader(std::string filename){
    std::ifstream file(filename);
    json ship_list;
    file >> ship_list;

    for (const auto& param : ship_list) {
        std::string name = param["ship"];
        int age = param["size"];
        char symbol = param["symbol"].get<std::string>()[0];
        
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
}
