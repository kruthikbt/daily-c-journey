



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
<hr>

## 🧠 What is a Pointer?

> A pointer is a variable that stores the memory address of another variable.


int a = 10;<br
int *p = &a;<br>

| Symbol | Meaning             |
| ------ | ------------------- |
| `&`    | Address of variable |
| `*`    | Value at address    |
<hr>
## 📦 <b><u>Declaration</u></b><br>
int *p;<br>
float *f;<br>
char *c;<br>
<hr>
## 🔁 <b>Pointer to Pointer</b><br>
int a = 10;<br>
int *p = &a;<br>
int **pp = &p;<br>

**pp  // 10
<hr>
## <b>Functions with Pointers</b><br>
✅ Call by Value<br>
 Example: void fun(int x) { x = 20; }<br>
🏹Here the parameter creates a copy ik which the changes will be done.<br>
🏹 Call by value takes place when the value of variable is passed as argument. 

 ✅ Call by Reference<br>
  Example : void fun(int *x) { *x = 20; }<br>
🏹 Call by reference takes place when the memory address of the variable is given as theaargument. 

