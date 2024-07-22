// List to hold pending orders
let pendingOrders = [];

// Function to add a new pastry order
function addPastryOrder(pastryVariety, quantity) {
    // Create a new order object
    const newOrder = {
        pastryVariety: pastryVariety,
        quantity: quantity
    };

    // Append the new order to the list of pending orders
    pendingOrders.push(newOrder);
}

// Example usage
addPastryOrder("Croissant", 5);
addPastryOrder("Muffin", 10);

// Display pending orders
console.log("Pending Orders:");
pendingOrders.forEach(order => {
    console.log(`Pastry Variety: ${order.pastryVariety}, Quantity: ${order.quantity}`);
});
