  int dia;
  int mes;
  int year;
  int dia_actual;
  int mes_actual;
  int year_actual;
  int dia_agrupacion;
  String diaSem[] = {"lunes", "martes", "miercoles", "jueves" , "viernes", "sabado", "domingo"} ;
  int dias_enero = 31, dias_febrero = 28, dias_marzo = 31, dias_abril = 30, dias_mayo = 31, dias_junio = 30, dias_julio = 31, dias_agosto = 31, dias_septiembre = 30, dias_octubre = 31, dias_noviembre = 30, dias_diciembre = 31;
  int dia_resta;
  int dias_acum;
  int contador;
  boolean flag = false;
  String dia_hoy;
  
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
  if(flag == false){
    Serial.println("*******************************************************************************************************************************************************************************************************");
    Serial.println("hola para poder saber en que dia naciste porfavor ingresa la fecha de tu nacimiento, fecha de hoy y el dia actual en el mismo orden dicho como en el siguiente ejemplo (10/12/2005; 23/09/2021; jueves)");
    Serial.print("*******************************************************************************************************************************************************************************************************");
  }
} 
  void algoritmoFinal(){
     dia_resta = dia_agrupacion;
   for(contador=0; contador < dias_acum ; contador ++){
    
      
      dia_resta --;
 
      if(dia_resta == 0){
        dia_resta = 7;
         
      }
   
   }
   Serial.println(dia_resta);
   flag = false;
  }
 
void loop() {
  if (Serial.available() > 0)
   {
      
       String dia_str = Serial.readStringUntil('/');
       dia = dia_str.toInt();

       String mes_str = Serial.readStringUntil('/');
        mes = mes_str.toInt();

        String year_str = Serial.readStringUntil(';');
        year = year_str.toInt();

        String dia_actual_str = Serial.readStringUntil('/');
        dia_actual = dia_actual_str.toInt();

        String mes_actual_str = Serial.readStringUntil('/');
       mes_actual = mes_actual_str.toInt();

       String year_actual_str = Serial.readStringUntil(';');
        year_actual = year_actual_str.toInt();
         
        String dia_hoy_str = Serial.readStringUntil('\n');
        dia_hoy_str.trim();
        dia_hoy = dia_hoy_str;

  //10/12/2005; 23/09/2021;jueves
     flag = true;
   }
   if(dia_hoy == diaSem[0]){
      dia_agrupacion = 1;

    }

    else if(dia_hoy ==  diaSem[1]){
      dia_agrupacion = 2;
    }

    else if(dia_hoy == diaSem[2]){
      dia_agrupacion = 3;
    }
     else if(dia_hoy ==  diaSem[3]){
      dia_agrupacion = 4;
    }
    else if(dia_hoy == diaSem[4]){
      dia_agrupacion = 5;
    }
    else if(dia_hoy ==  diaSem[5]){

      dia_agrupacion = 6;
    }
    else if(dia_hoy ==  diaSem[6]){
      dia_agrupacion = 7;
    }     
   if(flag == true){
 for(int contador_years = year_actual; contador_years >= year; contador_years -- ){
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



 
  if(dia_resta == 1){
  Serial.println("tu naciste un dia lunes");
  flag = false;
 }else if(dia_resta == 2){
 Serial.println("tu naciste un dia martes");
  flag = false;
 }else if(dia_resta == 3){
 Serial.println("tu naciste un dia miercoles");
  flag = false;
 }else if(dia_resta == 4){
 Serial.println("tu naciste un dia jueves");
  flag = false;
 }else if(dia_resta == 5){
 Serial.println("tu naciste un dia viernes");
  flag = false;
 }else if(dia_resta == 6){
 Serial.println("tu naciste un dia sabado");
  flag = false;
 }else if(dia_resta == 7){
 Serial.println("tu naciste un dia domingo");
 
  }
 }
}  

     
    