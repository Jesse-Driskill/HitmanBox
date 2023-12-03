#include <iostream>
#include <Windows.h>

int main() {
    int code = MessageBoxA(0, "Click yes if you want to live...", "Hitman Box", MB_YESNO);
    if (code == IDYES) {
        //std::cout << "You clicked yes!";
        int code2 = MessageBoxA(0, "Congrats! You lived. Would you like one million dollars?", "Money Box", MB_YESNO);
        if (code2 == IDYES) {
            std::cout << "Too bad... you're not getting it...";
        }
        else if (code2 == IDNO) {
            std::cout << "Idiot, you should have taken the money...";
        }
    }
    else if (code == IDNO) {
        //std::cout << "You clicked no!";
        int code3 = MessageBoxA(0, "You are dead... revive yourself?","Revive Box", MB_YESNO);
        if (code3 == IDYES) {
            std::cout << "You have been resurrected!";
        }
        else if (code3 == IDNO) {
            std::cout << "You are still dead...";
        }

    }

    std::cin.get();
    return 0;

}