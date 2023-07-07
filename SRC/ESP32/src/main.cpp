#include "header.h"

// Menu *menu = &MainMenu;

// void setup(){
//   Serial.begin(115200);
//   Serial.println(__FILE__);

//   Wire.begin(D1, D2);
//   Wire.setClock(700000);

//   pinMode(D5, INPUT_PULLUP);
//   pinMode(D6, INPUT_PULLUP);
//   attachInterrupt(digitalPinToInterrupt(D6), keyChanged, FALLING);

//   DS1307_init();
//   keyPad_init();
//   LCD_startup();

//   LCD_SpecChars();

//   DS1307_time_update();
//   MenuDisplay(menu,lcd_select);

//   relays.relayall = 0xFF;
// }

// void loop(){
//   char buffer=relays.relayall;
//   DS1037_get_time();
//   TIME *p;
//   p=&DS1307_TIME;

//   if(second_buff != p->SECOND){
//     DS1307_time_store();
//     second_buff = p->SECOND;
//   }

//   char pad_chart = interrupts_getkey(keyChange);
//   if(pad_chart !='N'){
//     if(pad_chart == 'A') {
//       if(pad_chart == 'A') delay(175);
//       lcd_select = (lcd_select==1)?3:lcd_select-1;
//       switch(menu->MenuID){
//         case Got_Title: lcd_select = (lcd_select==1)?3:lcd_select-1; break;
//         case Main_Menu: lcd_select = (lcd_select==1)?3:lcd_select-1; break;
//         case OnOffRelay: lcd_select = (lcd_select==1)?3:lcd_select-1; break;
//         case TimerRelay: lcd_select = (lcd_select==1)?3:lcd_select-1; break;
//         default: lcd_select = (lcd_select==0)?3:lcd_select-1;

//       } 
//     }

//     if(pad_chart == 'D') {
//       if(pad_chart == 'D') delay(175);
//       lcd_select = (lcd_select==3)?1:lcd_select+1;
//       switch(menu->MenuID){
//         case Got_Title: lcd_select = (lcd_select==3)?1:lcd_select+1; break;
//         case Main_Menu: lcd_select = (lcd_select==3)?1:lcd_select+1; break;
//         case OnOffRelay: lcd_select = (lcd_select==3)?1:lcd_select+1; break;
//         case TimerRelay: lcd_select = (lcd_select==3)?1:lcd_select+1; break;
//         default: lcd_select = (lcd_select==3)?0:lcd_select+1;
//       }
//     }

//     if(pad_chart == 'C') {
//       if(pad_chart == 'C') delay(175);
//       switch (lcd_select){
//       case 0: menu=(menu->Menulist0==NULL)?menu:menu->Menulist0; break;
//       case 1: menu=(menu->Menulist1==NULL)?menu:menu->Menulist1; break;
//       case 2: menu=(menu->Menulist2==NULL)?menu:menu->Menulist2; break;
//       case 3: menu=(menu->Menulist3==NULL)?menu:menu->Menulist3; break;
//       }
//       new_menu=1; 
//     }

//     if(pad_chart == 'B') {
//       if(pad_chart == 'B') delay(175);
//       menu=(menu->pre==NULL)?menu:menu->pre;
//       new_menu=1;
//     }
    
//     if(pad_chart == '*') {
//       if(pad_chart == '*') delay(175);
//       ActualActivation(menu, lcd_select);
//       new_menu=1;
//     }

//     if(new_menu==1) {  lcd.clear();  new_menu = 0; 
//     }

//     MenuDisplay(menu,lcd_select);
//     ActivationDisplay(menu);
//   }
  
//   if(menu->MenuID==Main_Menu) LCD_print_time();

//   Serial.println(relays.relayall, HEX);
  
//   if(TimerFlag[0]||TimerFlag[1]||TimerFlag[2]||TimerFlag[3]||TimerFlag[4]||TimerFlag[5]||TimerFlag[6]||TimerFlag[7]) RelayAuto(); 

//   if((buffer != relays.relayall)||TimerWrite) {
//     RelayOut(RelayI2C, relays.relayall);
//     buffer = relays.relayall;
//     TimerWrite=0;
//   }
// }
