
#include <iostream>
using namespace std;

 namespace Prakseis
{
    class maths
    {private:
    float a;
    float b;
    
    public:
        class Invalid { };
         
        // Returns a + b
        static float Add(float a, float b);

        // Returns a - b
        static float Subtract(float a, float b);

        // Returns a * b
        static float Multiply(float a, float b);

        // Returns a / b
        static float Divide(float a, float b);
    };
bool is_number(float a,float b);


bool operator==(const maths& a, const maths& b);
bool operator!=(const maths& a, const maths& b);

ostream& operator<<(ostream& os, const maths& a);
istream& operator>>(istream& is, maths& b);

}



