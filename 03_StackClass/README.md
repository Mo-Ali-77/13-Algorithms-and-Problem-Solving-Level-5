# 🟢 Project 03: Stack Class (Using Inheritance & Overriding)

## 📝 Project Overview
This project implements the **Stack** data structure based on the **LIFO** (Last-In, First-Out) principle.

💡 **The Engineering Concept:**
Instead of rewriting standard data structure methods from scratch, this project heavily relies on **Inheritance**. The `Stack` class directly inherits from the previously built `Queue` class. Since most core operations (Pop, Size, Print, IsEmpty) share the exact same logic underneath, we seamlessly reused them.

The only fundamental difference between a Queue and a Stack is how elements are inserted. To handle this, we applied **Method Overriding** on the `Push` method:
* **Queue `Push`**: Inserts at the end (FIFO behavior).
* **Stack `Push`**: Inserts at the front (LIFO behavior).

This approach perfectly demonstrates the power of **Code Reusability** and the DRY (Don't Repeat Yourself) principle in Object-Oriented Programming using C++.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`

---

## 📝 مقدمة المشروع
هذا المشروع يمثل تطبيقاً لهيكل البيانات **المكدس (Stack)** والذي يعتمد على مبدأ **LIFO** (Last-In, First-Out) أي "من يدخل أخيراً، يخرج أولاً".

💡 **السر الهندسي في هذا المشروع (قوة الـ OOP):**
في هذا المشروع، انتقلنا بمستوى التفكير البرمجي إلى مرحلة متقدمة جداً. لم نقم بكتابة دوال الـ Stack من الصفر، بل استخدمنا مبدأ **الوراثة (Inheritance)**. لقد قمنا بوراثة كلاس `MyQueue` (المشروع الثاني) بالكامل، لأن معظم العمليات في الـ Stack (مثل الحذف، الاستعلام عن الحجم، الطباعة، الخ) هي مطابقة تماماً لما يحدث في الـ Queue. 

الفرق الجوهري الوحيد يكمن في طريقة إضافة العناصر، وهنا استخدمنا مبدأ **تجاوز الدوال (Method Overriding)** لتعديل سلوك دالة `Push`:
* في الـ **Queue**: تتم الإضافة في النهاية (Insert At End).
* في الـ **Stack**: تتم الإضافة في البداية (Insert At Front).

هذا التصميم يثبت المعنى الحقيقي لـ **إعادة استخدام الكود (Code Reusability)** وتقليل التكرار البرمجي (DRY Principle).

---

## 🛠️ المفاهيم المطبقة (Key OOP Concepts)
* **Inheritance (الوراثة):** كلاس `Stack` يرث من كلاس `Queue`.
* **Method Overriding (تجاوز الدوال):** إعادة تعريف دالة `push` لتتناسب مع سلوك الـ LIFO.
* **Code Reusability (إعادة الاستخدام):** استغلال الكود المكتوب والمختبر مسبقاً لتوفير الوقت والجهد وتجنب الأخطاء.

---
## 📬 Contact

<p align="left">
    <a href="https://www.linkedin.com/in/mohammed-ali-alamoudi" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" />
  </a>
  <a href="https://instagram.com/Mo__Ali_77" target="_blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" />
  </a>
  <a href="https://x.com/moalialamoudi" target="_blank">
    <img src="https://img.shields.io/badge/Twitter-000000?style=for-the-badge&logo=x&logoColor=white" />
  </a>
  <a href="mailto:alamoudimohammedali@gmail.com">
    <img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
  </a>
</p>