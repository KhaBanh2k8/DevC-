#include "FeetInches.cpp"

int main()
{
    FeetInches a(12,3);
    FeetInches b(a);
    FeetInches c(4,5);
    
    cout << a << b;
   cout <<  b.multiply(c);
    

    return 0;
}

