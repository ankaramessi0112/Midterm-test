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
    void setColor(string fishColor) {
        color = fishColor;
    }
    void setCharacteristics(string fishCharacteristics) {
        characteristics = fishCharacteristics;
    }

    // Display
    void displayFishInfo() {
        cout << "Fish ID: " << id << endl;
        cout << "Fish Name: " << name << endl;
        cout << "Fish Color: " << color << endl;
        cout << "Fish Characteristics: " << characteristics << endl;
    }


};

int main()
{
    // Create Fish obj
    Fish f1;
    Fish f2(1);
    Fish f3(2, "Ca Vang");
    Fish f4(3, "Ca ro", "Green");
    Fish f5(4, "Ca hoi", "Red", "Friendly");

    f1.displayFishInfo();
    f2.displayFishInfo();
    f3.displayFishInfo();
    f4.displayFishInfo();
    f5.displayFishInfo();
    
    // Setters
    f5.setName("Ca khong lo");
    f5.setColor("Rainbow");
    f5.setCharacteristics("Cute");
    f5.displayFishInfo();

    // Getters
    cout << "Fish ID: " << f5.getId() << endl;
    cout << "Fish name: " << f5.getName() << endl;
    cout << "Fish color: " << f5.getColor() << endl;
    cout << "Fish chatacteristics: " << f5.getCharacteristics() << endl;

    f5.displayFishInfo();
    return 0;
}

