#define NKEYS 1000

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point p1;
    struct point p2;
};

struct key {
    char *word;
    int count;
};