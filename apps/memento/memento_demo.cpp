//Reference: https://blog.csdn.net/wuzhekai1985/article/details/6672906
#include <iostream>
#include "caretaker.h"
#include "gamerole.h"
int main(int argc, char* argv[]) {
    gof::CareTaker caretaker;
    gof::GameRole gamerole;
    gamerole.showState();
    caretaker.save(gamerole.saveState());
	// be attacked twice
    gamerole.attack();
	gamerole.attack();
    gamerole.showState();
    gamerole.load(caretaker.load(0));
    gamerole.showState();
    return 0;
}