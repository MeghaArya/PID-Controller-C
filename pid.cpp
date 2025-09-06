#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Target angle we want to reach (degrees)
    double target = 90.0;
    // Current angle (starts at 0)
    double angle = 0.0;
    // Error terms
    double error, prev_error = 0, integral = 0;

    // PID gains (tweakable)
    double Kp = 0.5;
    double Ki = 0.05;
    double Kd = 0.1;

    cout << fixed << setprecision(2);

    // Run 100 iterations of the control loop
    for (int step = 0; step < 100; step++) {
        error = target - angle;
        integral += error;
        double derivative = error - prev_error;

        // PID formula
        double control = Kp * error + Ki * integral + Kd * derivative;

        // Simulate system update
        angle += control * 0.1;
        prev_error = error;

        // Print results
        cout << "Step " << setw(3) << step
             << " | Angle: " << setw(6) << angle
             << " | Error: " << setw(6) << error << endl;
    }

    return 0;
}
