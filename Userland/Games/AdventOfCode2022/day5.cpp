//
// Created by TrippHill on 12/16/2022.
//

#include "AK/Stack.h"
#include "AK/Vector.h"
class Day5 {
public:
void test() {

}
private:

    struct Crate {
        char letter;
    };
    struct CrateStack {
        AK::Vector<AK::Stack<Crate,100>> stacks{};
    };

};
