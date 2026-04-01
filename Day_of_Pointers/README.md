



<h1 align="center">📌 Mastering Pointers in C</h1>
<h3 align="center">🚀 Complete Notes 

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com/?lines=From+variables+to+Addresses;Mastering+Pointers;Deep+Dive+into+Memory+Logic&center=true&width=550&height=45">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c">
  <img src="https://img.shields.io/badge/Topic-Pointers-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Level-Beginner--to--Advanced-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Focus-Memory%20Concepts-purple?style=for-the-badge">
</p>

---

## 🧠 What is a Pointer?

> A pointer is a variable that stores the memory address of another variable.


int a = 10;<br
int *p = &a;<br>

| Symbol | Meaning             |
| ------ | ------------------- |
| `&`    | Address of variable |
| `*`    | Value at address    |
## 📦 Declaration
int *p;<br>
float *f;<br>
char *c;<br>

## 🔁 Pointer to Pointer
int a = 10;<br>
int *p = &a;<br>
int **pp = &p;<br>

**pp  // 10

## Functions with Pointers<br>
✅ Call by Value<br>
 Example: void fun(int x) { x = 20; }<br>

 ✅ Call by Reference<br>
  Example : void fun(int *x) { *x = 20; }

