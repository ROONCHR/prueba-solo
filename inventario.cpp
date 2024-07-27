#include <iostream>
#include <cstdlib>
#include "biblioteca.h"
#include "funciones.h"
#include <string>
#include <ctime>
#include <string>


comunicacion comu [10] = {   //muestra los datos ya almacenados de comunicacion
    {"Carlos Fernandez", 2016, 450, "Teoria y Practica de la Comunicacion", 101,2},
	{"Ana Martinez", 2019, 380, "Comunicacion Interpersonal en el Ambito Academico", 102,1},
    {"Jorge Ramirez", 2021, 410, "Comunicacion Digital para Estudiantes Universitarios", 103,2}
};
matematica mate [10] = {   //muestra los datos ya almacenados de matematica
	{"Erwin Kreyszig",2007,1272,"Matematicas avanzadas para ingenieros", 104,3},
	{"Granville, Smith y Longley",2012,960,"Calculo diferencial e integral", 103,2},
	{"Serge Lang",1996,480,"Algebra Lineal", 105,2}
};
programacion progr [10] = {   //muestra los datos ya almacenados de programacion
	{"Luis Torres",2018,520,"Introduccion a la Programacion con Python", 106,1},
	{"Marta Sanchez",2017,480,"Programacion en Java para Universitarios", 107,2},
	{"Jose Hernandez",2020,550,"Fundamentos de Programacion en C++", 108,3}
};
quimica quimi [10] = {   //muestra los datos ya almacenados de quimica
	{"Ricardo Morales",2016,700,"Quimica General: Principios y Aplicaciones Modernas", 109,1},
	{"Ana Fernandez",2018,640,"Quimica Organica: Teoria y Practica",110,2},
	{"Javier Gomez",2019,580,"Quimica Inorganica para Estudiantes Universitarios",111,1}
};
historia hist [10] = {   //muestra los datos ya almacenados de historia
	{"Laura Rodriguez",2015,720,"Historia Contemporanea: Desde la Revolucion Francesa hasta la Globalizacion",112,2},
	{"Miguel Alvarez",2017,650,"Historia de America Latina: Colonizacion y Desarrollo",113,1},
	{"Carmen Sanchez",2020,600,"Historia de Espania: Desde los Visigodos hasta la Democracia",114,1}
};


void mostrar(int numcateg){
	Logo();
	if(numcateg == 1) {   //muestra al usuario los datos del libro de comunicacion
    	for(int a = 0; a < 10; a++) {
        	if(comu[a].ID1 != 0) {
         	   cout << "\t\t\t\t\tL" << a + 1 << "    ID: " << comu[a].ID1 << "   NOMBRE: " << comu[a].Nombre1 << endl << "\t\t\t\t\t\t\t         AUTOR: " ;
          	  cout << comu[a].Autor1 << comu[a].Anio1 << "   PAG: " << comu[a].paginas1<< endl << "\t\t\t\t\t\t\t         CANT: " << comu[a].cantidad1 << endl;              
     		   }
   		 }
	} else if(numcateg == 2) {   //muestra al usuario los datos del libro de matematica
    	for(int a = 0; a < 10; a++) {
       	 if(mate[a].ID2 != 0) {
          	  cout << "\t\t\t\t\tL" << a + 1 << "    ID: " << mate[a].ID2 << "   NOMBRE: " << mate[a].Nombre2 << endl << "\t\t\t\t\t\t\t         AUTOR: ";
          	  cout << mate[a].Autor2 << mate[a].Anio2 << "   PAG: " << mate[a].paginas2<<  endl<< "\t\t\t\t\t\t\t         CANT: " << mate[a].cantidad2 << endl;         
       		 }
    	}
	} else if(numcateg == 3) {   //muestra al usuario los datos del libro de programacion
   	 	for(int a = 0; a < 10; a++) {
        	if(progr[a].ID3 != 0) {
            	cout << "\t\t\t\t\tL" << a + 1  << "    ID: " << progr[a].ID3  << "   NOMBRE: " << progr[a].Nombre3 << endl << "\t\t\t\t\t\t\t         AUTOR: ";
				cout << progr[a].Autor3 << progr[a].Anio3<< "   PAG: " << progr[a].paginas3<< endl << "\t\t\t\t\t\t\t         CANT: " << progr[a].cantidad3 << endl;           
      		  }
    	}
	} else if(numcateg == 4) {   //muestra al usuario los datos del libro de quimica
    	for(int a = 0; a < 10; a++) {
        	if(quimi[a].ID4 != 0) {
          	  	cout << "\t\t\t\t\tL" << a + 1  << "    ID: " << quimi[a].ID4 << "   NOMBRE: " << quimi[a].Nombre4 << endl << "\t\t\t\t\t\t\t         AUTOR: ";
            	cout << quimi[a].Autor4 << quimi[a].Anio4    << "   PAG: " << quimi[a].paginas4 << endl << "\t\t\t\t\t\t\t         CANT: " << quimi[a].cantidad4 << endl;        
        	}
    	}
	} else if(numcateg == 5) {   //muestra al usuario los datos del libro de historia
    	for(int a = 0; a < 10; a++) {
        	if(hist[a].ID5 != 0) {
            	cout << "\t\t\t\t\tL" << a + 1 << "    ID: " << hist[a].ID5 << "   NOMBRE: " << hist[a].Nombre5 << endl << "\t\t\t\t\t\t\t         AUTOR: " ;
            	cout  << hist[a].Autor5 << hist[a].Anio5  << "   PAG: " << hist[a].paginas5   << endl << "\t\t\t\t\t\t\t         CANT: " << hist[a].cantidad5 << endl;      
        	}
    	}
	}else{
    	cout<<" dato incorrecto"<<endl;
	}	
}

