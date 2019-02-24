#include <iostream>

#include "Board.h"

#include "Option_0.h"
#include "Option_1.h"
#include "Option_2.h"
#include "Option_3.h"
#include "Option_4.h"
#include "Option_5.h"
#include "Option_6.h"

using namespace std;

Board *board[2];

Effect *effect;
Effect *effect_temp;

int main() {

    board[0] = new Board();
    board[1] = new Board();

    bool isAssigned = false;

    int x, y, dx, dy, e, d, lastD = -1;

    while ((cin >> x) && (cin >> y) && (cin >> dx) && (cin >> dy) && (cin >> e) && (cin >> d)) {
        if ((x >= 0 && x <= 15)
            && (y >= 0 && y <= 15)
            && (dx >= x && dx <= 15)
            && (dy >= y && dy <= 15)
            && (e >= 0 && e <= 6)
            && (d >= 0 && d <= 1)) {

            switch (e) {
                case 0:
                    effect = new Option_0(x, y, dx, dy, board[d]);
                    break;
                case 1:
                    effect = new Option_1(x, y, dx, dy, board[d]);
                    break;
                case 2:
                    effect = new Option_2(x, y, dx, dy, board[d]);
                    break;
                case 3:
                    effect = new Option_3(x, y, dx, dy, board[d]);
                    break;
                case 4:
                    effect = new Option_4(x, y, dx, dy, board[d]);
                    break;
                case 5:
                    if (!isAssigned) {
                        effect_temp = new Option_5(x, y, dx, dy, board[d], board[abs(d-1)]);
                        effect = effect_temp;
                        isAssigned = true;
                    } else {
                        effect = effect_temp;
                        isAssigned = false;
                    }
                    break;
                case 6:
                    effect = new Option_6(x, y, dx, dy, board[d], board[abs(d-1)]);
                    break;
            }
            lastD = d;
            effect->apply();
        }
    }

    if (lastD == 1 || lastD == 0) {
        board[lastD]->display();
    }

    return 0;
}