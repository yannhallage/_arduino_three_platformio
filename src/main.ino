#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Définir la configuration des touches du clavier
const byte ROW_NUM = 4;    // Nombre de lignes du clavier
const byte COLUMN_NUM = 4; // Nombre de colonnes du clavier

char keys[ROW_NUM][COLUMN_NUM] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

// Définir les broches auxquelles les lignes et les colonnes du clavier sont connectées
byte pin_rows[ROW_NUM] = {9, 8, 7, 6};      // Lignes
byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; // Colonnes

// Créer un objet Keypad
Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

#define LCD_ADDR 0x27
#define LCD_COLUMNS 16
#define LCD_ROWS 2
#define tst HIGH

LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLUMNS, LCD_ROWS);

#define red 13
#define orange 12
#define vert 11
#define button 10;
String text = "FERMER !";

int tableCouleur[] = {red, orange, vert};
String touchValeur = "";
String ValeurCode = "1969";
String NameCouleur[] = {"couleur rouge", "couleur orange", "couleur vert"};

void setup()
{

  Serial.begin(9600); // Initialiser la communication série

  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(vert, OUTPUT);

  lcd.init();      // Initialise l'écran
  lcd.backlight(); // Active le rétroéclairage

  lcd.setCursor(5, 0); // Colonne 5, ligne 0
  lcd.print(text);
}

void loop()
{

  digitalWrite(red, tst);
  char const variable_no = 'D';
  char key = keypad.getKey(); // Lire la touche pressée

  if (key)
  {
    if (key == variable_no)
    {
      Serial.println("le button D a été cliquer");
      function_valeurCode(touchValeur);
    }
    else
    {
      touchValeur += key;
      Serial.println(touchValeur);
    }
  }
}

void function_valeurCode(String code)
{
  if (code != "")
  {
    if (code == ValeurCode)
    {
      Serial.println("code correspondant");
    }
    else
    {
      Serial.println("code non correspondant");
    }
  }
}

void executer(int broche)
{

  lcd.clear();
  lcd.setCursor(4, 0); // Colonne 5, ligne 0
  lcd.print(NameCouleur[broche]);
}
void executers(String text)
{

  lcd.clear();
  lcd.setCursor(5, 0); // Colonne 5, ligne 0
  lcd.print(text);
}