#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char* nombre_archivo = "carchivo.dat";

struct estudiante {
    int codigo;
    char nombres[50];
    char apellidos[50];
    int telefono;
};

void leer();
void crear();
void actualizar();  // Moved function declaration outside of crear()

int main() {
    crear();
    actualizar();  // Call actualizar() after crear() if you want to update records
    system("pause");
    return 0;
}

void crear() {
    FILE* archivo = fopen(nombre_archivo, "a+b");
    char res;
    estudiante est;

    do {
        fflush(stdin);
        cout << "Ingrese un codigo diferente: ";
        cin >> est.codigo;
        cin.ignore();

        cout << "Ingrese nombres: ";
        cin.getline(est.nombres, 50);

        cout << "Ingrese apellidos: ";
        cin.getline(est.apellidos, 50);

        cout << "Ingrese telefono: ";
        cin >> est.telefono;

        fwrite(&est, sizeof(estudiante), 1, archivo);

        cout << "Desea ingresar otro estudiante (s/n): ";
        cin >> res;
    } while (res == 's' || res == 'S');

    fclose(archivo);
}

void actualizar() {
    FILE* archivo = fopen(nombre_archivo, "r+b");  // Open file in read/write mode
    if (archivo == NULL) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    estudiante est;
    int id = 0;
    cout << "Ingrese el id que desea modificar: ";
    cin >> id;
    fseek(archivo, id * sizeof(estudiante), SEEK_SET);  // Move to the correct record

    cout << "Ingrese un codigo diferente: ";
    cin >> est.codigo;
    cin.ignore();

    cout << "Ingrese nombres: ";
    cin.getline(est.nombres, 50);

    cout << "Ingrese apellidos: ";
    cin.getline(est.apellidos, 50);

    cout << "Ingrese telefono: ";
    cin >> est.telefono;

    fwrite(&est, sizeof(estudiante), 1, archivo);

    fclose(archivo);
}
void(){
	cons chat * nombre_archivo_temp = "archivo_temp.dat";
	file* archivo = fopen(nombre_archivo,"rb");
	file* archivo_temp = fopen(nombre_archivo_temp,"w+b");
	estudiante estudiante;
	int id=0;id_n=0
	cout<<"ingrese el id a eliminar:";
	cin>>id;
	while()fwrite(&est, sizeof(estudiante), 1, archivo);{
		if (id_n=!id)}
		
		}
		id_n++;
		
	
	}
	fclose(archivo);
	fclose(sechivo_temp);
	FILE* archivo_tem = fopen(nombre_archivo, "rw");
	FILE* archivo = fopen(nombre_archivo, "wb");
	while()fwrite(&est, sizeof(estudiante), 1, archivo);{
	fwrite(&est, sizeof(estudiante), 1, archivo);{
	
}
fclose(archivo);
fclose(archivo_temp);
leer{}

}
