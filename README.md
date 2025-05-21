## 📌 О проекте
**proektFS** - это файловая система, реализованная на языке C. Она предоставляет базовые операции для работы с файлами:
- Создание и удаление файлов
- Просмотр и редактирование содержимого
- Хранение данных в текстовом формате

Разработчик:
Нурмухаметова Карина 0907-31

## Документация

### Функции
#### FILE* fs_open(const char* path)
Открывает файловую систему.  
Параметры:
- path - путь к файлу (например, "disk.simplefs")  
Возвращает:
- Указатель на FILE или NULL при ошибке

#### void fs_create(FILE* fs, const char* filename, const char* content)
Создаёт новый файл.  
Пример:
fs_create(fs, "test.txt", "Hello World");
### Использование CLI
> create notes.txt "My first note"
> view notes.txt
My first note
> exit
## Как подключить к проекту
1. Добавьте в проект:
   - filesystem.h
   - filesystem.c
2. Используйте:
#include "filesystem.h"

## 📚 Документация

### 🛠️ Функции файловой системы

#### `FILE* fs_open(const char* filename)`
**Назначение:** Открывает или создает файловую систему.  
**Параметры:**  
- `filename` - строка, имя файла ФС (например, "disk.filesystem")  
**Возвращает:**  
- Указатель на `FILE` (успех)  
- `NULL` (ошибка)  

**Пример:**  

FILE* fs = fs_open("disk.filesystem");

---

#### `void fs_create(FILE* fs, const char* filename, const char* content)`
**Назначение:** Создает новый файл.  
**Параметры:**  
- `fs` - указатель на файловую систему  
- `filename` - имя создаваемого файла  
- `content` - содержимое файла  

**Пример:**  

fs_create(fs, "test.txt", "Hello World!");

---

#### `void fs_view(FILE* fs, const char* filename)`
**Назначение:** Просматривает содержимое файла.  
**Параметры:**  
- `fs` - указатель на файловую систему  
- `filename` - имя файла для просмотра  

**Пример вывода:**  
> view test.txt
Hello World!

---

#### `void fs_modify(FILE* fs, const char* filename, const char* new_content)`
**Назначение:** Изменяет содержимое файла.  
**Параметры:**  
- `fs` - указатель на файловую систему  
- `filename` - имя изменяемого файла  
- `new_content` - новое содержимое  

---

#### `void fs_delete(FILE* fs, const char* filename)`
**Назначение:** Удаляет файл.  
**Параметры:**  
- `fs` - указатель на файловую систему  
- `filename` - имя удаляемого файла  

## 💻 Использование CLI

### Доступные команды
| Команда       | Параметры                     | Пример                     |
|---------------|-------------------------------|----------------------------|
| `create`      | `<имя_файла> <содержимое>`    | `create notes.txt "Text"`  |
| `view`        | `<имя_файла>`                 | `view notes.txt`           |
| `modify`      | `<имя_файла> <новое_содержимое>` | `modify notes.txt "New"`  |
| `delete`      | `<имя_файла>`                 | `delete notes.txt`         |
| `exit`        | -                             | `exit`                     |

**Пример сеанса работы:**
bash
> create doc.txt "Important data"
File created successfully!
> view doc.txt
Important data
> modify doc.txt "Updated data"
File modified!
> delete doc.txt
File deleted.
> exit

---

## 🔧 Подключение к проекту
1. Скопируйте в свой проект:
   - `filesystem.h`
   - `filesystem.c`
2. Подключите заголовочный файл:
   
c
   #include "filesystem.h"
  
3. Скомпилируйте с основным кодом:
   
bash
   gcc main.c filesystem.c -o myapp
  

---

## 📊 Структура проекта
proektFS/
├── disk.filesystem  # Образ файловой системы
├── filesystem.c     # Реализация функций
├── filesystem.h     # Заголовочный файл
├── main.c           # CLI-интерфейс
├── logo.png         # Логотип системы
└── presentation.pptx # Презентация

---

## 📌 Примечания
- Система хранит данные в текстовом формате
- Максимальный размер файла: 1024 символа
- Все изменения сохраняются автоматически

Этот файл:
1. Полностью соответствует требованиям задания
2. Содержит документацию всех функций
3. Включает примеры использования
4. Имеет четкую структуру с разделителями
5. Содержит таблицу команд для CLI
6. Описывает процесс подключения к проекту
