#include <iostream>

using namespace std;

double calculateWeight(double quality, double service, double qualityWeight, double serviceWeight) {
    return quality * qualityWeight + service * serviceWeight;
}

int main() {
    double qualityWeight = 0.83;
    double serviceWeight = 0.17;

    double qualityA, serviceA, qualityB, serviceB, qualityC, serviceC;

    cout << "Enter the quality of food for Restaurant A: ";
    cin >> qualityA;
    cout << "Enter the service rating for Restaurant A: ";
    cin >> serviceA;

    cout << "Enter the quality of food for Restaurant B: ";
    cin >> qualityB;
    cout << "Enter the service rating for Restaurant B: ";
    cin >> serviceB;

    cout << "Enter the quality of food for Restaurant C: ";
    cin >> qualityC;
    cout << "Enter the service rating for Restaurant C: ";
    cin >> serviceC;

    double weightA = calculateWeight(qualityA, serviceA, qualityWeight, serviceWeight);
    double weightB = calculateWeight(qualityB, serviceB, qualityWeight, serviceWeight);
    double weightC = calculateWeight(qualityC, serviceC, qualityWeight, serviceWeight);

    cout << "Weight for Restaurant A: " << weightA << endl;
    cout << "Weight for Restaurant B: " << weightB << endl;
    cout << "Weight for Restaurant C: " << weightC << endl;

    if (weightA > weightB && weightA > weightC) {
        cout << "Restaurant A is the optimal choice" << endl;
    }
    else if (weightB > weightA && weightB > weightC) {
        cout << "Restaurant B is the optimal choice" << endl;
    }
    else {
        cout << "Restaurant C is the optimal choice" << endl;
    }

    return 0;
}
