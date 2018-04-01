#include <iostream>
using namespace std;

int main(void){
  for (int i = 0; i < 2; i++) {
    switch (i%2) {
      case 1: std::cout << "Hello" << '\n';
              break;
      case 0: std::cout << "World" << '\n';
    }
}
}
