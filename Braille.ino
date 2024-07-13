// C++ code
int a=2,b=3,c=4;
int d=5,e=6,f=7;
char incomingChar=NULL;
void setup()
{
  Serial.begin(9600);
  Serial.print("Serial ready..."); 	
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop()
{
  
  delay(3000);
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    incomingChar=Serial.read();
    Serial.print("Character to be converted: ");
    Serial.println(incomingChar);
    if(incomingChar>='A' && incomingChar<='Z'){
      incomingChar=incomingChar+32;
    }
  }
  switch(incomingChar){
    case 'a':
        
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'b':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'c':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'd':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'e':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'f':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'g':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'h':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'i':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'j':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'k':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'l':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'm':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'n':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'o':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'p':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 'q':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'r':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 's':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case 't':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case 'u':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        break;
    case 'v':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        break;
    case 'w':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        break;
    case 'x':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        break;
    case 'y':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        break;
    case 'z':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        break;
    case '0':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case '1':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case '2':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case '3':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case '4':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case '5':
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case '6':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    case '7':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case '8':
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        break;
    case '9':
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);    
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        break;
    default:
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);    
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
}
}