//
// Created by zm on 5/18/18.
//

#include <cassert>

#include "Event.h"

namespace EventSimulator {

Event::Event(uint64_t start_ms)
  : Event(start_ms, start_ms) {}

Event::Event(uint64_t start_ms, uint64_t stop_ms)
  : start_ms_(start_ms), stop_ms_(stop_ms) {
  assert(stop_ms >= start_ms);
}

void Event::UpdateStopTime(uint64_t new_stop_ms) {
  stop_ms_ = new_stop_ms;
}

}