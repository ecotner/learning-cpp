int main() {
    double d = 4.9;

    int i = d; // this could cause the compiler to produce a warning

    i = static_cast<int>(d); // this tells the compiler you mean to cast the double to an integer
    // there are other cast type too, like `const_cast`, `reinterpret_cast`, `dynamic_cast`
}