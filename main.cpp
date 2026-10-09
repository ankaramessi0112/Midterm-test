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
    int categoryId;

public:
    // Default Constructor
    Fish() {
        id = 0;
        name = "";
        color = "";
        characteristics = "";
        categoryId = 0;
    }

    // ID Constructor
    Fish(int fishId) {
        id = fishId;
        name = "";
        color = "";
        characteristics = "";
        categoryId = 0;
    }
    // ID and Name Constructor
    Fish(int fishId, string fishName) {
        id = fishId;
        name = fishName;
        color = "";
        characteristics = "";
        categoryId = 0;
    }
    // ID, Name, and Color Constructor
    Fish(int fishId, string fishName, string fishColor) {
        id = fishId;
        name = fishName;
        color = fishColor;
        characteristics = "";
        categoryId = 0;
    }
    // ID, Name, Color, and Characteristics Constructor
    Fish(int fishId, string fishName, string fishColor, string fishCharacteristics) {
        id = fishId;
        name = fishName;
        color = fishColor;
        characteristics = fishCharacteristics;
        categoryId = 0;
    }

    Fish(int fishId, string fishName, string fishColor,
         string fishCharacteristics, int fishCategoryId) {
        id = fishId;
        name = fishName;
        color = fishColor;
        characteristics = fishCharacteristics;
        categoryId = fishCategoryId;
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

    int getCategoryId() const {
        return categoryId;
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
    void setCategoryId(int fishCategoryId) {
        categoryId = fishCategoryId;
    }

    // Display
    void displayFishInfo() {
        cout << "Fish ID: " << id << endl;
        cout << "Fish Name: " << name << endl;
        cout << "Fish Color: " << color << endl;
        cout << "Fish Characteristics: " << characteristics << endl;
        cout << "Category ID: " << categoryId << endl;
    }


};

class Category
{
private:
    int categoryId;
    string categoryName;
    string description;

public:
    Category() {
        categoryId = 0;
        categoryName = "";
        description = "";
    }

    Category(int id, string name, string categoryDescription) {
        categoryId = id;
        categoryName = name;
        description = categoryDescription;
    }

    int getCategoryId() const {
        return categoryId;
    }

    string getCategoryName() const {
        return categoryName;
    }

    string getDescription() const {
        return description;
    }

    void setCategoryId(int id) {
        categoryId = id;
    }

    void setCategoryName(string name) {
        categoryName = name;
    }

    void setDescription(string categoryDescription) {
        description = categoryDescription;
    }

    void displayCategoryInfo() const {
        cout << "Category ID: " << categoryId << endl;
        cout << "Category Name: " << categoryName << endl;
        cout << "Description: " << description << endl;
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
    Category categories[] = {
        Category(1, "Goldfish", "Common ornamental freshwater fish."),
        Category(2, "Tropical Fish", "Colorful fish from tropical waters."),
        Category(3, "Cichlid", "Freshwater fish with distinctive behavior.")
    };
    const int categoryCount = sizeof(categories) / sizeof(categories[0]);

    // Create Fish obj
    Fish f1;
    Fish f2(1);
    Fish f3(2, "Ca Vang");
    Fish f4(3, "Ca ro", "Green");
    Fish f5(4, "Ca hoi", "Red", "Friendly");

    // Assign each fish to a category.
    f1.setCategoryId(1);
    f2.setCategoryId(1);
    f3.setCategoryId(2);
    f4.setCategoryId(2);
    f5.setCategoryId(3);

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
    cout << "Fish category ID: " << f5.getCategoryId() << endl;

    f5.displayFishInfo();

    // Add ornamental fish.
    Fish fishList[] = {
        f1,
        f2,
        f3,
        f4,
        f5,
        Fish(5, "Betta", "Blue", "Long flowing fins", 2),
        Fish(6, "Guppy", "Yellow", "Small and active", 2),
        Fish(7, "Angelfish", "Silver", "Tall dorsal and anal fins", 2),
        Fish(8, "Koi", "Orange", "Colorful ornamental carp", 1),
        Fish(9, "Goldfish", "Gold", "Hardy freshwater fish", 1),
        Fish(10, "Discus", "Red", "Round-shaped body", 3),
        Fish(11, "Flowerhorn", "Red", "Distinctive head hump", 3),
        Fish(12, "Neon Tetra", "Blue", "Bright horizontal stripe", 2),
        Fish(13, "Molly", "Black", "Peaceful community fish", 2),
        Fish(14, "Oscar", "Black", "Intelligent cichlid", 3)
    };

    const int fishCount = sizeof(fishList) / sizeof(fishList[0]);
    displayFishGroupedByColor(fishList, fishCount);

    cout << "\nAll categories:\n";
    for (int i = 0; i < categoryCount; ++i) {
        categories[i].displayCategoryInfo();
        cout << endl;
    }

    const int selectedCategoryId = 2;
    cout << "Fish in selected category (ID: "
         << selectedCategoryId << "):\n";
    for (int i = 0; i < categoryCount; ++i) {
        if (categories[i].getCategoryId() == selectedCategoryId) {
            cout << "Category: " << categories[i].getCategoryName() << endl;
            break;
        }
    }

    bool foundFish = false;
    for (int i = 0; i < fishCount; ++i) {
        if (fishList[i].getCategoryId() == selectedCategoryId) {
            cout << "- " << fishList[i].getName()
                 << " (ID: " << fishList[i].getId() << ")\n";
            foundFish = true;
        }
    }

    if (!foundFish) {
        cout << "No fish belong to this category.\n";
    }

    return 0;
}
