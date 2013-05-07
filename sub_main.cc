#include <iostream>
#include "time.h"
using namespace std;

void SubMain() {
  RecordStartTime();
  cout << "SubMain: " << g_start_time;
}
