# 📺 YouTube Management System (C++ | OOP)

A **console-based YouTube Management System** built in **C++** using **Object-Oriented Programming (OOP)** concepts.
This project simulates real-world YouTube channels, subscriber management, video publishing, and specialization through inheritance.

---

## 🚀 Features

* Create YouTube channels
* Manage subscribers (subscribe / unsubscribe)
* Add and list video titles
* Display channel information
* Specialized **Gaming Channel** using inheritance

---

## 🧠 OOP Concepts Used

* **Classes & Objects**
* **Encapsulation**

  * Private data members
  * Public member functions
* **Inheritance**

  * `gamingchannel` derived from `youtube`
* **Access Specifiers**

  * `private`, `protected`, `public`
* **STL Containers**

  * `list<string>`
* **Constructors**
* **Real-world system modeling**

---

## 📁 Class Overview

### 🔹 `youtube` (Base Class)

Handles common YouTube channel functionality:

* Channel name
* Owner
* Subscriber count
* Video list

**Key Functions:**

* `subscribe(int count)`
* `unsubscribe()`
* `addtitle(string)`
* `getinfo()`

---

### 🔹 `gamingchannel` (Derived Class)

Extends the `youtube` class to represent a gaming-specific channel.

**Additional Functionality:**

* Custom `practice()` behavior related to gaming content
* Access to protected `owner` member

---

## 🖥 Example Output

```
shahzeb gaming is very dangerous he is always focused on his enemies and fight till end
Name of channel: shahzeb ke vlogs
Owner of channel: shahzeb
Subscribers count : 150
Videos published:
My First Vlog
Daily Routine
Travel to Islamabad
```

---

## 🛠 How to Compile & Run

Use **g++ compiler **:

```bash
g++ youtube_management.cpp -o youtube
./youtube
```

---

## 🎯 Learning Objective

This project is ideal for:

* Beginners learning **C++ OOP**
* Students practicing **inheritance & encapsulation**
* Understanding **real-world class design**
* Preparing for **programming interviews or exams**

---

## 🔮 Future Improvements

* Initialize subscriber count safely
* File handling for persistent data
* Virtual functions & polymorphism
* Menu-driven user interface
* Exception handlinG

---

## 👨‍💻 Author

**Shahzeb Alam**
C++ | Object-Oriented Programming | Software Fundamentals
