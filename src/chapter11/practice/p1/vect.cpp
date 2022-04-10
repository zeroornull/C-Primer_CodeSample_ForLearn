//
// Created by xxp on 2022/4/10.
//

#include "vect.h"
#include <cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR{

    const double Rad_to_deg = 45.0/atan(1.0);

    void Vector::set_mag(){
        mag = sqrt(x * x + y * y);
    }

}