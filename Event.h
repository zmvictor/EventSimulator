//
// Created by zm on 5/18/18.
//

#ifndef EVENTSIMULATOR_EVENT_H
#define EVENTSIMULATOR_EVENT_H

#include <cstdint>

namespace EventSimulator {

class Event {
 public:
  explicit Event(uint64_t start_ms);
  Event(uint64_t start_ms, uint64_t stop_ms);
  virtual void start() {}
  virtual void stop() {}
  void UpdateStopTime(uint64_t new_stop_ms);
 protected:
  uint64_t start_ms_;
  uint64_t stop_ms_;
};

}

#endif //EVENTSIMULATOR_EVENT_H
