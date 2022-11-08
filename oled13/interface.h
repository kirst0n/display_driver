#ifndef __MENU_CTRL_H
#define __MENU_CTRL_H

#include "lcd.h"
 #include "stdint.h"

#define SCREEN_MAIN_DATA       0
#define SCREEN_MAIN_MENU       1
#define SCREEN_SET_PPARAM      2


#define INVERSE                1
#define NO_INVERSE             0

#define MODE_CTRL_AUTO         0
#define MODE_CTRL_MANUAL1      1
#define MODE_CTRL_MANUAL5      2
#define MODE_CTRL_MANUAL10     3
#define MODE_CTRL_MANUAL25     4
#define MODE_CTRL_DIAGNOST     5

#define MODE_ROTATION_RIGHT    0
#define MODE_ROTATION_LEFT     1

#define MODE_DRIVER_ROTATE     0
#define MODE_DRIVER_LINE       1

#define MODE_DIRECTION_FORWARD 0
#define MODE_DIRECTION_REVERSE 1

#define MODE_FEEDBACK_FORWARD  0
#define MODE_FEEDBACK_REVERSE  1

#define MODE_CHARACTER_LINE    0
#define MODE_CHARACTER_PERCENT 1
#define MODE_CHARACTER_USER    3

#define MODE_LANG_RUS		   0
#define MODE_LANG_ENG		   1
#define MODE_LANG_CHI		   2

#define MODE_DISPLAY_NORMAL    0
#define MODE_DISPLAY_REVERSE   1

//дефайны нажатой кнопки
#define BUTTON_NO			   0
#define BUTTON_BACK			   1
#define BUTTON_DOWN			   2
#define BUTTON_UP			   3
#define BUTTON_ENTER		   4


#define TYPE1 250 // заглушка для типа

#define MENU_SELECT_TYPE_AUTO  		0
#define MENU_SELECT_TYPE_MAN1  		1
#define MENU_SELECT_TYPE_MAN5  		2
#define MENU_SELECT_TYPE_MAN10  	3
#define MENU_SELECT_TYPE_MAN25  	4
#define MENU_SELECT_TYPE_DIAG  		41
#define MENU_SELECT_TYPE_ROTAT_FORV  		5
#define MENU_SELECT_TYPE_ROTAT_BACK  		6
#define MENU_SELECT_TYPE_DRV_ROT 		7
#define MENU_SELECT_TYPE_DRV_LINE  		8
#define MENU_SELECT_TYPE_POS_FORV  		9
#define MENU_SELECT_TYPE_POS_BACK  		10
#define MENU_SELECT_TYPE_FEEDBACK_FORV  		11
#define MENU_SELECT_TYPE_FEEDBACK_BACK  		12
#define MENU_SELECT_TYPE_CHAR_LINE  		13
#define MENU_SELECT_TYPE_CHAR_PERC  		14
#define MENU_SELECT_TYPE_CHAR_USER  		15
#define MENU_SELECT_TYPE_LANG_RU  		16
#define MENU_SELECT_TYPE_LANG_EN  		17
#define MENU_SELECT_TYPE_LANG_CH  18
#define MENU_SELECT_TYPE_DISP_NORM  19
#define MENU_SELECT_TYPE_DISP_REV  20


typedef struct menuItem{
        void       *Next;
	    void       *Previous;
	    void       *Parent;
	    void       *Child;
        void       *NextScreen;
   	    uint8_t     Select;
        uint8_t     onParam;
        float       Param;
        uint8_t     textSize;
        uint8_t     typeOfData;
        uint8_t     type2;
        uint8_t     type3;
        char  Text[];
} menuItem;

typedef struct screenItem{
        void       *Previous;
        uint8_t    typeScreen;
        uint8_t    index;
        float      *value_addr;
        float      current_value;
        uint8_t    digits;
        uint8_t    fractional;
        char       Text[];

}screenItem;

typedef struct lcdDate{
uint8_t day;
uint8_t month;
uint8_t year;
}lcdDate;


typedef struct displayData{

uint8_t pushedButton;   //кнопка дефайны BUTTON_NO, BUTTON_BACK, BUTTON_DOWN, BUTTON_UP, BUTTON_ENTER
uint8_t curScreen;     // тип экрана который отображатеся, основной  SCREEN_MAIN_DATA  меню SCREEN_MAIN_MENU, установка параметров SCREEN_SET_PPARAM

uint8_t modeCtrl;   //тип режима управления авто MODE_CTRL_AUTO, ручной MODE_CTRL_MANUAL25, диагностика MODE_CTRL_DIAGNOST
float settingPer;   //уставка в %
float settingCur;   // уставка в мА
float positionPer;   // положение в %
float positionCur;   // положение в мА
float errorPer;      // рассоглосование
float curPosStockDeg; // положение штока в град
float inPressure;    // входное давление
float outPressure1; // исх давл1
float outPressure2; // исх давл2
float topLimitDeg;  //верхнее ограничение в град
float botLimitDeg;  //нижнее ограничение в град
float temperature;  //температура
uint32_t workingTime; //вообще написано в часах, можно в минутах или секундах мерить и выводить в часах;
uint32_t idNumber;    //ид номер
lcdDate lastService;   //последнее обслуживание
lcdDate nextService;   //след обсл.

uint8_t rotationMode;  //тип вращения MODE_ROTATION_RIGHT по часовой, MODE_ROTATION_LEFT против
uint8_t driverMode;   //тип привода  MODE_DRIVER_ROTATE поворотный и MODE_DRIVER_LINE линейный
uint8_t directionPosMode;  //действие позиционера MODE_DIRECTION_FORWARD прямое и обратное MODE_DIRECTION_REVERSE
uint8_t feedbackMode;  // действие обратной связи  MODE_FEEDBACK_FORWARD и  MODE_FEEDBACK_REVERSE
uint8_t charachMode;  //характеристика  линейная MODE_CHARACTER_LINE, равнопроцентная  MODE_CHARACTER_PERCENT, пользовательская MODE_CHARACTER_USER

float valve0Per;    //пределы клапан 0%
float valve100Per;  //пределы клапан 100%

float limit0Per;    //нижний предел 0%
float limit100Per;  //верхний предел 100%

float cut0Per;   //отсечка 0%
float cut100Per; //отсечка 100%

float Pinc;      // пид
float Iinc;
float Dinc;

float Pdec;
float Idec;
float Ddec;

float deadZoneUp;     //зона нечувствительности
float deadZoneDown;

uint8_t lang;      //язык
uint8_t displayMode; //режим отображения

float input4mA;   // настройка вх ток петли
float input20mA;

float output4mA;  // настройка исх ток петли
float output20mA;

float angle45DegPlus;   //настройка углов
float angle45DegMinus;


}displayData;



extern menuItem menu_Diag0;
extern menuItem menu_Diag1_0;
extern menuItem menu_Diag1_1 ;
extern menuItem menu_Diag1_2;
extern menuItem menu_Diag1_3;
extern menuItem menu_Diag1_4;
extern menuItem menu_Diag1_5;
extern menuItem menu_Diag1_6;
extern menuItem menu_Diag1_7;
extern menuItem menu_Diag1_8;
extern menuItem menu_Diag1_9;
extern menuItem menu_Diag1_10;
extern menuItem menu_Diag1_11;
extern menuItem menu_Diag1_12;
extern menuItem menu_Diag1_13;
extern menuItem menu_Diag1_14;
extern menuItem menu_Diag1_15;
extern menuItem menu_Diag1_16;
extern menuItem menu_Diag1_17;
extern menuItem menu_Diag1_18;

extern menuItem menu_Mode_0;

extern menuItem menu_ModeAuto_1_0;
extern menuItem menu_ModeManual_1_1;
extern menuItem menu_ModeSpeed_1_2;
extern menuItem menu_ModeSetup_1_3;

extern menuItem menu_ModeManual_1_1_0;
extern menuItem menu_ModeManual_1_1_1;
extern menuItem menu_ModeManual_1_1_2;
extern menuItem menu_ModeManual_1_1_3;
extern menuItem menu_ModeManual_1_1_4;

extern menuItem menu_ModeSetup_1_3_0;
extern menuItem menu_ModeSetup_1_3_1;
extern menuItem menu_ModeSetup_1_3_2;
extern menuItem menu_ModeSetup_1_3_3;
extern menuItem menu_ModeSetup_1_3_4;

extern menuItem menu_ModeSetupConf_1_3_0_0;
extern menuItem menu_ModeSetupConf_1_3_0_1;
extern menuItem menu_ModeSetupConf_1_3_0_2;
extern menuItem menu_ModeSetupConf_1_3_0_3;
extern menuItem menu_ModeSetupConf_1_3_0_4;

extern menuItem menu_ModeSetupAStart_1_3_1_0;
extern menuItem menu_ModeSetupAStart_1_3_1_1;
extern menuItem menu_ModeSetupAStart_1_3_1_2;
extern menuItem menu_ModeSetupAStart_1_3_1_3;
extern menuItem menu_ModeSetupAStart_1_3_1_4;

extern menuItem menu_ModeSetupLim_1_3_2_0;
extern menuItem menu_ModeSetupLim_1_3_2_1;
extern menuItem menu_ModeSetupLim_1_3_2_2;
extern menuItem menu_ModeSetupLim_1_3_2_3;
extern menuItem menu_ModeSetupLim_1_3_2_4;
extern menuItem menu_ModeSetupLim_1_3_2_5;

extern menuItem menu_ModeSetupReg_1_3_3_0;
extern menuItem menu_ModeSetupReg_1_3_3_1;
extern menuItem menu_ModeSetupReg_1_3_3_2;
extern menuItem menu_ModeSetupReg_1_3_3_3;
extern menuItem menu_ModeSetupReg_1_3_3_4;
extern menuItem menu_ModeSetupReg_1_3_3_5;
extern menuItem menu_ModeSetupReg_1_3_3_6;

extern menuItem menu_ModeSetupServ_1_3_4_0;
extern menuItem menu_ModeSetupServ_1_3_4_1;
extern menuItem menu_ModeSetupServ_1_3_4_2;
extern menuItem menu_ModeSetupServ_1_3_4_3;
extern menuItem menu_ModeSetupServ_1_3_4_4;

extern menuItem menu_ModeSetupConf_1_3_0_0_0 ;
extern menuItem menu_ModeSetupConf_1_3_0_0_1 ;

extern menuItem menu_ModeSetupConf_1_3_0_1_0 ;
extern menuItem menu_ModeSetupConf_1_3_0_1_1 ;

extern menuItem menu_ModeSetupConf_1_3_0_2_0 ;
extern menuItem menu_ModeSetupConf_1_3_0_2_1 ;

extern menuItem menu_ModeSetupConf_1_3_0_3_0 ;
extern menuItem menu_ModeSetupConf_1_3_0_3_1 ;

extern menuItem menu_ModeSetupConf_1_3_0_4_0 ;
extern menuItem menu_ModeSetupConf_1_3_0_4_1 ;
extern menuItem menu_ModeSetupConf_1_3_0_4_2 ;

extern menuItem menu_ModeSetupServ_1_3_4_0_0 ;
extern menuItem menu_ModeSetupServ_1_3_4_0_1 ;
extern menuItem menu_ModeSetupServ_1_3_4_0_2 ;

extern menuItem menu_ModeSetupServ_1_3_4_1_0 ;
extern menuItem menu_ModeSetupServ_1_3_4_1_1 ;

extern menuItem menu_ModeSetupServ_1_3_4_2_0 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_1 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_2 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_3 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_4 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_5 ;
extern menuItem menu_ModeSetupServ_1_3_4_2_6 ;

extern displayData dsData;

#ifdef	__cplusplus
extern "C" {
#endif
void  MakeMenu(menuItem *str, void *Next, void *Previous, void *Parent, void *Child, void *Screen);
void  InitMenu(void);
void RefreshMenu();

#ifdef	__cplusplus
}




#endif

#endif
