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

TEST(CandleTest, Contains_True)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_TRUE(candle.contains(120));
}

TEST(CandleTest, Contains_False)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_FALSE(candle.contains(30));
}

TEST(CandleTest, Contains_BoundaryLow)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_TRUE(candle.contains(50));
}

TEST(CandleTest, FullSize_1)
{
    Candle candle = Candle(100, 200, 50, 150);
    EXPECT_EQ(candle.full_size(), 150);
}

TEST(CandleTest, FullSize_2)
{
    Candle candle = Candle(100, 210, 40, 150);
    EXPECT_EQ(candle.full_size(), 170);
}

TEST(CandleTest, FullSize_3)
{
    Candle candle = Candle(100, 300, 140, 100);
    EXPECT_EQ(candle.full_size(), 160);
}