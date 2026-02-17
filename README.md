# 🎫 Real World Example of Circular Queue Simulation

An interactive web-based visualization of the Circular Queue data structure with a real-world restaurant waiting list scenario, accompanied by a complete C++ implementation.

## 📋 Overview

This project demonstrates the Circular Queue data structure through an intuitive, interactive web interface. It uses a restaurant waiting list as a real-world analogy to help understand how circular queues work in practice.

## ✨ Features

- **Interactive Visualization**: Add and remove customers in real-time
- **Visual Indicators**: 
  - Green highlight for Front pointer (next customer to be served)
  - Red highlight for Rear pointer (last customer added)
  - Index labels for each queue position
- **Real-time Statistics**: Track queue size, front index, rear index, and capacity
- **User-friendly Interface**: Clean, modern design with smooth animations
- **C++ Implementation**: Complete working code demonstrating the same logic
- **Responsive Design**: Works on desktop and mobile devices

## 🎯 Real-World Scenario

Imagine a restaurant with 5 waiting seats:
- Customers arrive and take seats (enqueue operation)
- When a table is ready, the first customer in line is served (dequeue operation)
- When all seats are full, new customers must wait
- The queue wraps around circularly, reusing empty positions efficiently

## 🚀 Getting Started

### Prerequisites

- A modern web browser (Chrome, Firefox, Safari, Edge)
- For C++ code: g++ compiler

### Running the Web Application

1. Clone this repository:
```bash
git clone https://github.com/yourusername/real-world-circular-queue-simulation.git
cd real-world-circular-queue-simulation
```

2. Open `circular-queue.html` in your web browser:
```bash
# On Windows
start circular-queue.html

# On macOS
open circular-queue.html

# On Linux
xdg-open circular-queue.html
```

### Running the C++ Implementation

1. Compile the C++ code:
```bash
g++ CircularQueue.cpp -o CircularQueue
```

2. Run the executable:
```bash
# On Windows
CircularQueue.exe

# On macOS/Linux
./CircularQueue
```

## 📁 Project Structure

```
real-world-circular-queue-simulation/
│
├── circular-queue.html    # Main HTML file with interactive simulation
├── styles.css             # External stylesheet for styling
├── CircularQueue.cpp      # C++ implementation with demonstration
├── .gitignore             # Git ignore file
└── README.md              # Project documentation
```

## 🎮 How to Use

1. **Add Customer**: Enter a customer name and click "Add Customer" to enqueue
2. **Serve Customer**: Click "Serve Customer" to dequeue the front customer
3. **Reset Queue**: Click "Reset Queue" to clear all customers and start fresh
4. **Watch the Visualization**: Observe how the front and rear pointers move circularly

## 🔧 Technical Details

### Circular Queue Operations

- **Enqueue**: Add element at rear position, increment rear circularly
- **Dequeue**: Remove element from front position, increment front circularly
- **isEmpty**: Check if size is 0
- **isFull**: Check if size equals capacity

### Key Formula

The circular increment is achieved using modulo operation:
```
next_position = (current_position + 1) % capacity
```

## 🎨 Technologies Used

- **HTML5**: Structure and content
- **CSS3**: Styling and animations
- **JavaScript**: Interactive functionality and queue logic
- **C++**: Backend implementation demonstration

## 📚 Learning Outcomes

This project helps understand:
- Circular Queue data structure implementation
- Difference between linear and circular queues
- Efficient memory utilization
- Front and rear pointer management
- Real-world applications of queues

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Report bugs
- Suggest new features
- Submit pull requests

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 👨‍💻 Author

Created as an educational project to demonstrate data structures and algorithms.

## 🙏 Acknowledgments

- Inspired by real-world queue management systems
- Built for educational purposes to help students understand circular queues

---

⭐ If you find this project helpful, please consider giving it a star!
