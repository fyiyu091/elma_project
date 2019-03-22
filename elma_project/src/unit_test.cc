#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "gtest/gtest.h"
#include "stopwatch.h"

namespace {
 
    using namespace elma;
    using namespace stopwatch;

    TEST(StopWatch,Construction) { 
        StopWatch sw; 
        ASSERT_EQ("off", sw.current().name());
    }

}