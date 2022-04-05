void setup(){
    Serial.begin(115200);
    delay(10);
}

void imprimirLinea(int linea, int caracter){
    int blancos = caracter - linea - 1;
    for (int i=0;i<blancos;i++){
        Serial.print(" ");
    }
    int caracteres = 1 + linea * 2;
    for (int j = 0; j<caracteres;j++){
        Serial.print(caracter);
    }
    Serial.println();
}

void loop(){
    bool recibido = false;
    int numero;
    if(Serial.available()){
        numero = Serial.parseInt(SKIP_ALL,char("0"));
        delay(1);
        recibido = true;
        delay(1);
    }
    if(recibido){
        for(int x = 0; x < numero; x++){
            imprimirLinea(x, numero);
        }
    }
}
