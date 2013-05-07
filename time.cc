#include <iostream>
#include <sys/time.h>
using namespace std;

#include "time.h"

long g_start_time = 0;

void RecordStartTime() {
  static bool recorded_yet = false;
  if (recorded_yet) {
    cout << "already recorded" << endl;
    return;
  }
  recorded_yet = true;
  timeval time;
  gettimeofday(&time, NULL);
  g_start_time = time.tv_sec * 1000 + time.tv_usec / 1000;
}
