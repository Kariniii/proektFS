#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <stdio.h>

// Открыть или создать файловую систему
FILE* fs_open(const char* filename);

// Просмотреть содержимое файла
void fs_view(FILE* fs, const char* filename);

// Создать новый файл
void fs_create(FILE* fs, const char* filename, const char* content);

// Изменить файл
void fs_modify(FILE* fs, const char* filename, const char* new_content);

// Удалить файл
void fs_delete(FILE* fs, const char* filename);

#endif
