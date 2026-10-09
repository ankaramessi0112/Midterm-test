#include <iostream>
#include <string>

using namespace std;

class Fish
{
private:
    int id;
    string name;
    string color;
    string characteristics;

public:
    // Default Constructor
    Fish() {
        id = 0;
        name = "";
        color = "";
        characteristics = "";
    }

    // ID Constructor
    Fish(int fishId) {
        id = fishId;
        name = "";
        color = "";
        characteristics = "";
    }
    // ID and Name Constructor
    Fish(int fishId, string fishName) {
        id = fishId;
        name = fishName;
        color = "";
        characteristics = "";
    }
    // ID, Name, and Color Constructor
    Fish(int fishId, string fishName, string fishColor) {
        id = fishId;
        name = fishName;
        color = fishColor;
        characteristics = "";
    }
    // ID, Name, Color, and Characteristics Constructor
    Fish(int fishId, string fishName, string fishColor, string fishCharacteristics) {
        id = fishId;
        name = fishName;
        color = fishColor;
        characteristics = fishCharacteristics;
    }

    // Getter
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }

    string getCharacteristics() {
        return characteristics;
    }

    // Setter
    void setId(int fishId) {
        id = fishId;
    }
    void setName(string fishName) { 
        name = fishName;
    }
    void setCharacteristics(string fishCharacteristics) {
        characteristics = fishCharacteristics;
    }

    // Display
    void displayFishInfo() {
        cout << "Fish ID: " << id << endl;
        cout << "Fish Name: " << name << endl;
        cout << "Fish Characteristics: " << characteristics << endl;
    }


};

int main()
{
    Fish f;
    f.displayFishInfo();
    f

    return 0;
}

