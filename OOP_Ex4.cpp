#include <iostream>
using namespace std;

class Car {
protected:
    bool turnSwitch = false;
    bool electricitySystem = true;
    bool isBrakeOk = true;
    bool enoughFuel = true;
    bool securityStatus = true;
    bool temperatureOk = true;
    bool gearBoxNotNeutral = false;
    bool pressGasPedal = false;

public:
    virtual bool Start() {
        if (turnSwitch && electricitySystem && isBrakeOk && enoughFuel && securityStatus && temperatureOk) {
            cout << "Car Started Successfully!" << endl;
            return true;
        }
        cout << "Car Failed to Start." << endl;
        return false;
    }

    virtual bool Move() {
        if (gearBoxNotNeutral && pressGasPedal) {
            cout << "Car is Moving!" << endl;
            return true;
        }
        cout << "Car Cannot Move." << endl;
        return false;
    }

    void SetTurnSwitch(bool val) { turnSwitch = val; }
    void SetGasPedal(bool val) { pressGasPedal = val; }
    void SetGearBox(bool val) { gearBoxNotNeutral = val; }
};

class Prid : public Car {
private:
    bool doWeArriveAlive = false; // Usually not
    bool stillAlive = true;

public:
    bool Start() override {
        if (Car::Start() && doWeArriveAlive) {
            cout << "Prid Started... Just pray now!" << endl;
            return true;
        }
        cout << "Prid won't start properly. God help us." << endl;
        return false;
    }

    bool Move() override {
        if (stillAlive) {
            cout << "Prid is moving... somehow." << endl;
            return true;
        }
        cout << "Prid cannot move. Possibly exploded." << endl;
        return false;
    }
};

class Toyota : public Car {
private:
    bool pressBrake = true;
    bool essentialElectricity = true;
    bool fuelQuality = true;
    bool biometricSecurity = true;
    bool gearInPark = false;
    bool turboEnabled = true;
    bool wheelPressureOk = true;
    bool engineTemperatureOk = true;

public:
    bool Start() override {
        if (Car::Start() && pressBrake && essentialElectricity && fuelQuality && biometricSecurity && !gearInPark) {
            cout << "Toyota Started Smoothly." << endl;
            return true;
        }
        cout << "Toyota failed to start. Check systems." << endl;
        return false;
    }

    bool Move() override {
        if (turboEnabled && wheelPressureOk && engineTemperatureOk) {
            cout << "Toyota is gliding smoothly!" << endl;
            return true;
        }
        cout << "Toyota cannot move. Check turbo, wheels, and engine." << endl;
        return false;
    }
};

int main() {
    cout << "=== Testing Car ===" << endl;
    Car c;
    c.SetTurnSwitch(true);
    c.SetGearBox(true);
    c.SetGasPedal(true);
    c.Start();
    c.Move();

    cout << "\n=== Testing Prid ===" << endl;
    Prid p;
    p.SetTurnSwitch(true);
    p.SetGearBox(true);
    p.SetGasPedal(true);
    p.Start();
    p.Move();

    cout << "\n=== Testing Toyota ===" << endl;
    Toyota t;
    t.SetTurnSwitch(true);
    t.SetGearBox(true);
    t.SetGasPedal(true);
    t.Start();
    t.Move();

    return 0;
}