# 🟢 Project 04: Dynamic Array Class

## 📝 Project Overview
Traditional static arrays have a fixed size, which is a significant limitation. In this project, we built a **Dynamic Array** data structure from scratch using **Pointers** and **Dynamic Memory Allocation**. This custom class allows the array to dynamically grow or shrink in size during runtime as elements are added or removed.

💡 **Key Technical Learnings:**
* **Manual Memory Management:** Effectively using pointer reassignment to manage arrays in the heap, ensuring no memory leaks.
* **Deletion Algorithm:** To remove an item at a specific index, a new smaller array is created. We use a two-loop approach:
  1. The first loop copies elements from the beginning up to the target index.
  2. The second loop skips the target index and copies the remaining elements from `Index + 1` to the end.
* **Insertion Algorithm:** To insert an element at a specific index, a new larger array is created. The same two-loop logic is applied, but the new value is explicitly assigned at the target index between the two copying loops.

---

# 🟢 المشروع الرابع: المصفوفة الديناميكية (Dynamic Array Class)

## 📝 مقدمة المشروع
المصفوفات العادية (Static Arrays) تأتي بحجم ثابت لا يمكن تغييره أثناء تشغيل البرنامج، وهذا قيد كبير. في هذا المشروع، قمنا ببناء هيكل بيانات **المصفوفة الديناميكية (Dynamic Array)** من الصفر باستخدام المؤشرات (Pointers) وإدارة الذاكرة الديناميكية (Dynamic Memory Allocation). هذا الكلاس يسمح للمصفوفة بالتمدد والتقلص تلقائياً حسب الحاجة.

💡 **الخبرات المكتسبة في هذا المشروع:**
* **التعامل مع الذاكرة (Memory Management):** استخدام `new` و `delete` لإنشاء وتدمير المصفوفات في وقت التشغيل (Runtime).
* **خوارزمية الحذف (Deletion Logic):** لحذف عنصر من فهرس (Index) معين، نقوم بإنشاء مصفوفة جديدة أصغر حجماً، ثم نستخدم حلقتي تكرار (Two For Loops):
  1. الحلقة الأولى: تنسخ العناصر من البداية وحتى الفهرس المطلوب حذفه.
  2. الحلقة الثانية: تتجاوز العنصر المحذوف وتكمل نسخ باقي العناصر من الفهرس `Index + 1` وحتى النهاية.
* **خوارزمية الإضافة (Insertion Logic):** لإضافة عنصر في فهرس محدد، ننشئ مصفوفة جديدة أكبر حجماً، ونستخدم نفس فكرة الحلقتين، ولكن بينهما نقوم بإسناد القيمة الجديدة في الفهرس المطلوب.

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