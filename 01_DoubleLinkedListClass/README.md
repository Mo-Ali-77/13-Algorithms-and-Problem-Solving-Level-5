# 🟢 Project 01: Doubly Linked List Class (Custom Implementation)

## 📝 Project Overview
This project is a comprehensive, from-scratch implementation of the **Doubly Linked List** data structure using **C++** and **Object-Oriented Programming (OOP)** principles. 

Unlike a Singly Linked List, a Doubly Linked List consists of nodes that contain two pointers: one pointing to the **Next** node and another pointing to the **Previous** node. This architecture allows for efficient bidirectional traversal (forward and backward) and simplifies complex insertion and deletion operations.

---

## 🛠️ Methods & Features

The class includes a robust set of methods covering all fundamental and advanced operations. The following table describes each method and its specific functionality:

| # | Method Name | Description |
|:---:|:---|:---|
| 1 | `InsertAtBeginning` | Inserts a new node at the start of the list, making it the new Head. |
| 2 | `Find` | Searches for a specific value and returns a pointer to the node containing it. |
| 3 | `InsertAfterByCurrentNode` | Inserts a new node immediately after a specific node provided as a parameter. |
| 4 | `InsertAtEnd` | Inserts a new node at the very end of the list, making it the new Tail. |
| 5 | `DeleteNode` | Removes a specific node and correctly re-links the surrounding nodes. |
| 6 | `DeleteFirstNode` | Removes the first node (Head) and updates the list start pointer. |
| 7 | `DeleteLastNode` | Removes the last node (Tail) and updates the list end pointer. |
| 8 | `PrintList` | Traverses the entire list and prints all elements in order. |
| 9 | `Size` | Returns the total count of nodes currently present in the list. |
| 10 | `IsEmpty` | Checks whether the list is empty (returns `true`) or not (`false`). |
| 11 | `Clear` | Deletes all nodes and performs full memory cleanup (Deallocation). |
| 12 | `Reverse` | Reverses the order of all elements in the list (Head becomes Tail and vice-versa). |
| 13 | `GetNodeByIndex` | Locates and returns a node based on its zero-based index. |
| 14 | `GetItemByIndex` | Retrieves the value/item stored at a specific index. |
| 15 | `UpdateItemByIndex` | Modifies the data value within a node at a specific index. |
| 16 | `OverloadingInsertAfterByIndex` | An overloaded function to insert a new item after a specific index. |

---

## 💡 Technical Notes
* **Memory Management:** Developed with strict adherence to manual memory management to prevent memory leaks.
* **Complexity:** Insertion and deletion at the boundaries (Head/Tail) are optimized to **$O(1)$** time complexity.
* **Flexibility:** Includes index-based methods to allow the list to be used with array-like accessibility while maintaining dynamic flexibility.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`

---

# 🟢 المشروع الأول: فئة القائمة المرتبطة المزدوجة (Double Linked List Class)

## 📝 مقدمة المشروع
هذا المشروع عبارة عن تنفيذ كامل (Implementation) لهيكل البيانات **القائمة المرتبطة المزدوجة (Doubly Linked List)** من الصفر باستخدام مبادئ البرمجة كائنية التوجه (OOP). 

تتميز القائمة المزدوجة عن القائمة الأحادية (Singly Linked List) بأن كل عقدة (Node) تحتوي على مؤشرين: أحدهما يشير إلى العقدة التالية (Next)، والآخر يشير إلى العقدة السابقة (Previous). هذا التصميم يمنحنا مرونة عالية جداً في التنقل داخل القائمة في كلا الاتجاهين (للأمام والخلف) ويسهل عمليات الإضافة والحذف.

---

## 🛠️ الدوال والوظائف (Methods & Features)

يحتوي الكلاس على مجموعة شاملة من الدوال التي تغطي كافة العمليات الأساسية والمتقدمة للتعامل مع البيانات. الجدول التالي يوضح كل دالة ووظيفتها باختصار:

| # | اسم الدالة (Method) | الوظيفة (Description) |
|:---:|:---|:---|
| 1 | `InsertAtBeginnig` | إضافة عنصر (عقدة) جديد في بداية القائمة لتصبح هي الـ Head. |
| 2 | `Find` | البحث عن قيمة معينة داخل القائمة وإرجاع المؤشر (Pointer) الخاص بالعقدة التي تحتويها. |
| 3 | `InsertAfterByCurrentNode` | إدراج عنصر جديد مباشرة بعد عقدة (Node) محددة يتم تمريرها للدالة. |
| 4 | `InsertAtEnd` | إدراج عنصر جديد في نهاية القائمة ليكون هو الـ Tail. |
| 5 | `DeleteNode` | حذف عقدة محددة بالكامل من القائمة مع ضمان إعادة ربط العقد المجاورة بشكل صحيح. |
| 6 | `DeleteFirstNode` | إزالة العقدة الأولى (Head) وتحديث بداية القائمة. |
| 7 | `DeleteLastNode` | إزالة العقدة الأخيرة (Tail) وتحديث نهاية القائمة. |
| 8 | `PrintList` | المرور على جميع عناصر القائمة وطباعتها على الشاشة بالترتيب. |
| 9 | `Size` | إرجاع العدد الإجمالي للعناصر (العقد) الموجودة حالياً داخل القائمة. |
| 10 | `IsEmpty` | التحقق مما إذا كانت القائمة فارغة (ترجع `true`) أم تحتوي على عناصر (`false`). |
| 11 | `Clear` | حذف جميع العقد الموجودة في القائمة وتفريغ الذاكرة بالكامل (Memory Cleanup). |
| 12 | `Reverse` | عكس ترتيب جميع عناصر القائمة (يصبح الأول أخيرًا والأخير أولًا). |
| 13 | `GetNodeByIndex` | البحث عن عقدة باستخدام الفهرس (Index) الخاص بها وإرجاعها (يبدأ الفهرس من 0). |
| 14 | `GetItemByIndex` | استرجاع قيمة (Value/Item) العنصر الموجود عند فهرس (Index) محدد. |
| 15 | `UpdateItemByIndex` | تعديل أو تحديث القيمة المخزنة داخل عقدة معينة بناءً على الفهرس (Index) الخاص بها. |
| 16 | `OverloadingInsertAfterByIndex`| دالة محملة (Overloaded Function) تتيح إضافة عنصر جديد بعد فهرس (Index) محدد بدلاً من تمرير العقدة نفسها. |

---

## 💡 ملاحظات برمجية (Technical Notes)
* تم بناء هذا الكلاس مع مراعاة التعامل السليم مع الذاكرة (Dynamic Memory Allocation) لتجنب تسرب الذاكرة (Memory Leaks).
* عمليات الإضافة والحذف في البداية والنهاية تمتلك تعقيداً زمنياً ممتازاً **O(1)**.
* تم توفير دوال تعتمد على الـ `Index` لتسهيل استخدام القائمة وكأنها مصفوفة (Array) مرنة.

---
**جزء من المستودع الشامل:** `13-Algorithms & Problem Solving Level 5`

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