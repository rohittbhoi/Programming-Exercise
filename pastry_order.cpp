#include <iostream>
#include <string>
#include <vector>

// Class to represent a pastry order
class PastryOrder {
private:
    std::string pastryVariety;
    int quantity;
    std::string deliveryTimeSlot;

public:
    // Constructor to initialize the attributes
    PastryOrder(std::string variety, int qty, std::string timeSlot)
        : pastryVariety(variety), quantity(qty), deliveryTimeSlot(timeSlot) {}

    // Getters
    std::string getPastryVariety() const { return pastryVariety; }
    int getQuantity() const { return quantity; }
    std::string getDeliveryTimeSlot() const { return deliveryTimeSlot; }

    // Method to display order details
    void displayOrder() const {
        std::cout << "Pastry Variety: " << pastryVariety << "\n"
                  << "Quantity: " << quantity << "\n"
                  << "Delivery Time Slot: " << deliveryTimeSlot << "\n";
    }
};

int main() {
    // Example usage
    PastryOrder order1("Croissant", 5, "09:00 - 10:00 AM");
    order1.displayOrder();

    return 0;
}
