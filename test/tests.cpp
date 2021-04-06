// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(FirstTest, test1) {
  Train tr3(10);
  EXPECT_EQ(10, tr3.getLen());
}

TEST(SecondTest, test2) {
  Train tr3(10);
  tr3.addCage(1);
  EXPECT_EQ(11, tr3.getLen());
}

TEST(ThirdTest, test3) {
  Train tr3(15);
  tr3.addCage(5);
  EXPECT_EQ(20, tr3.getLen());
}
