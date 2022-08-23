#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

//Quinceavo ejercicio (p), matriz ecuación: AX=B
//Despeje de X=A^⁻1*B
void Ejer15(){
    //Se crean 2 matrices de tamaño 4x4
    Eigen::Matrix4f mA(4,4);
    Eigen::Matrix4f mB(4,4);
    //Se crea una matriz de resultados de 4x4
    Eigen::Matrix4f mResul(4,4);
    //Se llenan las matrices
    mA << 1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    mB << 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;
    //Se aplica la formula despejada
    mResul= (mA.inverse()*mB);
    std::cout<<"El resultado del quinceavo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;
}

//Catorceavo ejercicio (o), matriz ecuación: XA=B
//Despeje de X=B*A^⁻1
void Ejer14(){
    //Se crean 2 matrices de 3x3
    Eigen::Matrix3f mA(3,3);
    Eigen::Matrix3f mB(3,3);
    //Se crea una matriz de resultados 3x3
    Eigen::Matrix3f mResul(3,3);
    //Se llenan las matrices
    mA << 2, 5, 7, 6, 3, 4, 5, -2, -3;
    mB << -1, 1, 0, 0, 1, 1, 1, 0, -1;
    //Se aplica la formula
    mResul= (mB * mA.inverse());
    std::cout<<"El resultado del catorceavo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;
}

//Treceavo ejercicio (m), matriz ecuación: X=A*B*C
void Ejer13(){
    //Se crea una matriz de tamaño 1x3
    Eigen::MatrixXf mA(1,3);
    //Se crea una matriz de tamaño 3x2
    Eigen::MatrixXf mB(3,2);
    //Se crea una tercera matriz de tamaño 2x1
    Eigen::MatrixXf mC(2,1);
    //Se crea una matriz de resultados
    Eigen::MatrixXf mResul;
    //Se llenan las matrices
    mA << 4, 8, 12;
    mB << 3, 2, 0, 1, -1, 0;
    mC << 3, -1;
    //Se aplica la formula
    mResul = (mA * mB * mC);
    std::cout<<"El resultado del ejercicio trece ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Doceavo ejercicio (i), matriz ecuación: X=(AA^t) - (2AB)
void Ejer12(){
    //Se crea una matriz de tamaño 2x3
    Eigen::MatrixXf mA(2,3);
    //Se crea una matriz de tamaño 3x2
    Eigen::MatrixXf mB(3,2);
    //Se crea una matriz de resultado
    Eigen::MatrixXf mResul;
    //Se llenan las matrices
    mA << 1, 0, -2, 2, -1, 3;
    mB << 2, -3, -2, 0, -1, -2;
    //Se aplica la formula
    mResul= ((mA*mA.transpose()) - (2*(mA*mB)));
    std::cout<<"El resultado del doceavo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;
}

//Onceavo ejercicio (k), matriz ecuación: A^t*X*B=C
//Despeje de X=A^t^-1 * C * B^-1
void Ejer11(){
    //Se crean 3 matrices de 2x2
    Eigen::Matrix2f mA(2,2);
    Eigen::Matrix2f mB(2,2);
    Eigen::Matrix2f mC(2,2);
    //Se crea la matriz resultante 2x2
    Eigen::Matrix2f mResul(2,2);
    //Se llenan las matrices
    mA << 2, 4, 3, 2;
    mB << 1, 0, 2, 1;
    mC << 7, 5, 6, 1;
    //Se aplica la formula
    mResul = (mA.transpose().inverse() * mC * mB.inverse());
    std::cout<<"El resultado del onceavo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;
}

//Decimo ejercicio (j), matriz ecuación: X=A³
void Ejer10(){
    //Se crea una matriz 2x2
    Eigen::Matrix2f mA(2,2);
    //Se llena la matriz
    mA << 4, 2, -1, 0;
    std::cout<<"El resultado del Decimo ejercicio es: "<<std::endl;
    //En este caso al mostrar la matriz, se multiplicara por ella
    //misma 3 veces
    std::cout<<mA*mA*mA<<std::endl;
}

//Noveno ejercicio (i), matriz ecuación: X=(A^t*A)-(2*A)
void Ejer9(){
    //Se crea 1 matrices 2x2
    Eigen::Matrix2f mA(2,2);
    //Se crea la matriz de resultado
    Eigen::Matrix2f mResul(2,2);
    //Se llena la matriz
    mA << 3, -1, 0, 2;
    //Se aplica la formula
    mResul = ((mA.transpose() * mA) - (2*mA));
    std::cout<<"El resultado del Noveno ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Octavo ejercicio (h), matriz ecuación: AX=B
//Despeje de X=A^-1*B
void Ejer8(){
    //Se crean 2 matrices 3x3
    Eigen::Matrix3f mA(3,3);
    Eigen::Matrix3f mB(3,3);
    //Se crea una matriz resultado de 3x3
    Eigen::Matrix3f mResul(3,3);
    //Se llenan las matriz
    mA << 1, 1, 1, 6, 5, 4, 13, 10, 8;
    mB << 0, 1, 2, 1, 0, 2, 1, 2, 0;
    //Aplicación de l formulas
    mResul = (mA.inverse() * mB);
    std::cout<<"El resultado del Octavo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;


}

//Septimo ejercicio (g), matriz ecuación: XA=B
//Despeje de X=B*A^-1
void Ejer7(){
    //Se crean 2 matrices 3x3
    Eigen::Matrix3f mA(3,3);
    Eigen::Matrix3f mB(3,3);
    //Se crea una matriz resultado de 3x3
    Eigen::Matrix3f mResul(3,3);
    //Se llenan las matriz
    mA << 2, 7, 3, 3, 9, 4, 1, 5, 3;
    mB << 1, 0, 2, 0, 1, 0, 0, 0, 1;
    //Aplicación de l formula
    mResul = (mB * mA.inverse());
    std::cout<<"El resultado del Septimo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Sexto ejercicio (f), matriz ecuación: X=A+3B
void Ejer6(){
    //Se crean 2 matrices 3x3
    Eigen::Matrix3f mA(3,3);
    Eigen::Matrix3f mB(3,3);
    //Se crea una matriz resultado de 3x3
    Eigen::Matrix3f mResul(3,3);
    //Se llenan las matriz
    mA << 1, 5, -1, -1, 2, 2, 0, -3, 3;
    mB << -1, -4, 3, 1, -2, -2, -3, 3, -5;
    //Aplicación de l formula
    mResul = (mA + (3*mB));
    std::cout<<"El resultado del Sexto ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Quinto ejercicio (e), matriz ecuación: X=2(AB+C)
void Ejer5(){
    //Se crea una matriz A de 2x3
    Eigen::MatrixXf mA(2,3);
    //Se crea una matriz B 3x2
    Eigen::MatrixXf mB(3,2);
    //Se crea una matriz C 2,2
    Eigen::MatrixXf mC(2,2);
    Eigen::MatrixXf mResul;
    //Se llenan las matriz
    mA << 3, 0, -1, 0, 2, 1;
    mB << 1, 2, 1, 0, 0, 6;
    mC << -2, 0, -2, -5;
    //Aplicaciòn de la formula
    mResul = 2*((mA*mB)+mC);
    std::cout<<"El resultado del quinto ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Cuarto ejercicio (d), matriz ecuación: XA=B
//Despeje de X = B*A^-1
void Ejer4(){
    //Se crean 3 matrices de 2x2
    Eigen::Matrix2f mA(2,2);
    Eigen::Matrix2f mB(2,2);
    //Se crea la matriz de resultado
    Eigen::Matrix2f mResul(2,2);
    //Se llenan las matriz
    mA << 2, 1, -4, -3;
    mB << 2, 2, 6, 4;
    //Aplicaciòn de la formula
    mResul = (mB * mA.inverse());
    std::cout<<"El resultado del cuarto ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Tercer ejercicio (c), matriz ecuación: AXB^t=C
//Despeje de X=A^-1*C*B^t^⁻1
void Ejer3(){
    //Se crean 3 matrices de 2x2
    Eigen::Matrix2f mA(2,2);
    Eigen::Matrix2f mB(2,2);
    Eigen::Matrix2f mC(2,2);
    //Se crea la matriz de resultado
    Eigen::Matrix2f mResul(2,2);
    //Se llenan las matriz
    mA << -3, -2, 3, 3;
    mB << 5, 3, 9, 4;
    mC << 1, 1, 0, 0;
    //Aplicaciòn de la formula
    mResul = (mA.inverse() * mC * mB.transpose().inverse());
    std::cout<<"El resultado del tercer ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;


}

//Segundo ejercicio (b), matriz ecuación: 2X+4A=3BA
// Despeje de X = (3BA-4A)/2
void Ejer2(){
    //Se crean 2 matrices de 2x2
    Eigen::Matrix2f mA(2,2);
    Eigen::Matrix2f mB(2,2);
    //Se crea la matriz de resultado
    Eigen::Matrix2f mResul(2,2);
    //Se llenan las matriz
    mA << 0, -1, 2, 1;
    mB << 1, 2, 3, 4;
    //Aplicaciòn de la formula
    mResul = (((3*mB)*mA) - (4*mA))/2;
    std::cout<<"El resultado del segundo ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}

//Primer ejercicio, matriz ecuación 3A-4B
void Ejer1(){
    //Se crean 2 matrices de 2x2
    Eigen::Matrix2f m1(2,2);
    Eigen::Matrix2f m2(2,2);
    //Se crea la matriz de resultado
    Eigen::Matrix2f mResul(2,2);
    //Se llenan las matriz
    m1 << 4, -2, 1, -7;
    m2 << -1, 2, 6, -5;
    //Aplicaciòn de la formula
    mResul = ((3*m1) - (4*m2));
    std::cout<<"El resultado del prime ejercicio es: "<<std::endl;
    std::cout<<mResul<<std::endl;

}


int main()
{
    int opc;
    std::cout<<"=============================\n";
    std::cout<<"        Bienvenido:         "<<std::endl;
    std::cout<<"=============================\n";
    std::cout<<"Las opciones estan del 1 al 15."<<std::endl;
    std::cout<<"Del 1 al 15 son los ejercicios propuestos en la guía: "<<std::endl;
    std::cin>>opc;
    switch(opc){
        case 1:
            Ejer1();
        break;
        case 2:
            Ejer2();
        break;
        case 3:
            Ejer3();
        break;
        case 4:
            Ejer4();
        break;
        case 5:
            Ejer5();
        break;
        case 6:
            Ejer6();
        break;
        case 7:
            Ejer7();
        break;
        case 8:
            Ejer8();
        break;
        case 9:
            Ejer9();
        break;
        case 10:
            Ejer10();
        break;
        case 11:
            Ejer11();
        break;
        case 12:
            Ejer12();
        break;
        case 13:
            Ejer13();
        break;
        case 14:
            Ejer14();
        break;
        case 15:
            Ejer15();
        break;
            Default:
            std::cout<<"Opción no valida"<<std::endl;
        break;

    }

    return 0;
}
