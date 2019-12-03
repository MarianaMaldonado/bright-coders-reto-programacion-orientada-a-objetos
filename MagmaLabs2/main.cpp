//Programa para simular el juego "The Bowling Game"

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

int frame[10][3] = {{0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0},
                    {0,0,0}};
                    
int puntosReslt[10];
int puntosTotales[10];
int marcadorActual = 0;
int puntosFinales = 0;

do
{

    cout << "Escribe el lanzamiento 1 para el marcador numero " << marcadorActual + 1 << endl;
    cin >> frame[marcadorActual][0];
    cout << endl;

    if (frame[marcadorActual][0] == 10)
    {
        cout << "STRIKE" << endl;
        cout << endl;
        puntosReslt[marcadorActual] = 2;
        marcadorActual++;
    }
    else
    {
        cout << "Escribe el lanzamiento 2 para el marcador numero " << marcadorActual + 1 << endl;
        cin >> frame[marcadorActual][1];
        cout << endl;

        if (frame[marcadorActual][0] + frame[marcadorActual][1] == 10)
        {
            cout << "SPARE!" << endl;
            cout << endl;
            puntosReslt[marcadorActual] = 1;
            marcadorActual++;
        }
        else
        {
            cout << "El total de puntos para el marcador " << marcadorActual + 1 <<
            " es de: " << frame[marcadorActual][0] + frame[marcadorActual][1] << endl;
            puntosReslt[marcadorActual] = 0;
            marcadorActual++;
            cout << endl;
        }
    }
}
while (marcadorActual < 9);

do
{

    cout << "Escribe el lanzamiento 1 para el marcador numero " << marcadorActual + 1 << endl;
    cin >> frame[marcadorActual][0];
    cout << endl;

    if (frame[marcadorActual][0] == 10)
    {
        cout << "STRIKE" << endl;
        cout << endl;
        puntosReslt[marcadorActual] = 2;
        cout << "Escribe el lanzamiento 2 para el marcador numero " << marcadorActual + 1 << endl;
        cin >> frame[marcadorActual][1];
        cout << endl;
        cout << "Escribe el lanzamiento 3 para el marcador numero " << marcadorActual + 1 << endl;
        cin >> frame[marcadorActual][2];
        cout << endl;
        marcadorActual++;
        cout << endl;
    }
    else
    {
        cout << "Escribe el lanzamiento 2 para el marcador numero " << marcadorActual + 1 << endl;
        cin >> frame[marcadorActual][1];
        cout << endl;

        if (frame[marcadorActual][0] + frame[marcadorActual][1] == 10)
        {
            cout << "SPARE!" << endl;
            cout << endl;
            puntosReslt[marcadorActual] = 1;
            cout << "Escribe el lanzamiento 3 para el marcador numero " << marcadorActual + 1 << endl;
            cin >> frame[marcadorActual][2];
            cout << endl;
            marcadorActual++;
            cout << endl;
        }
        else
        {
            cout << "El total de puntos para el marcador " << marcadorActual + 1 <<
            " es de: " << frame[marcadorActual][0] + frame[marcadorActual][1] << endl;
            puntosReslt[marcadorActual] = 0;
            marcadorActual++;
            cout << endl;
        }
    }
}
while (marcadorActual < 10);

for (marcadorActual = 0; marcadorActual < 8 ; marcadorActual++)
{
    switch(puntosReslt[marcadorActual])
    {
        case 0:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1];
        break;
        case 1:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1] +
        frame[marcadorActual + 1][0];
        break;
        case 2:
        if(puntosReslt[marcadorActual + 1] == 2)
        {
            puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual + 1][0] +
            frame[marcadorActual + 2][0];
        }
        else
        {
            puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual + 1][0] +
            frame[marcadorActual + 1][1];
        }
        break;
    }
}

for (marcadorActual = 8; marcadorActual < 9 ; marcadorActual++)
{
    switch(puntosReslt[marcadorActual])
    {
        case 0:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1];
        break;
        case 1:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1] +
        frame[marcadorActual + 1][0];
        break;
        case 2:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual + 1][0] +
        frame[marcadorActual + 1][1];
        break;
    }
}

for (marcadorActual = 9; marcadorActual < 10 ; marcadorActual++)
{
    switch(puntosReslt[marcadorActual])
    {
        case 0:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1];
        break;
        case 1:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1] +
        frame[marcadorActual][2];
        break;
        case 2:
        puntosTotales[marcadorActual] = frame[marcadorActual][0] + frame[marcadorActual][1] +
        frame[marcadorActual][2];
        break;
    }
}

for (marcadorActual = 0; marcadorActual < 10 ; marcadorActual++)
{
    puntosFinales = puntosFinales + puntosTotales[marcadorActual];

    cout << "El marcador " << marcadorActual + 1 << " tiene una suma total de: " <<
    puntosTotales[marcadorActual];
    cout << endl;
}
	cout << endl;
	cout << "Puntuacion final = " << puntosFinales << endl;

system("PAUSE");
return 0;
}

