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
    void displayFishInfo() const {
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

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int dateDay, int dateMonth, int dateYear) {
        day = dateDay;
        month = dateMonth;
        year = dateYear;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setDay(int dateDay) {
        day = dateDay;
    }

    void setMonth(int dateMonth) {
        month = dateMonth;
    }

    void setYear(int dateYear) {
        year = dateYear;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year;
    }
};

class FishShop
{
private:
    static const int maxCategories = 4;
    static const int maxFishes = 40;

    int id;
    string name;
    string address;
    string owner;
    Date startdate;
    Category categories[maxCategories];
    Fish fishes[maxFishes];
    int categoryCount;
    int fishCount;

public:
    FishShop() {
        id = 0;
        name = "";
        address = "";
        owner = "";
        startdate = Date();
        categoryCount = 0;
        fishCount = 0;
    }

    FishShop(int shopId, string shopName, string shopAddress,
             string shopOwner, Date shopStartDate) {
        id = shopId;
        name = shopName;
        address = shopAddress;
        owner = shopOwner;
        startdate = shopStartDate;
        categoryCount = 0;
        fishCount = 0;
    }

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string getOwner() const {
        return owner;
    }

    Date getStartDate() const {
        return startdate;
    }

    int getCategoryCount() const {
        return categoryCount;
    }

    int getFishCount() const {
        return fishCount;
    }

    const Category* getCategories() const {
        return categories;
    }

    const Fish* getFishes() const {
        return fishes;
    }

    void setId(int shopId) {
        id = shopId;
    }

    void setName(string shopName) {
        name = shopName;
    }

    void setAddress(string shopAddress) {
        address = shopAddress;
    }

    void setOwner(string shopOwner) {
        owner = shopOwner;
    }

    void setStartDate(Date shopStartDate) {
        startdate = shopStartDate;
    }

    void setCategories(const Category categoryList[], int count) {
        categoryCount = count < maxCategories ? count : maxCategories;
        for (int i = 0; i < categoryCount; ++i) {
            categories[i] = categoryList[i];
        }
    }

    void setFishes(const Fish fishList[], int count) {
        fishCount = count < maxFishes ? count : maxFishes;
        for (int i = 0; i < fishCount; ++i) {
            fishes[i] = fishList[i];
        }
    }

    void displayCategories() const {
        cout << "\nCategories:\n";
        for (int i = 0; i < categoryCount; ++i) {
            categories[i].displayCategoryInfo();
            cout << endl;
        }
    }

    void displayFishes() const {
        cout << "\nFish:\n";
        for (int i = 0; i < fishCount; ++i) {
            fishes[i].displayFishInfo();
            cout << endl;
        }
    }

    void displayShopInfo() const {
        cout << "\nFish shop information:\n";
        cout << "Shop ID: " << id << endl;
        cout << "Shop Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Owner: " << owner << endl;
        cout << "Start Date: ";
        startdate.displayDate();
        cout << endl;
        displayCategories();
        displayFishes();
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
        Category(3, "Cichlid", "Freshwater fish with distinctive behavior."),
        Category(4, "Betta Fish", "Small fish known for colorful fins.")
    };

    Fish fishList[] = {
        Fish(1, "Common Goldfish", "Gold", "Hardy freshwater fish", 1),
        Fish(2, "Comet Goldfish", "Orange", "Long flowing tail", 1),
        Fish(3, "Shubunkin", "Blue", "Colorful spotted scales", 1),
        Fish(4, "Fantail Goldfish", "Red", "Double tail fin", 1),
        Fish(5, "Oranda", "Gold", "Rounded head growth", 1),
        Fish(6, "Pearlscale", "White", "Pearl-like scales", 1),
        Fish(7, "Lionhead", "Orange", "Distinctive head growth", 1),
        Fish(8, "Ryukin", "Red", "High back profile", 1),
        Fish(9, "Black Moor", "Black", "Telescope eyes", 1),
        Fish(10, "Celestial Eye", "Gold", "Upturned eyes", 1),
        Fish(11, "Neon Tetra", "Blue", "Bright horizontal stripe", 2),
        Fish(12, "Guppy", "Yellow", "Small and active", 2),
        Fish(13, "Angelfish", "Silver", "Tall dorsal fin", 2),
        Fish(14, "Molly", "Black", "Peaceful community fish", 2),
        Fish(15, "Platy", "Orange", "Friendly livebearer", 2),
        Fish(16, "Swordtail", "Green", "Sword-shaped tail", 2),
        Fish(17, "Koi", "White", "Colorful ornamental carp", 2),
        Fish(18, "Rainbowfish", "Rainbow", "Shimmering body", 2),
        Fish(19, "Pearl Gourami", "Silver", "Pearl-like spots", 2),
        Fish(20, "Discus", "Red", "Round-shaped body", 2),
        Fish(21, "Oscar", "Black", "Intelligent cichlid", 3),
        Fish(22, "Flowerhorn", "Red", "Distinctive head hump", 3),
        Fish(23, "Jack Dempsey", "Blue", "Blue facial markings", 3),
        Fish(24, "Convict Cichlid", "Gray", "Dark vertical stripes", 3),
        Fish(25, "Green Terror", "Green", "Bright fin edges", 3),
        Fish(26, "Electric Blue Acara", "Blue", "Electric blue color", 3),
        Fish(27, "Firemouth", "Red", "Red throat coloring", 3),
        Fish(28, "Peacock Cichlid", "Yellow", "Bright yellow body", 3),
        Fish(29, "Texas Cichlid", "Gray", "Spotted body pattern", 3),
        Fish(30, "African Cichlid", "Orange", "Active freshwater fish", 3),
        Fish(31, "Betta", "Blue", "Long flowing fins", 4),
        Fish(32, "Crowntail Betta", "Red", "Crown-shaped tail", 4),
        Fish(33, "Halfmoon Betta", "Purple", "Wide half-moon tail", 4),
        Fish(34, "Plakat Betta", "Black", "Short strong fins", 4),
        Fish(35, "Veiltail Betta", "Yellow", "Long veil-like tail", 4),
        Fish(36, "Doubletail Betta", "White", "Split caudal fin", 4),
        Fish(37, "Dumbo Betta", "Blue", "Large pectoral fins", 4),
        Fish(38, "Rosetail Betta", "Red", "Many branched rays", 4),
        Fish(39, "Koi Betta", "Orange", "Koi-like pattern", 4),
        Fish(40, "Dragon Betta", "Silver", "Metallic scales", 4)
    };

    const int categoryCount = sizeof(categories) / sizeof(categories[0]);
    const int fishCount = sizeof(fishList) / sizeof(fishList[0]);

    FishShop shop(
        1,
        "Ankara Ornamental Fish Shop",
        "123 Aquarium Street",
        "Ankara Messi",
        Date(9, 10, 2026)
    );
    shop.setCategories(categories, categoryCount);
    shop.setFishes(fishList, fishCount);

    shop.displayShopInfo();
    displayFishGroupedByColor(fishList, fishCount);

    return 0;
}
