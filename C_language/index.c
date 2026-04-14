#include <stdio.h>

int main() {
    FILE *f = fopen("conso.html", "w"); // create file

    // Write HTML + JavaScript into the file
    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html>\n<head><title>C to Console</title></head>\n<body>\n");
    fprintf(f, "<h1>Check Browser Console</h1>\n");
    fprintf(f, "<script>\n");
    fprintf(f, "console.log('My Name: John');\n");
    fprintf(f, "console.log('My Age: 20');\n");
    fprintf(f, "</script>\n");
    fprintf(f, "</body>\n</html>");

    fclose(f);
    printf("File 'conso.html' created. Open it in browser and check console (F12).\n");
    printf("Hello World!\n");
    printf("Done!\n");
    return 0;
}
