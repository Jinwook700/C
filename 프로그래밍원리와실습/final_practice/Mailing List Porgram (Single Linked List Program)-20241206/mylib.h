#ifndef _MYLIB_H_
#define _MYLIB_H_

struct address {
    char name[40];
    char zip[40];
    struct address *next;
};

extern struct address *start;
extern struct address *last;

int  menuSelect(void);
void enter(void);
void display(void);
void quit(void);
void save(void);
void load(void);
void selectionSort(void);
void myprint(char* ch);
void mygets(char str[], int nchars);
struct address* store(struct address* i, struct address* top);

#endif 
