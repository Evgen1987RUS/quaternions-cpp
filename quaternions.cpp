#include <iostream>
using namespace std;

class Quaternion {
private:
    double q_0, q_1, q_2, q_3;

public:
    Quaternion(double, double, double, double);

    double get_re_part() { // gets scalar (or real) part of a quaternion
        cout << "The real part is: " << q_0 << "\n";
        return q_0;        
    }

    double * get_im_part() { // gets vector (or imaginary) part of a quaternion
        double im_q[3];
        im_q[0] = q_1;
        im_q[1] = q_2;
        im_q[2] = q_3;
        cout << "The imaginary part is: " << q_1 << ", " << q_2 << ", " << q_3 << "\n";
        return im_q; 
    }


};

Quaternion::Quaternion(double _q_0, double _q_1, double _q_2, double _q_3) {
    q_0 = _q_0;
    q_1 = _q_1;
    q_2 = _q_2;
    q_3 = _q_3;
}

int main() {
    Quaternion quat(1, 1, 1, 1);
}