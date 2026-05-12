# 🤖 6-DOF Pick and Place Robotic Arm

Arduino-based 6-DOF robotic arm with potentiometer-controlled servo movement for pick-and-place operations.

The project uses MG995 servo motors and custom 3D-printed components to achieve coordinated multi-axis movement and object handling.

---

## ✨ Features

- 6-DOF robotic arm movement
- Potentiometer-based manual control
- Dual-servo synchronized shoulder mechanism
- Multi-axis coordinated movement
- Gripper-based object handling
- Real-time servo control using Arduino
- Custom 3D-printed arm structure

---

## 📸 Working Model

<img src="https://github.com/user-attachments/assets/6956b3cd-789c-4eb1-b902-c9192add7f54" width="400"/>

---

## 🔌 Circuit Setup

<img src="https://github.com/user-attachments/assets/fb0da42d-008f-4553-bf55-70889bfe0377" width="700"/>

---

## ⚙️ How It Works

- Potentiometers provide analog input values to the Arduino.
- Arduino converts these readings into servo angles using `map()`.
- Servo motors rotate according to the mapped angles.
- The first two servos operate in mirrored motion for synchronized shoulder movement.
- Remaining servos control arm joints and gripper movement.

---

## 🔄 Synchronized Shoulder Mechanism

The first arm section uses two servo motors (Servo 1 and Servo 2) working together to support and stabilize the shoulder joint.

Since both servos are mounted facing opposite directions, they must rotate in mirrored motion to move the arm correctly.

- Servo 1 rotates clockwise
- Servo 2 rotates counter-clockwise

If Servo 1 rotates to angle θ, Servo 2 rotates to:

```text
180 - θ
```

This mirrored movement ensures:
- Smooth shoulder motion
- Better stability
- Balanced load distribution
- Coordinated arm movement

### Arduino Logic

```cpp
int angle1 = map(analogValue1, 0, 1023, 0, 90);
int angle2 = map(analogValue1, 0, 1023, 90, 0);
```

---

## 🛠️ Components Used

- Arduino Uno
- 6 × MG995 Servo Motors
- Potentiometers
- Breadboard
- Jumper Wires
- LiPo Battery
- Buck Converter
- 3D Printed Components

---

## 🔌 Servo Connections

| Servo | Arduino Pin | Function |
|------|------|------|
| Servo 1 | 8  | Arm Joint 1 |
| Servo 2 | 9  | Arm Joint 1 (Mirrored) |
| Servo 3 | 10 | Arm Joint 2 |
| Servo 4 | 11 | Arm Joint 3 |
| Servo 5 | 12 | Arm Joint 4 |
| Servo 6 | 13 | Gripper |

---

## 💻 Arduino Code

The complete Arduino control logic is available in:

```bash
robotic_arm.ino
```

---


## 👩‍💻 Developer

[Swetha-Arul](https://github.com/Swetha-Arul)
