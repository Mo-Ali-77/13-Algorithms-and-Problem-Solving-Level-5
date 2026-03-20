# 🟢 Project 02: Queue Class (Using Composition)

## 📝 Project Overview
This project implements the **Queue** data structure based on the **FIFO** (First-In, First-Out) principle. 

💡 **The Engineering Secret:**
Instead of building this class from scratch, this project heavily utilizes the **Composition** principle of Object-Oriented Programming (OOP). We used the `Double Linked List` class from Project 01 as the underlying data container. This is a practical demonstration of **Code Reusability**, proving how well-written, modular code can be leveraged to build new, complex systems efficiently without reinventing the wheel.

---

## 🛠️ Methods & Features

The class features **14 methods** that cleverly wrap the Linked List functionalities to serve the Queue logic. Here are the core functionalities:

| # | Method Name | Description |
|:---:|:---|:---|
| 1 | `push` | Adds a new element to the back of the queue (uses `InsertAtEnd`). |
| 2 | `pop` | Removes the element at the front of the queue (uses `DeleteFirstNode`). |
| 3 | `front` | Returns the value of the first element without removing it. |
| 4 | `back` | Returns the value of the last element in the queue. |
| 5 | `Size` | Returns the total number of elements currently in the queue. |
| 6 | `IsEmpty` | Checks whether the queue is empty. |
| 7 | `Print` | Prints all elements in the queue in order. |
| 8 | `Clear` | Clears the queue completely by deleting all elements. |
| 9 | `GetItem` | Retrieves the value of an element at a specific index. |
| 10 | `Reverse` | Reverses the order of the elements within the queue. |
| 11 | `UpdateItem` | Updates the value of an element at a specific index. |
| 12 | `InsertAfter` | Inserts a new element immediately after a given index. |
| 13 | `InsertAtFront` | Inserts an element at the front of the queue (Queue Bypass). |
| 14 | `InsertAtBack` | Inserts an element at the back of the queue (Same as Push). |

*(Note: Advanced features like index-based retrieval and updates are possible due to the powerful underlying Double Linked List).*

---

## 🧠 Key Concepts Applied
* **Object-Oriented Programming (OOP)**
* **Composition:** The `Queue` class *HAS-A* `Double Linked List`.
* **Code Reusability:** Leveraging pre-tested code to build new, reliable structures quickly and securely.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`


---

# 🟢 المشروع الثاني: فئة الطابور (Queue Class)

## 📝 مقدمة المشروع
هذا المشروع يمثل تطبيقاً عملياً متقدماً على هياكل البيانات، حيث قمنا ببناء هيكل بيانات **الطابور (Queue)** والذي يعتمد على مبدأ **FIFO** (First-In, First-Out) أي "من يدخل أولاً، يخرج أولاً".

💡 **السر الهندسي في هذا المشروع:**
لم نقم ببناء هذا الكلاس من الصفر! بدلاً من ذلك، قمنا بتطبيق مبدأ **التركيب (Composition)** أحد أهم مبادئ الـ OOP. لقد استخدمنا كلاس `Double Linked List` الذي تم بناؤه في المشروع الأول كـ "محرك داخلي" (Underlying Container) لتشغيل الـ Queue. هذا يبرز بوضوح قوة **إعادة استخدام الكود (Code Reusability)**، حيث وفرنا الكثير من الوقت والجهد وحصلنا على كود نظيف وقابل للصيانة.

---

## 🛠️ الدوال والوظائف (Methods & Features)

يحتوي الكلاس على **14 دالة** تعتمد في خلفيتها على استدعاء دوال الـ Linked List بذكاء. إليك أهم الوظائف:

| # | اسم الدالة (Method) | الوظيفة (Description) |
|:---:|:---|:---|
| 1 | `push` | إضافة عنصر جديد إلى نهاية الطابور (استخدام `InsertAtEnd`). |
| 2 | `pop` | إزالة العنصر الموجود في مقدمة الطابور (استخدام `DeleteFirstNode`). |
| 3 | `front` | إرجاع قيمة العنصر الأول في الطابور دون حذفه. |
| 4 | `back` | إرجاع قيمة العنصر الأخير في الطابور. |
| 5 | `Size` | معرفة عدد العناصر الحالية الموجودة في الطابور. |
| 6 | `IsEmpty` | التحقق مما إذا كان الطابور فارغاً أم لا. |
| 7 | `Print` | طباعة جميع العناصر الموجودة في الطابور بالترتيب. |
| 8 | `Clear` | تفريغ الطابور بالكامل وحذف جميع عناصره. |
| 9 | `GetItem` | جلب قيمة عنصر محدد بناءً على موقعه (Index) في الطابور. |
| 10 | `Reverse` | عكس ترتيب عناصر الطابور بالكامل. |
| 11 | `UpdateItem` | تحديث أو تعديل قيمة عنصر معين بناءً على موقعه (Index). |
| 12 | `InsertAfter` | إضافة عنصر جديد بعد موقع (Index) محدد داخل الطابور. |
| 13 | `InsertAtFront` | إضافة عنصر في بداية الطابور (تجاوز الطابور). |
| 14 | `InsertAtBack` | إضافة عنصر في نهاية الطابور (نفس عمل الـ Push). |

*(ملاحظة: بعض الدوال مثل InsertAfter و GetItem هي ميزات إضافية قوية تمت إضافتها بفضل استخدام الـ Double Linked List كبنية تحتية).*

---

## 🧠 المفاهيم المطبقة (Key Concepts)
* **Object-Oriented Programming (OOP)**
* **Composition (التركيب):** `Queue HAS-A Double Linked List`.
* **Code Reusability:** بناء أنظمة جديدة وموثوقة استناداً إلى كود تم اختباره مسبقاً (Don't Reinvent the Wheel).

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