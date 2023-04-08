#include <iostream>
using namespace std;

class ThreeMatrices{
    int a[3][5] = {{5, 10, 2, 7, 5}, {4, 6, 2, 2,9}, {1, 9, 2, 8, 4}};
    int b[3][5] = {{5, 2, 7, 4, 5}, {10, 6, 9, 2, 3}, {2, 6, 4, 7, 1}};
    int c[3][5];
   public:
    ThreeMatrices() { 
    fill_n(c[0], 15, 0);
    }
    void buildC(char pm){   
        for (int i = 0; i < 3; i++ ){
            for(int j = 0; j < 5; j++){
                if(pm == '+')
                    c[i][j] = a[i][j] + b[i][j];
                else if(pm == '-')
                    c[i][j] = a[i][j] - b[i][j];    
            }
        }
    }

    void printC()
    {
        int *p = &c[0][0];
        for (int k = 0; k < 15; k++){
            cout << *(p + k) << " ";
            if (k % 5 == 4)
                cout << endl;
        }
        
    }
};

int main() {
    ThreeMatrices m;
    cout << "Add..." << endl;   m.buildC('+');  m.printC();
    cout << "Subtract..." << endl; m.buildC('-'); m.printC();

    return 0;
}