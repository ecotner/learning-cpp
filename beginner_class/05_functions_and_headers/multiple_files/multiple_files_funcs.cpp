// these functions are DEFINED here, but they aren't used
// look in `multiple_files.cpp` to see where they are actually used
double add(double x, double y) {
    return x + y;
}

// can overload function by using same function name, but different # of arguments or types
double add(double x, double y, double z) {
    return x + y + z;
}