#include <iostream>
#include <string>

using namespace std;

class Fish
{
private:
    int id;
    string name;
    string characteristics;

public:
    // Default Constructor
    Fish() {
        id = 0;
        name = "";
        characteristics = "";
    }

    // ID Constructor
    Fish(int fishId) {
        id = fishId;
        name = "";
        characteristics = "";
    }
    // ID and Name Constructor
    Fish(int fishId, string fishName) {
        id = fishId;
        name = fishName;
        characteristics = "";
    }
    // ID, Name, and Characteristics Constructor
    Fish(int fishId, string fishName, string fishCharacteristics) {
        id = fishId;
        name = fishName;
        characteristics = fishCharacteristics;
    }

    // Getter
    int getId() {
        return id;
    }

    string getName() {
        return name;
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
};

int main()
{


    return 0;
}

