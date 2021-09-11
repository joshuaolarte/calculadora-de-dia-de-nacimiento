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
  
void setup() {
  Serial.begin(9600);

}
void suma_de_meses{
  while(flag == false){


  }
}
  void algoritmoFinal(){
     diferencia = dia;
   for(contador=0; contador < diferencia; contador ++){
    
      
      dia_resta ++;
 
      if(dia_resta == 8){
        dia_resta = 0;
         
      }
    mes = 14;
   }
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

    
       
         

 // 10/12/2005; 10/09/2021;lunes
 
    
    }
    
  Serial.print("dia = ");
  Serial.print(dia);
  Serial.print("dia actual = ");
  Serial.print(dia_actual);
  Serial.print(" mes = ");  
  Serial.print(mes);
  Serial.print(" mes actual = ");  
  Serial.print(mes_actual);
  Serial.print(" año = ");  
  Serial.print(year);
  Serial.print(" dia de hoy = ");  
  Serial.print(dia_hoy);
  Serial.print(" año actual = ");  
  Serial.print(year_actual);
  Serial.print(" dia_numerico = ");  
  Serial.print(dia_agrupacion);
  Serial.print(" diferencia = ");
  Serial.print(diferencia);
  Serial.print(" contador = ");
  Serial.print(contador);
  Serial.print(" dia_resta = ");
  Serial.println(dia_resta);  
 

     // covertir el dia en un numero entero para poder realizar el algoritmo
     
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

  if(mes_actual != mes){
    dia_resta = dia_agrupacion;
  switch (mes_actual) {
  case 1:
    diferencia = diferencia + dias_enero;
   if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
  case 2:
    diferencia = diferencia + dias_febrero;
   if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 3:
     diferencia = diferencia + dias_marzo;
     if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 4:
      diferencia = diferencia + dias_abril;
  if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
  case 5:
      diferencia = diferencia + dias_mayo;
  if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 6:
     diferencia = diferencia + dias_junio;
   if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 7:
   diferencia = diferencia + dias_julio;
    if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
  case 8:
  diferencia = diferencia + dias_agosto;
    if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 9:
    diferencia = diferencia + dias_septiembre;
    if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 10:
    diferencia = diferencia + dias_octubre;
       if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
  case 11:
      diferencia = diferencia + dias_noviembre;
       if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 12:
   diferencia = diferencia + dias_diciembre;
       if(mes_actual == mes){
     algoritmoFinal();
   }
   mes_actual ++;
    break;
    case 13:
    mes_actual = 1;
    break;
    case 14:
    Serial.print("se acabo");
    break;
 
      
   
  
 
     
 
   }
  }else if(mes_actual == mes){
     algoritmoFinal();
  }
 }


  
