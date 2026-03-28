# 🟢 Project 07: Undo & Redo Simulation Project

## 📝 Project Overview
Ever wondered how (Ctrl+Z) and (Ctrl+Y) work under the hood? This project provides a functional simulation of **Undo and Redo** operations using the **Stack** data structure. 

💡 **The Logic Behind It:**
The system manages value states using two dedicated stacks:
1. **Undo Stack:** Stores the "previous" value every time a property is updated.
2. **Redo Stack:** Stores values that have been "undone," allowing them to be restored.

## 🛠️ Key Learnings
* **Real-world Stack Application:** Mastering how Stacks act as the backbone for history and state management.
* **State Preservation:** Learning to capture the current state of a property before an update occurs to ensure data can be recovered.
* **Undo/Redo Flow Control:**
    * **Undo:** Pops the top of the Undo Stack, pushes the current value to the Redo Stack, and updates the state.
    * **Redo:** Pops the top of the Redo Stack, pushes the current value back to the Undo Stack, and restores the state.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`

---

# 🟢 المشروع السابع: محاكاة التراجع والإعادة (Undo & Redo Simple Project)

## 📝 مقدمة المشروع
هل تساءلت يوماً كيف تعمل ميزة (Ctrl+Z) و (Ctrl+Y) في البرامج؟ هذا المشروع يقدم محاكاة عملية لهذه الميزة باستخدام هيكل بيانات **المكدس (Stack)**. قمنا ببناء نظام بسيط لتخزين وتحديث القيم مع إمكانية التراجع عن التغييرات أو إعادة تطبيقها.

💡 **كيف يعمل النظام؟**
يعتمد المشروع على كلاس `MyString` (أو أي كلاس يحمل قيمة) مع وجود اثنين من الـ Stacks:
1. **Undo Stack:** لتخزين القيم السابقة قبل كل عملية تحديث.
2. **Redo Stack:** لتخزين القيم التي تم التراجع عنها، لإتاحة إعادتها مرة أخرى.

## 🧠 الخبرات المكتسبة
* **التطبيق العملي للـ Stack:** فهم أن الـ Stack هو الهيكل الأمثل لإدارة "تاريخ العمليات" (History management).
* **إدارة الخصائص (Properties):** تعلمت كيف أقوم بحماية القيمة وتخزين نسختها القديمة في الـ Undo Stack قبل أن يتم اعتماد القيمة الجديدة.
* **منطق الـ Undo/Redo:**
    * عند الـ **Undo**: نسحب من Undo Stack ونضع في Redo Stack.
    * عند الـ **Redo**: نسحب من Redo Stack ونضع في Undo Stack.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`

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