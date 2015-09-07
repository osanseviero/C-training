struct lispObject {
    int type;           /* type code */
    union {
        int     intVal;
        double  floatVal;
        char *  stringVal;
        struct {
            struct lispObject *car;
            struct lispObject *cdr;
        } consVal;
    } u;
};