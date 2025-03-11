#include <vector>
#include <gtest/gtest.h>
#include <functional>
#include <iostream>
#include "candle.h"

TEST(CandleTest, BodyContains_True)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_TRUE(candle.body_contains(150));
}

TEST(CandleTest, BodyContains_False)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_FALSE(candle.body_contains(57));
}

TEST(CandleTest, BodyContains_BoundaryOpen)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_TRUE(candle.body_contains(100));
}
