 int dia = 10;
  int mes = 12;
  int year = 2005;
  int dia_actual = 11;
  int mes_actual = 9;
  int year_actual = 2021;
  int dia_agrupacion = 0;
  String diaSem[] = {"lunes", "martes", "miercoles", "jueves" , "viernes", "sabado", "domingo"} ;
  int dias_enero = 31, dias_febrero = 28, dias_marzo = 31, dias_abril = 30, dias_mayo = 31, dias_junio = 30, dias_julio = 31, dias_agosto = 31, dias_septiembre = 30, dias_octubre = 31, dias_noviembre = 30, dias_diciembre = 31;
  int dia_resta;
  int diferencia;
  int contador;
  boolean flag = 0;
  String dia_hoy = "sabado";
  
int identificar_mes (int x){
  if (x == 1 or x == 3 or x == 5 or x == 7 or x == 8 or x == 10 or x == 12 ){
    return 31;
  }
  else if (x == 4 or x == 6 or x == 9 or x == 11 ){
    return 30;

  }
  else if(x == 2){
    return 28;
  }
}

void setup() {
  Serial.begin(9600);

  
}

  void algoritmoFinal(){
     diferencia = dia;
   for(contador=0; contador < diferencia; contador ++){
    
      
      dia_resta ++;
 
      if(dia_resta == 8){
        dia_resta = 0;
         
      }
   
   }
  }
void loop() {
}
     
    