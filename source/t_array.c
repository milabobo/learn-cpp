int getSize() {
    return 5;
}

int array_test() {

    const int size = 5, t_size = 6; // const int
    int size_info = 16; // local var
    const int size1 = getSize();

    int a[size];
    int b[t_size];
    int c[size_info];
    int d[size1];

    int m[3] = {1, 2, 3};
    return 0;
}