// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(SecondTest, test1) {
  Train tr3(10);
  tr3.addCage(1);
  EXPECT_EQ(11, tr3.length());
}
