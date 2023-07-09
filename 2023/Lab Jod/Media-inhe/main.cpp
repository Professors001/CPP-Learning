#include <iostream>
#include "Media.h"
#include "Image.h"
using namespace std;

int main() {
  Media *media = new Image("image.jpg", 811200, 15, 10, 'x', 'r');
  cout << media->info() << endl;
  cout << "---------" << endl;  
  return 0;
}