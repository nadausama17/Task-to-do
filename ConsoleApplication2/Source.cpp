#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <conio.h>

using namespace std;

#pragma warning(disable:4996)
struct date
{
	int day;
	int month;
	int year;
};
struct task
{
	string title;
	string details;
	date due_date;
	char priority[4];
	bool done = false;
	bool kheles = false;
};
////////////////////English//////////////////////////
void add_tasks(task tasks[100]);
void exit(task tasks[100]);
void readf(task tasks[100]);
void displayShouldBeDoneToday(task tasks[100]);
void deletee(task tasks[100]);
void view(task tasks[100]);
void displayOverdueTask(task tasks[100]);
void mark(task tasks[100]);
void displaydone(task tasks[100]);
void edittask(task tasks[100]);
void search_task(task tasks[100]);
/////////////////////Spanish/////////////////////////
void add_tasksSpanish(task tasks[100]);
void displayShouldBeDoneTodaySpanish(task tasks[100]);
void markSpanish(task tasks[100]);
void deleteeSpanish(task tasks[100]);
void edittaskSpanish(task tasks[100]);
void search_taskSpanish(task tasks[100]);
//////////////////////French////////////////////////
void add_tasksFrench(task tasks[100]);
void displayShouldBeDoneTodayFrench(task tasks[100]);
void markFrench(task tasks[100]);
void deleteeFrench(task tasks[100]);
void edittaskFrench(task tasks[100]);
void search_taskFrench(task tasks[100]);
//////////////////////Italian////////////////////////
void add_tasks_italian(task tasks[100]);
void displayShouldBeDoneToday_italian(task tasks[100]);
void deletee_italian(task tasks[100]);
void mark_italian(task tasks[100]);
void search_task_italian(task tasks[100]);
void edit_italian(task tasks[100]);
///////////////////Int Main////////////////////////////
int static c = 0;
int main()
{
	system("title To do list");
	char Language;
	cout << "Choose Your Language . For : " << endl;
	cout << "English [E] / Spanish [S] / French [F] / Italian [I]" << endl;
	Language = _getch();
	if (Language == 'E' || Language == 'e'){ /////////////////English
		Beep(523, 200);
		Beep(587, 200);
		Beep(659, 200);
		Beep(698, 200);
		Beep(784, 200);

		system("Color 0A");
		cout.width(35);
		cout << "Loading [";
		for (int i = 0; i<15; i++){
			Sleep(0200);
			cout << "*";
		}
		cout << "]";
		Sleep(1000);
		system("cls");
		system("Color 1A");
		task tasks[100];
		readf(tasks);
		cout << "\t" << "\t" << "\t" << "\t" << "    " << "*********" << "\n";
		cout << "\t" << "\t" << "\t" << "\t" << "    " << "*WELCOME*" << "\n";
		cout << "\t" << "\t" << "\t" << "\t" << "    " << "*********" << "\n" << "\n";
		cout << "1- Add task" << "\n";
		cout << "2- Mark the task as done" << "\n";
		cout << "3- Edit task" << "\n";
		cout << "4- Delete a task" << "\n";
		cout << "5- Display all tasks" << "\n";
		cout << "6- Display done tasks" << "\n";
		cout << "7- Display overdue tasks" << "\n";
		cout << "8- Display the tasks that need to be done today" << "\n";
		cout << "9- Search for a task" << "\n";
		cout << "10- Exit" << "\n";
		int n;
		while (true)
		{
			cout << "\n";
			cout << "Press a number to choose an option :" << "\n";
			cin >> n;

			if (n == 1)
			{
				system("cls");
				add_tasks(tasks);
				system("cls");
			}
			if (n == 2)
			{
				system("cls");
				mark(tasks);
				system("cls");
			}
			if (n == 3){
				system("cls");
				edittask(tasks);
				system("cls");
			}
			if (n == 4)
			{
				system("cls");
				deletee(tasks);
				system("cls");
			}
			if (n == 5)
			{
				system("cls");
				view(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 6)
			{
				system("cls");
				displaydone(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 7)
			{
				system("cls");
				displayOverdueTask(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 8){
				system("cls");
				displayShouldBeDoneToday(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 9){
				system("cls");
				search_task(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 10)
			{
				system("cls");
				cout.width(40);
				cout << "Saving";
				for (int i = 0; i<5; i++){
					Sleep(0500);
					cout << ".";
				}
				cout << endl;

				exit(tasks);
				Beep(784, 200);
				Beep(698, 200);
				Beep(659, 200);
				Beep(587, 200);
				Beep(523, 200);
				break;
			}
			cout << "1- Add task" << "\n";
			cout << "2- Mark the task as done" << "\n";
			cout << "3- Edit task" << "\n";
			cout << "4- Delete a task" << "\n";
			cout << "5- Display all tasks" << "\n";
			cout << "6- Display done tasks" << "\n";
			cout << "7- Display overdue tasks" << "\n";
			cout << "8- Display the tasks that need to be done today" << "\n";
			cout << "9- Search for a task" << "\n";
			cout << "10- Exit" << "\n";
		}
		return 0;
	}
	else if (Language == 'S' || Language == 's'){////////////////Spanish
		Beep(523, 200);
		Beep(587, 200);
		Beep(659, 200);
		Beep(698, 200);
		Beep(784, 200);

		system("Color 0A");
		cout.width(35);
		cout << "Cargando [";
		for (int i = 0; i<15; i++){
			Sleep(0200);
			cout << "*";
		}
		cout << "]";
		Sleep(1000);
		system("cls");
		system("Color 1A");
		task tasks[100];
		readf(tasks);
		cout << "\t" << "\t" << "\t" << "    " << "************" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "*Bienvenido*" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "************" << "\n" << "\n";
		cout << "1- Agregar tarea" << "\n";
		cout << "2- Marque la tarea como hecha" << "\n";
		cout << "3- Editar una tarea" << "\n";
		cout << "4- Eliminar una tarea" << "\n";
		cout << "5- Mostrar todas las tareas" << "\n";
		cout << "6- Mostrar tareas hechas" << "\n";
		cout << "7- Mostrar tareas vencidas" << "\n";
		cout << "8- Muestre las tareas que deben hacerse hoy" << "\n";
		cout << "9- Busque una tarea" << "\n";
		cout << "10- Dejar" << "\n";
		int n;
		while (true)
		{
			cout << "\n";
			cout << "Presione un numero para elegir una opcion :" << "\n";
			cin >> n;
			if (n == 1)
			{
				system("cls");
				add_tasksSpanish(tasks);
				system("cls");
			}
			if (n == 2)
			{
				system("cls");
				markSpanish(tasks);
				system("cls");
			}
			if (n == 3){
				system("cls");
				edittaskSpanish(tasks);
				system("cls");
			}
			if (n == 4)
			{
				system("cls");
				deleteeSpanish(tasks);
				system("cls");
			}
			if (n == 5)
			{
				system("cls");
				view(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 6)
			{
				system("cls");
				displaydone(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 7)
			{
				system("cls");
				displayOverdueTask(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 8)
			{
				system("cls");
				displayShouldBeDoneTodaySpanish(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 9)
			{
				system("cls");
				search_taskSpanish(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 10)
			{
				system("cls");
				cout.width(40);
				cout << "Saving";
				for (int i = 0; i<5; i++){
					Sleep(0500);
					cout << ".";
				}
				cout << endl;
				exit(tasks);
				Beep(784, 200);
				Beep(698, 200);
				Beep(659, 200);
				Beep(587, 200);
				Beep(523, 200);
				break;
			}
			cout << "1- Agregar tarea" << "\n";
			cout << "2- Marque la tarea como hecha" << "\n";
			cout << "3- Editar una tarea" << "\n";
			cout << "4- Eliminar una tarea" << "\n";
			cout << "5- Mostrar todas las tareas" << "\n";
			cout << "6- Mostrar tareas hechas" << "\n";
			cout << "7- Mostrar tareas vencidas" << "\n";
			cout << "8- Muestre las tareas que deben hacerse hoy" << "\n";
			cout << "9- Busque una tarea" << "\n";
			cout << "10- Dejar" << "\n";
		}
		return 0;
	}
	else if (Language == 'F' || Language == 'f'){ ///////////French
		Beep(523, 200);
		Beep(587, 200);
		Beep(659, 200);
		Beep(698, 200);
		Beep(784, 200);
		system("Color 0A");
		cout.width(35);
		cout << "Chargement [";
		for (int i = 0; i<15; i++){
			Sleep(0200);
			cout << "*";
		}

		cout << "]";
		Sleep(1000);
		system("cls");
		system("Color 1A");
		task tasks[100];
		readf(tasks);
		cout << "\t" << "\t" << "\t" << "    " << "***********" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "*Bienvenue*" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "***********" << "\n" << "\n";
		cout << "1- Ajouter une tache" << "\n";
		cout << "2- Marquer une tache comme terminee" << "\n";
		cout << "3- Editer une tache" << "\n";
		cout << "4- Supprimer une tache" << "\n";
		cout << "5- Afficher toutes les taches" << "\n";
		cout << "6- Afficher les taches terminees" << "\n";
		cout << "7- Afficher les taches en retard" << "\n";
		cout << "8- Afficher les taches a effectuer aujourd'hui" << "\n";
		cout << "9- Rechercher une tache" << "\n";
		cout << "10-Sortir" << "\n";
		int n;
		while (true)
		{
			cout << "\n";
			cout << "Appuyez sur un nombre pour choisir une option:" << "\n";
			cin >> n;
			if (n == 1)
			{
				system("cls");
				add_tasksFrench(tasks);
				system("cls");
			}
			if (n == 2)
			{
				system("cls");
				markFrench(tasks);
				system("cls");
			}
			if (n == 3)
			{
				system("cls");
				edittaskFrench(tasks);
				system("cls");
			}
			if (n == 4)
			{
				system("cls");
				deleteeFrench(tasks);
				system("cls");
			}
			if (n == 5)
			{
				system("cls");
				view(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 6)
			{
				system("cls");
				displaydone(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 7)
			{
				system("cls");
				displayOverdueTask(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 8)
			{
				system("cls");
				displayShouldBeDoneTodayFrench(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 9)
			{
				system("cls");
				search_taskFrench(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 10)
			{
				system("cls");
				cout.width(40);
				cout << "Saving";
				for (int i = 0; i<5; i++){
					Sleep(0500);
					cout << ".";
				}
				cout << endl;
				exit(tasks);
				Beep(784, 200);
				Beep(698, 200);
				Beep(659, 200);
				Beep(587, 200);
				Beep(523, 200);
				break;
			}
			cout << "1- Ajouter une tache" << "\n";
			cout << "2- Marquer une tache comme terminee" << "\n";
			cout << "3- Editer une tache" << "\n";
			cout << "4- Supprimer une tache" << "\n";
			cout << "5- Afficher toutes les taches" << "\n";
			cout << "6- Afficher les taches terminees" << "\n";
			cout << "7- Afficher les taches en retard" << "\n";
			cout << "8- Afficher les taches a effectuer aujourd'hui" << "\n";
			cout << "9- Rechercher une tache" << "\n";
			cout << "10-Sortir" << "\n";
		}
		return 0;
	}
	else if (Language == 'I' || Language == 'i'){
		Beep(523, 200);
		Beep(587, 200);
		Beep(659, 200);
		Beep(698, 200);
		Beep(784, 200);
		system("Color 0A");
		cout.width(35);
		cout << "Caricamento in corso [";
		for (int i = 0; i<15; i++){
			Sleep(0200);
			cout << "*";
		}

		cout << "]";
		Sleep(1000);
		system("cls");
		system("Color 1A");
		task tasks[100];
		readf(tasks);
		cout << "\t" << "\t" << "\t" << "    " << "***********" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "*BENVENUTO*" << "\n";
		cout << "\t" << "\t" << "\t" << "    " << "***********" << "\n" << "\n";
		cout << "1- Aggiungi compito" << "\n";
		cout << "2- Segna il compito finito" << "\n";
		cout << "3- Modifica il compito" << "\n";
		cout << "4- Cancella un compito" << "\n";
		cout << "5- Mostrare tutte i compiti" << "\n";
		cout << "6- Mostrare i compiti completati" << "\n";
		cout << "7- Mostrare i compiti scaduti" << "\n";
		cout << "8- Mostrare i compiti che dovrebbero essere fatti oggi" << "\n";
		cout << "9- Cerca un compito" << "\n";
		cout << "10- Uscita" << "\n";
		int n;
		while (true)
		{
			cout << "\n";
			cout << "Premere un numero per scegliere un'opzione :" << "\n";
			cin >> n;
			if (n == 1)
			{
				system("cls");
				add_tasks_italian(tasks);
				system("cls");
			}
			if (n == 2)
			{
				system("cls");
				mark_italian(tasks);
				system("cls");
			}
			if (n == 3)
			{
				system("cls");
				edit_italian(tasks);
				system("cls");
			}
			if (n == 4)
			{
				system("cls");
				deletee_italian(tasks);
				system("cls");
			}
			if (n == 5)
			{
				system("cls");
				view(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 6)
			{
				system("cls");
				displaydone(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 7)
			{
				system("cls");
				displayOverdueTask(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 8)
			{
				system("cls");
				displayShouldBeDoneToday_italian(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 9)
			{
				system("cls");
				search_task_italian(tasks);
				cout << "########################################################################" << endl;
				cout << endl;
			}
			if (n == 10)
			{
				system("cls");
				cout.width(40);
				cout << "Saving";
				for (int i = 0; i<5; i++){
					Sleep(0500);
					cout << ".";
				}
				cout << endl;
				exit(tasks);
				Beep(784, 200);
				Beep(698, 200);
				Beep(659, 200);
				Beep(587, 200);
				Beep(523, 200);
				break;
			}
			cout << "1- Aggiungi compito" << "\n";
			cout << "2- Segna il compito finito" << "\n";
			cout << "3- Modifica il compito" << "\n";
			cout << "4- Cancella un compito" << "\n";
			cout << "5- Mostrare tutte i compiti" << "\n";
			cout << "6- Mostrare i compiti completati" << "\n";
			cout << "7- Mostrare i compiti scaduti" << "\n";
			cout << "8- Mostrare i compiti che dovrebbero essere fatti oggi" << "\n";
			cout << "9- Cerca un compito" << "\n";
			cout << "10- Uscita" << "\n";
		}
	}

	else{
		cout << "Wrong Entry Please Try Again " << endl;
	}

}
//////////////////////Add Task///////////////////////
void add_tasks(task tasks[100])
{
	cout << "Enter the title" << "\n";
	getline(cin >> ws, tasks[c].title);
	cout << "Enter details" << "\n";
	getline(cin >> ws, tasks[c].details);
	cout << "Enter due date" << "\n";
	cout << "Enter a day: ";
	cin >> tasks[c].due_date.day;
	cout << "Enter a month: ";
	cin >> tasks[c].due_date.month;
	cout << "Enter a year: ";
	cin >> tasks[c].due_date.year;
	cout << "Enter the priority:'***' or'**'or'*'" << "\n";
	cin >> tasks[c].priority;
	c++;
}
void add_tasksFrench(task tasks[100])
{
	cout << "Entrez le titre" << "\n";
	getline(cin >> ws, tasks[c].title);
	cout << "Entrez les details" << "\n";
	getline(cin >> ws, tasks[c].details);
	cout << "Entrez la date attribuable a" << "\n";
	cout << "Entez une date: ";
	cin >> tasks[c].due_date.day;
	cout << "Entrez un mois: ";
	cin >> tasks[c].due_date.month;
	cout << "Entrez une annee: ";
	cin >> tasks[c].due_date.year;
	cout << "Entrez la priorite:'***' or'**'or'*'" << "\n";
	cin >> tasks[c].priority;
	c++;
}
void add_tasksSpanish(task tasks[100])
{
	cout << "Ingrese el titulo" << "\n";
	getline(cin >> ws, tasks[c].title);
	cout << "Ingresa detalles" << "\n";
	getline(cin >> ws, tasks[c].details);
	cout << "Ingresar fecha de vencimiento:" << "\n";
	cout << "Ingresa un dia: ";
	cin >> tasks[c].due_date.day;
	cout << "Ingrese un mes: ";
	cin >> tasks[c].due_date.month;
	cout << "Ingrese un ano: ";
	cin >> tasks[c].due_date.year;
	cout << "Ingrese la prioridad:'***' or'**'or'*'" << "\n";
	cin >> tasks[c].priority;
	c++;
}
void add_tasks_italian(task tasks[100])
{
	cout << "Inserisci il titolo" << "\n";
	getline(cin >> ws, tasks[c].title);
	cout << "Inserisci i dettagli" << "\n";
	getline(cin >> ws, tasks[c].details);
	cout << "Inserisci la data di scadenza" << "\n";
	cout << "Inserisci un giorno: ";
	cin >> tasks[c].due_date.day;
	cout << "Inserisci un mese: ";
	cin >> tasks[c].due_date.month;
	cout << "Inserisci un anno: ";
	cin >> tasks[c].due_date.year;
	cout << "Inserisci la priorità:'***' o'**'o'*'" << "\n";
	cin >> tasks[c].priority;
	c++;
}
//////////////////////Read and Exit//////////////////
void exit(task tasks[100])
{
	ofstream out("file.txt", ios::trunc);
	out << c << endl;
	for (int i = 0; i < c; i++){
		out << tasks[i].priority << endl;
		for (int j = 0; j < tasks[i].title.size(); j++)
		{
			if (tasks[i].title[j] == ' ')
			{
				out << '_';
			}
			else {
				out << tasks[i].title[j];
			}
		}
		if (tasks[i].done == true)
		{
			for (int j = 0; j < tasks[i].title.size(); j++)
			{
				if (j == (tasks[i].title.size() - 1) && tasks[i].title[j] != '#')
				{
					out << '#';
				}
			}

		}
	
		out << endl;
		for (int j = 0; j < tasks[i].details.size(); j++)
		{
			if (tasks[i].details[j] == ' ')
			{
				out << '_';
			}
			else {
				out << tasks[i].details[j];
			}
		}
		out << endl;
		out << tasks[i].due_date.day << endl;
		out << tasks[i].due_date.month << endl;
		out << tasks[i].due_date.year << endl;
	}
	out.close();
}
void readf(task tasks[100])
{
	ifstream in("file.txt");
	in >> c;
	for (int i = 0; i < c; i++){
		in >> tasks[i].priority;
		in >> tasks[i].title;
		in >> tasks[i].details;
		in >> tasks[i].due_date.day;
		in >> tasks[i].due_date.month;
		in >> tasks[i].due_date.year;
	}
	in.close();
	for (int i = 0; i < c; i++){
		for (int j = 0; j < tasks[i].title.size(); j++)
		{
			if ( tasks[i].title[j] == '#')
			{
				tasks[i].done = true;
			}
			if (tasks[i].title[j] == '_')
			{
				tasks[i].title[j] = ' ';
			}
		}
	}
	for (int i = 0; i < c; i++){
		for (int j = 0; j < tasks[i].details.size(); j++)
		{
			if (tasks[i].details[j] == '_')
			{
				tasks[i].details[j] = ' ';
			}
		}
	}
}
///////////////////Display should be done today//////////////
void displayShouldBeDoneToday(task tasks[100]){ //Task 3
	time_t now;
	struct tm nowLocal;
	time(&now);
	nowLocal = *localtime(&now);
	for (int i = 0; i < c; i++){
		if (tasks[i].due_date.day == nowLocal.tm_mday && tasks[i].due_date.month == nowLocal.tm_mon + 1 && tasks[i].due_date.year == nowLocal.tm_year + 1900){
			cout << "Tasks should be done today : " << endl;
			cout << tasks[i].title << "\t" << tasks[i].details << "\n" << tasks[i].due_date.day << "/" << tasks[i].due_date.month << "/" << tasks[i].due_date.year << endl;
		}
	}
}
void displayShouldBeDoneTodayFrench(task tasks[100]){ //Task 3
	time_t now;
	struct tm nowLocal;
	time(&now);
	nowLocal = *localtime(&now);
	for (int i = 0; i < c; i++){
		if (tasks[i].due_date.day == nowLocal.tm_mday && tasks[i].due_date.month == nowLocal.tm_mon + 1 && tasks[i].due_date.year == nowLocal.tm_year + 1900){
			cout << "Tasche faut etre faire aujourd'hui  : " << endl;
			cout << tasks[i].title << "\t" << tasks[i].details << "\n" << tasks[i].due_date.day << "/" << tasks[i].due_date.month << "/" << tasks[i].due_date.year << endl;
		}
	}
}
void displayShouldBeDoneTodaySpanish(task tasks[100]){
	time_t now;
	struct tm nowLocal;
	time(&now);
	nowLocal = *localtime(&now);
	for (int i = 0; i < c; i++){
		if (tasks[i].due_date.day == nowLocal.tm_mday && tasks[i].due_date.month == nowLocal.tm_mon + 1 && tasks[i].due_date.year == nowLocal.tm_year + 1900){
			cout << " Las tareas que deben hacerse hoy: " << endl;
			cout << tasks[i].title << "\t" << tasks[i].details << "\n" << tasks[i].due_date.day << "/" << tasks[i].due_date.month << "/" << tasks[i].due_date.year << endl;
		}
	}
}
void displayShouldBeDoneToday_italian(task tasks[100]){ //Task 3
	time_t now;
	struct tm nowLocal;
	time(&now);
	nowLocal = *localtime(&now);
	if (tasks[c].due_date.day == nowLocal.tm_mday && tasks[c].due_date.month == nowLocal.tm_mon + 1 && tasks[c].due_date.year == nowLocal.tm_year + 1900){
		cout << "I compiti dovrebbero essere fatti oggi : " << endl;
		cout << tasks[c].title << "\t" << tasks[c].details << "\n" << tasks[c].due_date.day << "/" << tasks[c].due_date.month << "/" << tasks[c].due_date.year << endl;
	}
}
/////////////////////Delete///////////////////////////////////
void deletee(task tasks[100]) {
	view(tasks);
	string d;
	cout << "Enter the title of the task that you want to delete: " << endl;
	getline(cin >> ws, d);
	for (int i = 0; i < c; i++)
	{
		if (tasks[i].title == d)
		{
			for (int j = i; j < c; j++)
			{
				tasks[j] = tasks[j + 1];
			}c--;

		}
	}
}
void deleteeFrench(task tasks[100]) {
	view(tasks);
	string d;
	cout << "Entez le titre que tu veux supprimer: " << endl;
	getline(cin >> ws, d);
	for (int i = 0; i < c; i++)
	{
		if (tasks[i].title == d)
		{
			for (int j = i; j < c; j++)
			{
				tasks[j] = tasks[j + 1];
			}c--;

		}
	}
}
void deleteeSpanish(task tasks[100]) {
	view(tasks);
	string d;
	cout << "Ingrese el título de la tarea que desea eliminar: " << endl;
	getline(cin >> ws, d);
	for (int i = 0; i < c; i++)
	{
		if (tasks[i].title == d)
		{
			for (int j = i; j < c; j++)
			{
				tasks[j] = tasks[j + 1];
			}c--;

		}
	}

}
void deletee_italian(task tasks[100]) {
	view(tasks);
	string d;
	cout << "Inserisci il titolo del compito che vuoi eliminare: " << endl;
	getline(cin >> ws, d);
	for (int i = 0; i < c; i++)
	{
		if (tasks[i].title == d)
		{
			for (int j = i; j < c; j++)
			{
				tasks[j] = tasks[j + 1];
			}c--;

		}
	}

}
/////////////////////Display done//////////////////////
void displaydone(task tasks[100]){

	for (int i = 0; i < c; i++){
		if (tasks[i].done == true){
			cout << tasks[i].title << "\t " << tasks[i].priority << "\t" << tasks[i].details << endl;
			cout << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;


		}
		else
			continue;
	}

}
//////////////////////View///////////////////////////////
void view(task tasks[100])
{
	for (int i = 0; i < c; i++)
	{
		cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
	}
}
////////////////////Display OverDue//////////////////
void displayOverdueTask(task tasks[100]){ // Task 2
	time_t now;
	struct tm nowLocal;// global scope
	time(&now); //to get the time from the computer
	nowLocal = *localtime(&now);

	for (int i = 0; i < c; i++){
		if (nowLocal.tm_year + 1900 > tasks[i].due_date.year){
			tasks[i].kheles = true;
		}
		else if (nowLocal.tm_year + 1900 == tasks[i].due_date.year){
			if (tasks[i].due_date.month < nowLocal.tm_mon + 1){
				tasks[i].kheles = true;
			}
			else if (tasks[i].due_date.month == nowLocal.tm_mon + 1){
				if (tasks[i].due_date.day < nowLocal.tm_mday){
					tasks[i].kheles = true;
				}
			}
		}
	}for (int i = 0; i < c; i++){
		if (tasks[i].kheles == true){
			cout << tasks[i].priority << tasks[i].title << "\t" << tasks[i].details << "\n" << tasks[i].due_date.day << "/" << tasks[i].due_date.month << "/" << tasks[i].due_date.year << endl;
		}
	}
}
/////////////////////Mark Task////////////////////////
void mark(task tasks[100]){
	view(tasks);
	string r;
	int m;
	cout << "Enter number of tasks you want to mark : " << endl;
	cin >> m;

	for (int i = 0; i < m; i++){
		cout << "Enter the title of task number " << i + 1 << " :" << endl;;
		getline(cin >> ws, r);
		for (int j = 0; j < c; j++){
			if (tasks[j].title == r){
				tasks[j].done = true;
				break;
			}
		}
	}
}
void markSpanish(task tasks[100]){
	view(tasks);
	string r;
	int m;
	cout << "Ingrese la cantidad de tareas para marcar:" << endl;
	cin >> m;
	for (int i = 0; i < m; i++){
		cout << "Marque la tarea como hecha : " << i + 1 << " :" << endl;;
		getline(cin >> ws, r);
		for (int j = 0; j < c; j++){
			if (tasks[j].title == r){
				tasks[j].done = true;
				break;
			}
		}
	}
}
void markFrench(task tasks[100]){
	view(tasks);
	string r;
	int m;
	cout << "Entrez le nombre de taches pour etre marque:" << endl;
	cin >> m;
	for (int i = 0; i < m; i++){
		cout << " Marquer la tache numero : " << i + 1 << " :" << endl;;
		getline(cin >> ws, r);
		for (int j = 0; j < c; j++){
			if (tasks[j].title == r){
				tasks[j].done = true;
				break;
			}
		}
	}
}
void mark_italian(task tasks[100]){
	view(tasks);
	string r;
	int m;
	cout << "Inserisci il numero di compiti che desideri contrassegnare : " << endl;
	cin >> m;

	for (int i = 0; i < m; i++){
		cout << "Inserire il titolo del numero di compito " << i + 1 << " :" << endl;
		getline(cin >> ws, r);
		for (int j = 0; j < c; j++){
			if (tasks[j].title == r){
				tasks[j].done = true;
				break;
			}
		}
	}
}
//////////////////////Edit Task///////////////////////
void edittask(task tasks[100]){
	view(tasks);
	cout << "Enter the title of task you want to edit : " << endl;
	string ts;
	getline(cin >> ws, ts);
	for (int i = 0; i < c; i++){
		if (tasks[i].title == ts){
			char answer;
			cout << "What do you want to edit ; \n Title [T] / Details [D] / NDate[N] / Priority [P] : \n";
			answer = _getch();
			if (answer == 'T' || answer == 't'){
				cout << "Enter The New Title: " << endl;
				string u;
				getline(cin >> ws, u);
				tasks[i].title = u;
			}
			else if (answer == 'D' || answer == 'd'){
				cout << "Enter The New Details: " << endl;
				string q;
				getline(cin >> ws, q);
				tasks[i].details = q;

			}
			else if (answer == 'N' || answer == 'n'){
				cout << "1-Day \n 2-Month \n 3-Year " << endl;
				int an;
				cin >> an;
				int dayy, monn, yee;
				if (an == 1){
					cout << "Enter Day: ";
					cin >> dayy;
					tasks[i].due_date.day = dayy;

				}
				else if (an == 2){
					cout << "Enter Month: ";
					cin >> monn;
					tasks[i].due_date.month = monn;
				}
				else if (an == 3){
					cout << "Enter Year: ";
					cin >> yee;
					tasks[i].due_date.year = yee;
				}
				else
					cout << "Wrong entry.";
			}
			else if (answer == 'P' || answer == 'p'){
				cout << "Enter The New Priority: " << endl;
				char ri[4];
				cin >> ri;
				swap(tasks[i].priority, ri);
			}
			else
				cout << "Wrong entry ; Try again." << endl;
		}
	}
}
void edittaskSpanish(task tasks[100]){
	view(tasks);
	cout << "Ingrese el título de la tarea que desea editar : " << endl;
	string ts;
	getline(cin >> ws, ts);
	for (int i = 0; i < c; i++){
		if (tasks[i].title == ts){
			char answer;
			cout << "¿Qué quieres cambiar? \n Título [T] / Detalles [D] / NFecha [N] / Prioridad [P] : \n";
			answer = _getch();
			if (answer == 'T' || answer == 't'){
				cout << "Ingrese el nuevo título: " << endl;
				string u;
				getline(cin >> ws, u);
				tasks[i].title = u;
			}
			else if (answer == 'D' || answer == 'd'){
				cout << "Ingresa nuevos detalles : " << endl;
				string q;
				getline(cin >> ws, q);
				tasks[i].details = q;

			}
			else if (answer == 'N' || answer == 'n'){
				cout << "1-Día \n 2-Meses \n 3-Años" << endl;
				int an;
				cin >> an;
				int dayy, monn, yee;
				if (an == 1){
					cout << "Ingresa el día: ";
					cin >> dayy;
					tasks[i].due_date.day = dayy;

				}
				else if (an == 2){
					cout << "Ingrese el mes: ";
					cin >> monn;
					tasks[i].due_date.month = monn;
				}
				else if (an == 3){
					cout << "Ingrese el año: ";
					cin >> yee;
					tasks[i].due_date.year = yee;
				}
				else
					cout << "Entrada falsa.";
			}
			else if (answer == 'P' || answer == 'p'){
				cout << "Ingrese una nueva prioridad : " << endl;
				char ri[4];
				cin >> ri;
				swap(tasks[i].priority, ri);
			}
			else
				cout << "Entrada falsa Volver a intentar.." << endl;
		}
	}
}
void edittaskFrench(task tasks[100]){
	view(tasks);
	cout << "Entrez le titre de la tâche que vous souhaitez modifier : " << endl;
	string ts;
	getline(cin >> ws, ts);
	for (int i = 0; i < c; i++){
		if (tasks[i].title == ts){
			char answer;
			cout << "Que voulez-vous modifier? \n Titre [T] / Détails [D] / NDate [N] / Priorité [P] : \n";
			answer = _getch();
			if (answer == 'T' || answer == 't'){
				cout << "Entrez le nouveau titre: " << endl;
				string u;
				getline(cin >> ws, u);
				tasks[i].title = u;
			}
			else if (answer == 'D' || answer == 'd'){
				cout << "Entrez les nouveaux détails: " << endl;
				string q;
				getline(cin >> ws, q);
				tasks[i].details = q;

			}
			else if (answer == 'N' || answer == 'n'){
				cout << "1-Jour \n 2-Mois \n 3-Annne" << endl;
				int an;
				cin >> an;
				int dayy, monn, yee;
				if (an == 1){
					cout << "Entrez Jour: ";
					cin >> dayy;
					tasks[i].due_date.day = dayy;

				}
				else if (an == 2){
					cout << "Entrez Mois: ";
					cin >> monn;
					tasks[i].due_date.month = monn;
				}
				else if (an == 3){
					cout << "Entrez Anne: ";
					cin >> yee;
					tasks[i].due_date.year = yee;
				}
				else
					cout << "Fausse entrer.";
			}
			else if (answer == 'P' || answer == 'p'){
				cout << "Entrez une nouveux priorite : " << endl;
				char ri[4];
				cin >> ri;
				swap(tasks[i].priority, ri);
			}
			else
				cout << "Fausse entrer ; Réessayer." << endl;
		}
	}
}
void edit_italian(task tasks[100]){
	view(tasks);
	cout << "Inserisci il titolo del compito che desideri modificare:" << endl;
	string ts;
	getline(cin >> ws, ts);
	for (int i = 0; i < c; i++){
		if (tasks[i].title == ts){
			char answer;
			cout << "Cosa vuoi modificare ; \n Titolo [T] / Dettagli [D] / NData[N] / Priorità [P] : \n";
			answer = _getch();
			if (answer == 'T' || answer == 't'){
				cout << "Inserisci il nuovo titolo: " << endl;
				string u;
				getline(cin >> ws, u);
				tasks[i].title = u;
			}
			else if (answer == 'D' || answer == 'd'){
				cout << "Inserisci i nuovi dettagli: " << endl;
				string q;
				getline(cin >> ws, q);
				tasks[i].details = q;

			}
			else if (answer == 'N' || answer == 'n'){
				cout << "1-Giorno \n 2-Mese \n 3-Anno " << endl;
				int an;
				cin >> an;
				int dayy, monn, yee;
				if (an == 1){
					cout << "Inserisci il giorno: ";
					cin >> dayy;
					tasks[i].due_date.day = dayy;

				}
				else if (an == 2){
					cout << "Inserisci il mese: ";
					cin >> monn;
					tasks[i].due_date.month = monn;
				}
				else if (an == 3){
					cout << "Inserisci Anno: ";
					cin >> yee;
					tasks[i].due_date.year = yee;
				}
				else
					cout << "Errore.";
			}
			else if (answer == 'P' || answer == 'p'){
				cout << "Inserisci la nuova priorità: " << endl;
				char ri[4];
				cin >> ri;
				swap(tasks[i].priority, ri);
			}
			else
				cout << "Errore ; Riprova." << endl;
		}
	}
}
/////////////////////Search///////////////////////
void search_task(task tasks[100]){
	int search_day, search_month, search_year, search_number;
	char choices;
	string search;
	cout << "Please Choose What Do You Want To Search About :" << endl;
	cout << "Date [D] / Number of task [N] / Title [T] " << endl;
	cin >> choices;
	if (choices == 'd' || choices == 'D'){
		for (int i = 0; i<c; i++){
			cout << tasks[i].title <<"  "<<tasks[i].due_date.day<<'/'<<tasks[i].due_date.month<<'/'<<tasks[i].due_date.year<< endl;
		}
		char chooseDateSearch;
		cout << " Specific Date[S] / Day [D] / Month [M] / Year [Y] :" << endl;
		cin >> chooseDateSearch;
		if (chooseDateSearch == 's' || chooseDateSearch == 'S'){
			int day, month, year;
			cout << "Enter the date of the task you want to search : \n";
			cin >> day >> month >> year;
			for (int i = 0; i < c; i++)
			{
				if (tasks[i].due_date.day == day && tasks[i].due_date.month == month && tasks[i].due_date.year == year)
				{
					cout << tasks[i].priority << "  " << tasks[i].title << endl;
					cout << tasks[i].details << endl;
					cout << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
				}
			}
		}
		
		else if (chooseDateSearch == 'd' || chooseDateSearch == 'D'){
			cin >> search_day;
			for (int i = 0; i<c; i++){
				if (search_day == tasks[i].due_date.day)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'm' || chooseDateSearch == 'M'){
			cin >> search_month;
			for (int i = 0; i<c; i++){
				if (search_month == tasks[i].due_date.month)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'y' || chooseDateSearch == 'Y'){
			cin >> search_year;
			for (int i = 0; i<c; i++){
				if (search_year == tasks[i].due_date.year)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
	else if (choices == 'n' || choices == 'N'){
		for (int i = 0; i < c; i++)
		{
			cout << tasks[i].title << endl;
		}
		cin >> search_number;
		
		for (int i = 0; i<c; i++){
			if (search_number == (i + 1))
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
		}
	}
	else if (choices == 't' || choices == 'T'){
		cout << " Enter Title Of The Task Want Search For " << endl;
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << endl;
		}
		getline(cin >> ws, search);
		for (int i = 0; i < c; i++){
			if (tasks[i].title.find(search) != -1){
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
}
void search_taskSpanish(task tasks[100]) {
	int search_day, search_month, search_year, search_number;
	char choices;
	string search;
	cout << "Por favor elegir que quieres buscar sobre :" << endl;
	cout << "Fecha [F] / Numero de tarea [N] / Titulo [T] " << endl;
	cin >> choices;
	if (choices == 'f' || choices == 'F'){
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << "  " << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
		}
		char chooseDateSearch;
		cout << " Especificos dia[E] / Dia [D] / Mes [M] / Ano [A] :" << endl;
		cin >> chooseDateSearch;
		if (chooseDateSearch == 'e' || chooseDateSearch == 'E'){
			int day, month, year;
			cout << "Introduzca la fecha de la tearea de que deseas pusqueda : \n";
			cin >> day >> month >> year;
			for (int i = 0; i < c; i++)
			{
				if (tasks[i].due_date.day == day && tasks[i].due_date.month == month && tasks[i].due_date.year == year)
				{
					cout << tasks[i].priority << "  " << tasks[i].title << endl;
					cout << tasks[i].details << endl;
					cout << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
				}
			}
		}

		else if (chooseDateSearch == 'd' || chooseDateSearch == 'D'){
			cin >> search_day;
			for (int i = 0; i<c; i++){
				if (search_day == tasks[i].due_date.day)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'm' || chooseDateSearch == 'M'){
			cin >> search_month;
			for (int i = 0; i<c; i++){
				if (search_month == tasks[i].due_date.month)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'a' || chooseDateSearch == 'A'){
			cin >> search_year;
			for (int i = 0; i<c; i++){
				if (search_year == tasks[i].due_date.year)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
	else if (choices == 'n' || choices == 'N'){
		for (int i = 0; i < c; i++)
		{
			cout << tasks[i].title << endl;
		}
		cin >> search_number;

		for (int i = 0; i<c; i++){
			if (search_number == (i + 1))
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
		}
	}
	else if (choices == 't' || choices == 'T'){
		cout << " Introduzca el titulo de tarea " << endl;
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << endl;
		}
		getline(cin >> ws, search);
		for (int i = 0; i < c; i++){
			if (tasks[i].title.find(search) != -1){
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
}
void search_taskFrench(task tasks[100]){
	int search_day, search_month, search_year, search_number;
	char choices;
	string search;
	cout << "S'il vous plait choicir que voulez-vous a la recherche au sujet :" << endl;
	cout << "Date [D] / Nombre de tache [N] / Titre [T] " << endl;
	cin >> choices;
	if (choices == 'd' || choices == 'D'){
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << "  " << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
		}
		char chooseDateSearch;
		cout << " Date specifique[S] / Jour [J] / Mois [M] / Annee [A] :" << endl;
		cin >> chooseDateSearch;
		if (chooseDateSearch == 's' || chooseDateSearch == 'S'){
			int day, month, year;
			cout << "Entrer la date de la tache : \n";
			cin >> day >> month >> year;
			for (int i = 0; i < c; i++)
			{
				if (tasks[i].due_date.day == day && tasks[i].due_date.month == month && tasks[i].due_date.year == year)
				{
					cout << tasks[i].priority << "  " << tasks[i].title << endl;
					cout << tasks[i].details << endl;
					cout << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
				}
			}
		}

		else if (chooseDateSearch == 'j' || chooseDateSearch == 'J'){
			cin >> search_day;
			for (int i = 0; i<c; i++){
				if (search_day == tasks[i].due_date.day)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'm' || chooseDateSearch == 'M'){
			cin >> search_month;
			for (int i = 0; i<c; i++){
				if (search_month == tasks[i].due_date.month)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'a' || chooseDateSearch == 'A'){
			cin >> search_year;
			for (int i = 0; i<c; i++){
				if (search_year == tasks[i].due_date.year)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
	else if (choices == 'n' || choices == 'N'){
		for (int i = 0; i < c; i++)
		{
			cout << tasks[i].title << endl;
		}
		cin >> search_number;

		for (int i = 0; i<c; i++){
			if (search_number == (i + 1))
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
		}
	}
	else if (choices == 't' || choices == 'T'){
		cout << " Entrer le titre de la tache " << endl;
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << endl;
		}
		getline(cin >> ws, search);
		for (int i = 0; i < c; i++){
			if (tasks[i].title.find(search) != -1){
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
}
void search_task_italian(task tasks[100]){
	int search_day, search_month, search_year, search_number;
	char choices;
	string search;
	cout << "Si prega di scegliere cosa vuoi per la ricerca :" << endl;
	cout << "Data [D] / Numero di compito [N] / Titolo [T] " << endl;
	cin >> choices;
	if (choices == 'd' || choices == 'D'){
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << "  " << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
		}
		char chooseDateSearch;
		cout << " Specifiche giorno[S] / giorno [G] / Mese [M] / Year [A]  :" << endl;
		cin >> chooseDateSearch;
		if (chooseDateSearch == 's' || chooseDateSearch == 'S'){
			int day, month, year;
			cout << "Inserisce la data di compito che si desidera ricerca : \n";
			cin >> day >> month >> year;
			for (int i = 0; i < c; i++)
			{
				if (tasks[i].due_date.day == day && tasks[i].due_date.month == month && tasks[i].due_date.year == year)
				{
					cout << tasks[i].priority << "  " << tasks[i].title << endl;
					cout << tasks[i].details << endl;
					cout << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << endl;
				}
			}
		}

		else if (chooseDateSearch == 'g' || chooseDateSearch == 'G'){
			cin >> search_day;
			for (int i = 0; i<c; i++){
				if (search_day == tasks[i].due_date.day)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'm' || chooseDateSearch == 'M'){
			cin >> search_month;
			for (int i = 0; i<c; i++){
				if (search_month == tasks[i].due_date.month)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
		else if (chooseDateSearch == 'a' || chooseDateSearch == 'A'){
			cin >> search_year;
			for (int i = 0; i<c; i++){
				if (search_year == tasks[i].due_date.year)
					cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}
	else if (choices == 'n' || choices == 'N'){
		for (int i = 0; i < c; i++)
		{
			cout << tasks[i].title << endl;
		}
		cin >> search_number;

		for (int i = 0; i<c; i++){
			if (search_number == (i + 1))
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
		}
	}
	else if (choices == 't' || choices == 'T'){
		cout << " Inserire il titolo del compito " << endl;
		for (int i = 0; i<c; i++){
			cout << tasks[i].title << endl;
		}
		getline(cin >> ws, search);
		for (int i = 0; i < c; i++){
			if (tasks[i].title.find(search) != -1){
				cout << tasks[i].priority << "  " << tasks[i].title << "\t" << tasks[i].due_date.day << '/' << tasks[i].due_date.month << '/' << tasks[i].due_date.year << '\n' << tasks[i].details << endl << endl;
			}
		}
	}

}
