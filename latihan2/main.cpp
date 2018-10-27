#include <iostream>
using namespace std;
int main()
{
    int bil[6], n, i, j, temp;
    for (n=1; n<=3; n++){
        cout << "Bilangan ke [ "<< n <<" ] : ";
        cin >> bil[n];
    }
    cout << "Hasil pengurutan bilangan kecil ke besar : " <<endl;
    for (i=1; i<=3; i++){
        for (j=1; j<=3; j++){
            if (bil[i] < bil[j]){
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
    for (i=1; i<=3; i++){
        cout << bil[i] << ", ";
    }
    return 0;
}
