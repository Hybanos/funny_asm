#include <iostream>
#include <chrono>

using std::chrono::high_resolution_clock;
using std::chrono::time_point;

extern "C" void ADD_NO_PUSH(void);
extern "C" void ADD_PUSH(void);

int main() {

    time_point<high_resolution_clock> t1, t2, t3, t4;
    size_t no_push, push;
    
    t1 = high_resolution_clock::now();
    for (int i = 0; i < 53123123; i++) {
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
        ADD_PUSH();
    }
    t2 = high_resolution_clock::now();
    push = (t2 - t1).count();

    t3 = high_resolution_clock::now();
    for (int i = 0; i < 53123123; i++) {
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
        ADD_NO_PUSH();
    }
    t4 = high_resolution_clock::now();
    no_push = (t4 - t3).count();

    std::cout << "With push:\t" << push << "ns" << std::endl;
    std::cout << "Without push:\t" << no_push << "ns" << std::endl;
}