#include<iostream>

using namespace std;

int main()
{
	int salir;
	int cita;
	char nombre[50];
	char tratamiento[50];
	int costo;
	int opcion;
	int menu;
	do
	{
		cout << "CONSULTORIO DENTAL" << endl;
		cout << "1. Agendar cita" << endl;
		cout << "2. Modificar cita" << endl;
		cout << "3. Eliminar cita" << endl;
		cout << "4. Lista de citas vigentes" << endl;
		cout << "5. Limpiar pantalla" << endl;
		cout << "6. Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			do {
				cout << "Escriba su nombre:" << endl;
				cin >> nombre;
				cout << "Seleccione el tratamiento que desea realizarse:" << endl;
				cout << "1. Blanqueamiento" << endl;
				cout << "2. Endodoncia" << endl;
				cout << "3. Extracción dental" << endl;
				cout << "4. Ortodoncia" << endl;
				cout << "5. Tratamiento de caries" << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "Blanqueamiento: El blanqueamiento dental es un tratamiento de odontología estética que tiene por objetivo eliminar las manchas dentales y hacer que la dentición adquiera una tonalidad más blanca y brillante." << endl;
					cout << "Costo del tratamiento: $4000" << endl;

				}
				if (opcion == 2)
				{
					cout << "Endodoncia: Consiste en la extirpación de la pulpa dental y el posterior relleno y sellado de la cavidad pulpar con un material inerte." << endl;
					cout << "Costo del tratamiento: $6000" << endl;

				}
				if (opcion == 3)
				{
					cout << "Extracción dental: Una extracción dental es un procedimiento para extraer un diente de la encía." << endl;
					cout << "Costo del tratamiento: $200" << endl;

				}
				if (opcion == 4)
				{
					cout << "Ortodoncia: La atención dental con ortodoncia incluye el uso de dispositivos, tales como los aparatos (frenos), para enderezar los dientes y corregir problemas con la mordida." << endl;
					cout << "Costo del tratamiento: $32000" << endl;

				}
				if (opcion == 5)
				{
					cout << "Tratamiento de caries: El tratamiento incluye el uso de flúor, empaste y coronas. Los casos más graves pueden necesitar tratamiento de conducto radicular o extracción." << endl;
					cout << "Costo del tratamiento: $1000" << endl;

				}
				cout << "Desea agregar otro tratamiento 1. Si, 2. No" << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "Seleccione el tratamiento que desea realizarse:" << endl;
					cout << "1. Blanqueamiento" << endl;
					cout << "2. Endodoncia" << endl;
					cout << "3. Extracción dental" << endl;
					cout << "4. Ortodoncia" << endl;
					cout << "5. Tratamiento de caries" << endl;
					cin >> opcion;
				}
				else
					cout << "El total a pagar es:" << endl;
				cout << "Desea agregar otro tratamiento 1. Si, 2. No" << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "Seleccione el tratamiento que desea realizarse:" << endl;
					cout << "1. Blanqueamiento" << endl;
					cout << "2. Endodoncia" << endl;
					cout << "3. Extracción dental" << endl;
					cout << "4. Ortodoncia" << endl;
					cout << "5. Tratamiento de caries" << endl;
					cin >> opcion;
				}
				else
					cout << "El total a pagar es:" << endl;
				cout << "Seleccione la hora de su cita:" << endl;
				cout << "1. 8:00 a.m." << endl;
				cout << "2. 9:00 a.m." << endl;
				cout << "3. 10:00 a.m." << endl;
				cout << "4. 11:00 a.m." << endl;
				cout << "5. 12:00 p.m." << endl;
				cout << "6. 13:00 p.m." << endl;
				cout << "7. 14:00 p.m." << endl;
				cout << "8. 15:00 p.m." << endl;
				cout << "9. 16:00 p.m." << endl;
				cin >> opcion;
				if (opcion == 1)
					cout << "Su número de cita es el 01" << endl;
				if (opcion == 2)
					cout << "Su numero de cita es el 02" << endl;
				if (opcion == 3)
					cout << "Su numero de cita es el 03" << endl;
				if (opcion == 4)
					cout << "Su numero de cita es el 04" << endl;
				if (opcion == 5)
					cout << "Su numero de cita es el 05" << endl;
				if (opcion == 6)
					cout << "Su numero de cita es el 06" << endl;
				if (opcion == 7)
					cout << "Su numero de cita es el 07" << endl;
				if (opcion == 8)
					cout << "Su numero de cita es el 08" << endl;
				if (opcion == 9)
					cout << "Su numero de cita es el 09" << endl;
				else
					cout << "Verifique que sus datos sean correctos" << endl;
			} while (opcion == 0);
			break;

		case 2:
			do {
				cout << "Ingrese el numero de su cita" << endl;
				cin >> cita;
				cout << "Esta seguro que quiere modificar su cita 1 Si, 2 No" << endl;
				cin >> opcion;
				if (opcion == 1)
				{
					cout << "Seleccione la hora de su nueva cita:" << endl;
					cout << "1. 8:00 a.m." << endl;
					cout << "2. 9:00 a.m." << endl;
					cout << "3. 10:00 a.m." << endl;
					cout << "4. 11:00 a.m." << endl;
					cout << "5. 12:00 p.m." << endl;
					cout << "6. 13:00 p.m." << endl;
					cout << "7. 14:00 p.m." << endl;
					cout << "8. 15:00 p.m." << endl;
					cout << "9. 16:00 p.m." << endl;
					cin >> opcion;
					if (opcion == 1)
						cout << "Su número de cita es el 01" << endl;
					if (opcion == 2)
						cout << "Su numero de cita es el 02" << endl;
					if (opcion == 3)
						cout << "Su numero de cita es el 03" << endl;
					if (opcion == 4)
						cout << "Su numero de cita es el 04" << endl;
					if (opcion == 5)
						cout << "Su numero de cita es el 05" << endl;
					if (opcion == 6)
						cout << "Su numero de cita es el 06" << endl;
					if (opcion == 7)
						cout << "Su numero de cita es el 07" << endl;
					if (opcion == 8)
						cout << "Su numero de cita es el 08" << endl;
					if (opcion == 9)
						cout << "Su numero de cita es el 09" << endl;
					else
						cout << "Verifique que sus datos sean correctos" << endl;
				}
				if (opcion == 2)
					cout << "Gracias" << endl;
				else
					cout << "Gracias" << endl;

			} while (opcion == 0);
			break;

		case 3:
			do {
				cout << "Ingrese el numero de su cita" << endl;
				cin >> cita;
				cout << "Esta seguro que quiere eliminar su cita 1. Si, 2. No" << endl;
				cin >> opcion;
				if (opcion == 1)
					cout << "Su cita se ha eliminado" << endl;
				else
					cout << "Gracias" << endl;
			} while (opcion == 0);
			break;

		case 4:
			do {
				cout << "Esta es la lista de citas vigentes:" << endl;
				cout << "Lunes: 8:00 a.m." << endl;
				cout << "Miercoles: 12:00 p.m." << endl;
				cout << "Viernes: 14:00 p.m., 15:00 p.m." << endl;
			} while (opcion == 0);
			break;

		case 5:
			do {
				cout << "Esta seguro que quiere limpiar su pantalla 1. Si, 2. No" << endl;
				cin >> opcion;
				if (opcion == 1)
					cout << "Su pantalla ha sido limpiada" << endl;
				else
					cout << "Gracias" << endl;
			} while (opcion == 0);
			break;

		case 6:
			cout << "Esta seguro que quiere salir" << endl << "1. Si" << endl << "2. No" << endl;
			cin >> salir;

		}
		cout << "¿Quieres volver al menú" << endl << "1-Si" << endl << "2-No" << endl;
		cin >> menu;
	} while (menu == 1);

	return 0;
}
