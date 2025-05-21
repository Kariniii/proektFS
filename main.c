#include "filesystem.h"
#include <string.h>

int main() {
    FILE* fs = fs_open("disk.simplefs");
    if (!fs) return 1;

    char cmd[20], filename[100], content[1024];

    printf("SimpleFS Shell. Commands: create, view, modify, delete, exit\n");
    while (1) {
        printf("> ");
        scanf("%s", cmd);
if (strcmp(cmd, "create") == 0) {
            scanf("%99s %1023[^\n]", filename, content);
            fs_create(fs, filename, content);
        }
        else if (strcmp(cmd, "view") == 0) {
            scanf("%99s", filename);
            fs_view(fs, filename);
        }
        else if (strcmp(cmd, "modify") == 0) {
            scanf("%99s %1023[^\n]", filename, content);
            fs_modify(fs, filename, content);
        }
        else if (strcmp(cmd, "delete") == 0) {
            scanf("%99s", filename);
            fs_delete(fs, filename);
        }
        else if (strcmp(cmd, "exit") == 0) break;
        else printf("Unknown command\n");
    }

    fs_close(fs);
    return 0;
}
