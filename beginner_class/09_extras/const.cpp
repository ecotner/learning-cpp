int main() {
    int const amount = 90; // this declares that no code will alter this value later on.
    // this enables some potential optimizations, but is primarily for clarity.
    // you can do some sketchy shit with pointers to change it, but that results
    // in "undefined behavior", which can actually do some serious damage to your system.
}