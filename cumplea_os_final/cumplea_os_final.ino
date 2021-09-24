  int dia = 10;
  int mes = 11;
  int year = 2018;
  int dia_actual = 11;
  int mes_actual = 9;
  int year_actual = 2021;
  int dia_agrupacion = 0;
  String diaSem[] = {"lunes", "martes", "miercoles", "jueves" , "viernes", "sabado", "domingo"} ;
  int dias_enero = 31, dias_febrero = 28, dias_marzo = 31, dias_abril = 30, dias_mayo = 31, dias_junio = 30, dias_julio = 31, dias_agosto = 31, dias_septiembre = 30, dias_octubre = 31, dias_noviembre = 30, dias_diciembre = 31;
  int dia_resta;
  int dias_acum;
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
 for(int contador_years = year_actual; contador_years >= year; contador_years -- ){
  Serial.println(contador_years);
  // esta condicion se coloca para saber que año es bisiesto y poder agregarlo a los dias acumulados
  if(contador_years % 4 == 0){
    dias_acum ++;

  }
  if(contador_years == year){
    for(int contador_meses = 12; contador_meses >= mes; contador_meses --){
      if(contador_meses == mes){
        dias_acum = dias_acum + (identificar_mes(contador_meses) - dia);
      }else{
        dias_acum = dias_acum + identificar_mes(contador_meses);  
      }

    }

  }
  else if (contador_years == year_actual){
    Serial.println("voy a contar meses");
    for(int contador_meses = mes_actual ; contador_meses >= 1 ; contador_meses --){
      if(contador_meses == mes_actual){
       dias_acum = dia_actual;

      }else{
        dias_acum = dias_acum + identificar_mes(contador_meses);
      }

    }
  }else{
    dias_acum = dias_acum + 365;
  }
 }
  algoritmoFinal();

  Serial.println(dias_acum);
  
}

  void algoritmoFinal(){
     
   for(contador=0; contador < dias_acum ; contador ++){
    
      
      dia_resta --;
 
      if(dia_resta == 0){
        dia_resta = 8;
         
      }
   
   }
   Serial.println(dia_resta);
  }
 
void loop() {
}
     
    