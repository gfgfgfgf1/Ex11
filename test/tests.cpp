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
  Train tr3(10);
  Cage* cg = tr3.getLast();
  if (cg->next == tr3.getFirst()) {
    EXPECT_EQ(1, 1);
  } else {
    EXPECT_EQ(0, 1);
  }
}