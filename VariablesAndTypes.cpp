int variables() {
    int i1 = 1; /* different ways of initializing variables */
    std::cout << "i1=" << i1 << std::endl;
    int i2; /*i2 is UNINITIALIZED, THERE IS NO DEFAULT VALUE*/
    i2 = 2;
    std::cout << "i2=" << i2 << std::endl;
    int i3(3);
    std::cout << "i3=" << i3 << std::endl;
    int i4{ 4 }; /*this is much more useful for a collection of values*/
    std::cout << "i4=" << i4 << std::endl;

    double d1 = 2.2;
    std::cout << "d1=" << d1 << std::endl;
    double d2 = i1; /*even though i1 holds an integer, this is still valid because there is no loss of precision from int to double*/
    std::cout << "d2=" << d2 << std::endl;
    int i5 = d1; /*the values after the decimal is truncated to fit an integer type*/
    std::cout << "i5=" << i5 << std::endl;

    char c1 = 'a';
    std::cout << "c1: " << i5 << std::endl;

    bool flag = false;
    std::cout << "flag:" << flag << std::endl;
    flag = i1;
    std::cout << "flag as a bool of i1:" << flag << std::endl;
    flag = d1;
    std::cout << "flag as bool of d1: " << flag << std::endl;

    auto a4 = "s";
    /* this is of type const char*
    this is a C style string
    the compiler interprets anything with a double quotes as a collection of characters
    even "b" would be 2 characters, the b and the null terminator */
}