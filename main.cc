#include <iostream>
using namespace std;

#include "time.h"
#include "sub_main.h"

int main() {
  RecordStartTime();
  cout << "main: " << g_start_time << endl;
  SubMain();
}
