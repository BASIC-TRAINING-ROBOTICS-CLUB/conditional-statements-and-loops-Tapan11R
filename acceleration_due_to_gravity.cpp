#include <iostream>
#include <cmath>
using namespace std;
class GravityCalculator {
private:
    const double G = 6.67e-11;  
    const double M = 6e24;    
    const double R = 6.4e6;     
public:
 
    double calculateGravityAtHeight(double height) {
        if (height < 0) {
            cerr << "Height is negative.\n";
            return 0;
        }
        double distanceFromCenter = R + height;
        return (G * M) / (distanceFromCenter * distanceFromCenter);
    }

 
    void calculateAndDisplay() {
        double height;

    
        cout << "Enter height from Earth's surface (meters): ";
        cin >> height;

        double gravity = calculateGravityAtHeight(height);

        if (gravity >0) {
            cout << "Acceleration due to gravity at height " 
                      << height << " meters = " 
                      << gravity << " m/s²\n";
        }
    }
};

int main() 
{
    GravityCalculator gc;
    
    gc.calculateAndDisplay();

    return 0;
}
