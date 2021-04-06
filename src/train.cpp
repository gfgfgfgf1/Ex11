// Copyright 2021 DB
#include "train.h"

#include <ctime>

Train::Train(int length_) {
  srand(std::time(0));
  for (size_t i = 0; i < length_; i++) {
    int light_ = std::rand() % 2;
    this->addCage(light_);
  }
}

void Train::print() {
  if (this->first) {
    Cage* currCage{this->first};
    do {
      std::cout << currCage->get() << std::endl;
      currCage = currCage->next;
    } while (currCage != this->first);
  }
}

void Train::addCage(int light_) {
  Cage* newC = new Cage;
  if (light_ == 1) {
    newC->on();
  }
  if (this->first == nullptr && this->last == nullptr) {
    this->first = newC;
    this->last = newC;
  } else if (this->first == this->last) {
    this->last = newC;
    this->first->next = newC;
    this->first->prev = newC;
    this->last->next = this->first;
    this->last->prev = this->first;
  } else {
    newC->prev = this->last;
    this->last->next = newC;
    this->last = newC;
    this->first->prev = this->last;
    this->last->next = this->first;
  }
}

unsigned int Train::getLen() {
  unsigned int step{0};
  if (!this->first) return step;
  this->first->off();
  step++;
  Cage* currCage{this->first->next};
  while (true) {
    while (true) {
      if (!currCage->get()) {
        currCage->on();
        break;
      }
      step++;
      currCage = currCage->next;
    }
    if (this->first->get()) {
      return step;
    }
  }
}