// Copyright [2016] <Krzysztof Czelusniak>

#include <iostream>
#include <string>

bool IsMorning(std::string period) {
  return period == "AM";
}

std::string Convert12To24HourTime(std::string twelve_hour_time) {
  std::string time = twelve_hour_time.substr(0, 8);
  std::string period = twelve_hour_time.substr(8, 2);

  if (twelve_hour_time == "12:00:00") {
    if (IsMorning(period)) {
      return "00:00:00";
    }
    return "12:00:00";
  }

  int hour = std::stoi(time.substr(0, 2));
  if (hour == 12) {
    if (IsMorning(period)) {
      return time.replace(0, 2, "00");
    }
    return time;
  }

  if (IsMorning(period)) {
    return time;
  }
  std::string twenty_four_hour = std::to_string(hour + 12);
  return time.replace(0, 2, twenty_four_hour);
}

int main() {
  std::string twelve_hour_time;
  std::cin >> twelve_hour_time;

  std::string twenty_four_hour_time = Convert12To24HourTime(twelve_hour_time);
  std::cout << twenty_four_hour_time;
}
