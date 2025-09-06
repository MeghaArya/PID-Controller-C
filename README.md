# PID Control System ⚙️  
A simple **Proportional-Integral-Derivative (PID)** controller implemented in C++ to stabilize a simulated robot angle. Demonstrates real-time control feedback, a foundational concept in robotics and aerospace systems.  

## ✨ Features  
- Implements a PID loop in C++.  
- Prints control step, angle, and error values as the system stabilizes.  
- Easy to extend for different robotics or aerospace control scenarios.  

## 📂 Project Structure  
```

pid-controller/
├── pid.cpp
└── README.md

````

## 🚀 Getting Started  
1. Clone the repo:  
   ```bash
   git clone https://github.com/YOUR_USERNAME/pid-controller.git
   cd pid-controller
````

2. Compile and run:

   ```bash
   g++ pid.cpp -o pid
   ./pid
   ```

## 📊 Example Output

```
Step   0 | Angle:   4.50 | Error:  90.00
Step   1 | Angle:   8.55 | Error:  85.50
...
Step  99 | Angle:  89.97 | Error:   0.03
```

## 🌌 Relevance

PID controllers are fundamental to **autonomous spacecraft navigation and docking** — from thruster control to precision positioning.
