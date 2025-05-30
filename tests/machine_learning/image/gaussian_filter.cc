#include "../../../src/machine_learning/image/filters/gaussian_filter.h"
#include "../../../third_party/catch.hpp"

using namespace gaussian_filter;

TEST_CASE("Testing gaussian filter application") {
    std::vector<std::vector<int32_t>> image(50, std::vector<int32_t>(50, 42));

    auto resulted = apply_gaussian_filter(image);
    REQUIRE(resulted.size() != 0);
}

TEST_CASE("Testing gaussian filter application with empty image") {
    std::vector<std::vector<int32_t>> image;
    CHECK_THROWS(apply_gaussian_filter(image));
}
