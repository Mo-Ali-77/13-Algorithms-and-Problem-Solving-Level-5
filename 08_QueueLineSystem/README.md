# 🟢 Project 08: Queue Line System

## 📝 Project Overview
This is the final capstone project of the Data Structures series. It is a practical simulation of a real-world queue management system (commonly seen in banks or clinics). The system handles ticket issuance, waiting time calculation, queue tracking, and client serving in sequential order.

💡 **Key Technical Learnings:**
* **Nested Classes:** The `clsTicket` class is entirely nested within the `clsQueueLine` class. This enforces strict encapsulation and structurally binds the ticket entity directly to the queue system, leading to highly organized and modular code.
* **Hybrid Data Structures (Queue + Stack):** The system relies on a **Queue** as its core engine to enforce the FIFO principle for clients. Simultaneously, a **Stack** is integrated to handle specific reverse-display functionalities (Right-To-Left printing), demonstrating the ability to leverage multiple data structures synergistically.
* **Modular Code Design:** Breaking down a functional system into interconnected, manageable components (e.g., `IssueTicket`, `ServeNextClient`) that seamlessly communicate with one another.

---
**Part of the Repository:** `13-Algorithms & Problem Solving Level 5`

---

# 🟢 المشروع الثامن: نظام إدارة طوابير الانتظار (Queue Line System)

## 📝 مقدمة المشروع
هذا هو المشروع الختامي لسلسلة هياكل البيانات، وهو عبارة عن محاكاة حقيقية وعملية لأنظمة طوابير الانتظار (مثل تلك الموجودة في البنوك أو العيادات). النظام يقوم بإصدار التذاكر (Tickets)، حساب وقت الانتظار، إدارة العملاء المنتظرين، وخدمتهم بالدور.

💡 **الخبرات الهندسية المكتسبة:**
* **الكلاسات المتداخلة (Nested Classes):** تم تصميم كلاس `clsTicket` بالكامل داخل كلاس `clsQueueLine`. هذا الأسلوب يضمن تغليف البيانات (Encapsulation) ويربط التذكرة عضوياً بالطابور التابعة له، مما يجعل تقسيم الكود أكثر منطقية واحترافية.
* **دمج هياكل البيانات (Queue + Stack):** تم استخدام هيكل الـ **Queue** كعصب رئيسي للنظام لضمان مبدأ (FIFO - من يأتي أولاً يخدم أولاً). وفي نفس الوقت، تم دمج هيكل الـ **Stack** لعمليات العرض والطباعة المعكوسة (من اليمين لليسار RTL)، مما يثبت القدرة على توظيف الهياكل المناسبة لحل مشاكل محددة في نفس المشروع.
* **التصميم المعياري (Modular Design):** تقسيم النظام المعقد إلى دوال صغيرة ومترابطة (مثل `IssueTicket`, `ServeNextClient`, `WaitingClients`) تعمل معاً كترس في آلة واحدة.

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