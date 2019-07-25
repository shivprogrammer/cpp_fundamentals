int variables() {
    // different valid ways of initializing variables
    int i1 = 1;
    std::cout << "i1=" << i1 << std::endl;
    int i2; // i2 is UNINITIALIZED, THERE IS NO DEFAULT VALUE
    i2 = 2;
    std::cout << "i2=" << i2 << std::endl;
    int i3(3);
    std::cout << "i3=" << i3 << std::endl;
    int i4{ 4 }; // this is much more useful for a collection of values
    std::cout << "i4=" << i4 << std::endl;

    double d1 = 2.2;
    std::cout << "d1=" << d1 << std::endl;
    double d2 = i1; // even though i1 holds an integer, this is still valid because there is no loss of precision from int to double
    std::cout << "d2=" << d2 << std::endl;
    int i5 = d1; // the values after the decimal is truncated to fit an integer type
    std::cout << "i5=" << i5 << std::endl;
}