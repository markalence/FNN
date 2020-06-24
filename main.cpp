
#include "Header.h"

int main()
{

    //-------XOR EXAMPLE--------//
//    FFN *XORnetwork = new FFN();
//    XORnetwork->initFFN(3, 5, 1);
//    XORnetwork->about();
//
//    vector<vector<float>> XOR_APP = {{0,0,1},{0,1,1},{1,0,1},{1,1,1}};
//    vector<vector<float>> XOR_TAR = {{0},{1},{1},{0}};
//
//    XORnetwork->train_by_error(XOR_APP,XOR_TAR,0.0001);
    //cout << "Calculation done ... Drawing graph" << endl;
//    drawFront(XORnetwork, 1000); // requires SFML lib
    
    
    
    //-------DIGIT RECOGNITION EXAMPLE--------//
    FFN *DIGITnetwork = new FFN();
    DIGITnetwork->initFFN(55, 20, 10);
    DIGITnetwork->about();

    vector<vector<float>> x_train, y_train, x_test, y_test;
    tie(y_train,x_train)= readMatFromFile("/home/mark/Documents/mnist_train.csv");
    tie(y_test,x_test)= readMatFromFile("/home/mark/Documents/mnist_test.csv");



    DIGITnetwork->train_by_iteration(x_train,y_train,1);
    DIGITnetwork->test(x_test,y_test);
//
return 0;
}
