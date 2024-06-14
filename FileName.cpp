#include <iostream>

using namespace std;

int main() {
    int M, N;

    cout << "Mass First: ";
    cin >> M;
    cout << "Mass Second: ";
    cin >> N;
    
    int* firs = new int[M];
    int* sec = new int[N];
    
    cout << "elements First:\n";
    for (int i = 0; i < M; i++) {
        cin >> firs[i];
    }
    
    cout << "elements Second:\n";
    for (int i = 0; i < N; i++) {
        cin >> sec[i];
    }



    int a = 0, v = 0,x = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (firs[i] == sec[j]) {
                a++;
                break;
            }
        }
    }
    int* list = new int[M-a];
    int* C = new int[M-a];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (firs[i] == sec[j]) {
                list[v] = i;
                v++;
                break;
            }
        }
    }
    
    for (int i = 0; i < M-a; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < M; i++, x++) {
        for (int j = 0; j < M; j++) {
            if (i == list[j]) {
                i++;
            }
        }
        C[x] = firs[i];
    }

    cout << "A and B:\n";
    for (int i = 0; i < M-a; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    /* (2) for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (firs[i] == sec[j]) {
                a++;
                break;
            }
        }
    }
    cout << a << endl;

    int* C = new int[a];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (firs[i] == sec[j]) {

                C[v] = firs[i];
                v++;
                break;
            }
        }
    }*/



    /* (1)  for (int i = 0; i < M; i++) {
        C[i] = firs[i];
    }
    for (int i = 0; i < N; i++) {
        C[M + i] = sec[i];
    }*/

    
    
    /*cout << "3-d ---  A and B:\n";
    for (int i = 0; i < a; i++) {
        cout << C[i] << " ";
    }
    cout << endl;*/
    
    delete[] firs;
    delete[] sec;
    delete[] C;
    delete[] list;
    
}






















































