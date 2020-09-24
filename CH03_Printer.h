#ifndef __CH03_PRINTER_H__
#define __CH03_PRINTER_H__

class Printer {
   const char * ptr;
public:
    void SetString(const char * cptr);
    void ShowString();
};

#endif