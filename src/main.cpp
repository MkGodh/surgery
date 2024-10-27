#include "surge.h"


int main() {
    coordinates start, end;
    std::string command;
    OperationStage stage = SCALPEL;

    while (stage != COMPLETE) {
        std::cout << "Enter comman (scalpel, hemostat, tweezers, suture): " << std::endl;
        std::cin >> command;
        if(command == "scalpel") {
            std::cout << "Enter a startin point of cut: " << std::endl;
            std::cin >> start.x >> start.y;
            std::cout << "Enter ending point of cut: " << std::endl;
            std::cin >> end.x >> end.y;
            scalpel(start, end);
            stage = HEMOSTAT;
        }
        else if(command == "hemostat" && stage == HEMOSTAT) {
            coordinates point;
            std::cout << "Enter point for hemostat (x y): " << std::endl;
            std::cin >> point.x >> point.y;
            hemostat(point);
            stage = TWEEZERS;
        }
        else if(command == "tweezers" && stage == TWEEZERS) {
            coordinates point;
            std::cout << "Enter point for tweezers (x y): ";
            std::cin >> point.x >> point.y;
            tweezers(point);
            stage = SUTURE;
        }
        else if(command == "suture" && stage == SUTURE) {
            coordinates sutureStart;
            coordinates sutureEnd;
            std::cout << "Enter startin point for suture(x y): " << std::endl;
            std::cin >> sutureStart.x >> sutureStart.y;
            std::cout << "Enter startin point for suture(x y): " << std::endl;
            std::cin >> sutureEnd.x >> sutureEnd.y;

            suture(sutureStart, sutureEnd);

            if(areCoordinatesEqual(start, sutureStart) && areCoordinatesEqual(end, sutureEnd)){
            std::cout << "Operation finished successfully" << std::endl;
            stage = COMPLETE;
            }else {
            std::cout << "Error: Suture point do not match the initial cut points. Operation cannot finish" << std::endl;
            }
        }else {
            std::cout << "Invalid command or incorrect order. Please try again." << std::endl;
        }
    }

return 0;
}
