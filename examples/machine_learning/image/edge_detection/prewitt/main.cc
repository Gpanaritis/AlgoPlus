#include "../../../../../third_party/json.hpp"
#include <fstream>
#include <iostream>
#include "../../../../../src/machine_learning/image/edge_detection/prewitt.h"

using namespace prewitt;
using namespace std;
using namespace nlohmann;

int main() {
    std::ifstream ifs("data.json");
    json jf = json::parse(ifs);
    std::vector<std::vector<int32_t>> data = jf["img"];

    std::vector<std::vector<int32_t>> res = Prewitt(data);
    json j;
    j["data"] = res;
    std::ofstream file("results.json");
    file << j;
}
