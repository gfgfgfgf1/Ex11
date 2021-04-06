// Copyright 2021 DB
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <iostream>

class Cage {
  int light;

 public:
  Cage* next;
  Cage* prev;
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = 1; }
  void off() { light = 0; }
  int get() const { return light; }
};
class Train : public Cage {
  Cage* first{ nullptr };
  Cage* last{ nullptr };

 public:
  explicit Train(int length_);
  void addCage(int light);
  void print();
  unsigned int getLen();
};

#endif  // INCLUDE_TRAIN_H_