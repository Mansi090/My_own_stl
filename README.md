# 🚀 Custom STL Containers – by Mansi

Welcome to my deep dive into the internals of the C++ Standard Template Library! This project is a custom-built version of commonly used STL containers — developed entirely from scratch using core C++ concepts, OOP, and Red-Black Tree logic.

---

## 📦 What's Inside

This repository contains manual implementations of:

- **🧮 `vector.h`** – Dynamic array with manual memory management and iterator support  
- **🌳 `map.h`** – Key-value associative container built on a fully functional Red-Black Tree  
- **🧱 `rbtree.h`** – Low-level Red-Black Tree with insert, delete, rotate, and balance operations  
- **📚 `set.h`** – Unique element container implemented via Red-Black Tree  
- **📦 `stack.h`** – Stack container built using a singly linked list structure  
- **👫 `pair.h`** – Lightweight template struct for pairing two values (mimics `std::pair`)  

---

## ✨ Highlights & Innovations

- 🔧 **No STL Used** – Built from scratch using only core C++  
- 🧠 **Manual Memory Management** – Especially in `vector`  
- 🌈 **Templates for Reusability** – Generic programming enabled across all containers  
- 🏗️ **Real OOP** – Constructors, destructors, operator overloading, and inheritance used in practice  
- 🎯 **Red-Black Tree Logic** – Includes self-balancing insertions and deletions  
- 📘 **Commented Code** – Clean and readable with inline explanations for every logic block  
- 🎓 **Learning-Focused** – Designed not just to replicate STL but to _teach_ it  

---

## 💡 Why This Project?

While STL is powerful, it often hides the complexities from learners. This project peels back the layers and helps you understand:

- How memory is allocated and resized
- Why rebalancing is necessary in tree structures
- How iterators and containers interact
- The role of constructors and destructors in memory safety

---

## 📂 Explore the Files

| File | Description |
|------|-------------|
| [`vector.h`](./vector.h) | Custom dynamic array class with resizing and raw pointer logic |
| [`map.h`](./map.h) | Key-value container built with `rbtree` as backend |
| [`rbtree.h`](./rbtree.h) | Balanced tree implementation with left/right rotations |
| [`set.h`](./set.h) | Container for unique elements using Red-Black Tree |
| [`stack.h`](./stack.h) | Stack implemented using linked list |
| [`pair.h`](./pair.h) | Custom templated pair structure |

---

## 🔽 Quick Start

To use the custom STL in your own C++ project:

```cpp
#include "vector.h"
#include "map.h"
#include "rbtree.h"
#include "set.h"
#include "stack.h"
#include "pair.h"
