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
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getColor() const {
        return color;
    }

    string getCharacteristics() const {
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

void displayFishGroupedByColor(const Fish fishList[], int fishCount)
{
    string* colors = new string[fishCount];
    int colorCount = 0;

    for (int i = 0; i < fishCount; ++i) {
        string color = fishList[i].getColor();
        if (color.empty()) {
            color = "Color not specified";
        }

        bool colorAlreadyExists = false;
        for (int j = 0; j < colorCount; ++j) {
            if (colors[j] == color) {
                colorAlreadyExists = true;
                break;
            }
        }

        if (!colorAlreadyExists) {
            colors[colorCount] = color;
            ++colorCount;
        }
    }

    cout << "\nFish grouped by color:\n";
    for (int i = 0; i < colorCount; ++i) {
        cout << "\n" << colors[i] << ":\n";
        for (int j = 0; j < fishCount; ++j) {
            string fishColor = fishList[j].getColor();
            if (fishColor.empty()) {
                fishColor = "Color not specified";
            }

            if (fishColor == colors[i]) {
                cout << "- " << fishList[j].getName()
                     << " (ID: " << fishList[j].getId() << ")\n";
            }
        }
    }

    delete[] colors;
}

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
    cout << "Fish characteristics: " << f5.getCharacteristics() << endl;

    f5.displayFishInfo();

    // Add ornamental fish.
    Fish fishList[] = {
        f1,
        f2,
        f3,
        f4,
        f5,
        Fish(5, "Betta", "Blue", "Long flowing fins"),
        Fish(6, "Guppy", "Yellow", "Small and active"),
        Fish(7, "Angelfish", "Silver", "Tall dorsal and anal fins"),
        Fish(8, "Koi", "Orange", "Colorful ornamental carp"),
        Fish(9, "Goldfish", "Gold", "Hardy freshwater fish"),
        Fish(10, "Discus", "Red", "Round-shaped body"),
        Fish(11, "Flowerhorn", "Red", "Distinctive head hump"),
        Fish(12, "Neon Tetra", "Blue", "Bright horizontal stripe"),
        Fish(13, "Molly", "Black", "Peaceful community fish"),
        Fish(14, "Oscar", "Black", "Intelligent cichlid")
    };

    const int fishCount = sizeof(fishList) / sizeof(fishList[0]);
    displayFishGroupedByColor(fishList, fishCount);

    return 0;
}
