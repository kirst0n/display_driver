//#pragma once
#include "interface.h"


#define NULL 0


menuItem* menu_item;
uint8_t button_push; //-none, 1- cansel, 2-down, 3-up, 4-enter

float paramScreen_test;

displayData dsData;
screenItem *tmpScreen;


menuItem menu_Diag0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"Диагностика"};
menuItem menu_Diag1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"Задание [%]"};
menuItem menu_Diag1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"Задание [мА]"};
menuItem menu_Diag1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,13,TYPE1,TYPE1,TYPE1,"Положение [%]"};
menuItem menu_Diag1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,14,TYPE1,TYPE1,TYPE1,"Положение [мА]"};
menuItem menu_Diag1_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Рассогласование [%]"};
menuItem menu_Diag1_5 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Текущее положение штока [град.]"};
menuItem menu_Diag1_6 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,TYPE1,TYPE1,TYPE1,"Входное давление"};
menuItem menu_Diag1_7 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Выходное давление 1"};
menuItem menu_Diag1_8 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Выходное давление 2"};
menuItem menu_Diag1_9 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Верхнее ограничение [град.]"};
menuItem menu_Diag1_10 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Нижнее ограничение [град.]"};
menuItem menu_Diag1_11 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Температура [град. Цельсия]"};
menuItem menu_Diag1_12 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Время наработки общее [часов]"};
menuItem menu_Diag1_13 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Кол-во циклов клапана общее"};
menuItem menu_Diag1_14 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"Версия прошивки v1.0.0"};
menuItem menu_Diag1_15 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,TYPE1,TYPE1,TYPE1,"Идентификационный номер"};
menuItem menu_Diag1_16 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"Дата последнего ТО"};
menuItem menu_Diag1_17 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"Дата следующего ТО"};
menuItem menu_Diag1_18 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,TYPE1,TYPE1,TYPE1,"Ошибки"};

menuItem menu_Mode_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"Режим работы"};

menuItem menu_ModeAuto_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,MENU_SELECT_TYPE_AUTO,TYPE1,TYPE1,"1.Автоматический"};
menuItem menu_ModeManual_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,TYPE1,TYPE1,TYPE1,"2.Руч. управление"};
menuItem menu_ModeSpeed_1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,TYPE1,TYPE1,TYPE1,"3.Углы и скорость"};
menuItem menu_ModeSetup_1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"4.Настройки"};

menuItem menu_ModeManual_1_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,MENU_SELECT_TYPE_MAN1,TYPE1,TYPE1,"1.Руч. управ. 1%"};
menuItem menu_ModeManual_1_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,MENU_SELECT_TYPE_MAN5,TYPE1,TYPE1,"2.Руч. управ. 5%"};
menuItem menu_ModeManual_1_1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,MENU_SELECT_TYPE_MAN10,TYPE1,TYPE1,"3.Руч. управ. 10%"};
menuItem menu_ModeManual_1_1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,MENU_SELECT_TYPE_MAN25,TYPE1,TYPE1,"4.Руч. управ. 25%"};
menuItem menu_ModeManual_1_1_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,MENU_SELECT_TYPE_DIAG,TYPE1,TYPE1,"5.Диагностика I/P"};

menuItem menu_ModeSetup_1_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,14,TYPE1,TYPE1,TYPE1,"1.Конфигурация"};
menuItem menu_ModeSetup_1_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"2.Автостарт"};
menuItem menu_ModeSetup_1_3_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,9,TYPE1,TYPE1,TYPE1,"3.Пределы"};
menuItem menu_ModeSetup_1_3_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,15,TYPE1,TYPE1,TYPE1,"4.Регулирование"};
menuItem menu_ModeSetup_1_3_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,TYPE1,TYPE1,TYPE1,"5.Серв. настройки"};

menuItem menu_ModeSetupConf_1_3_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,TYPE1,TYPE1,TYPE1,"1.Полож. вращение"};
menuItem menu_ModeSetupConf_1_3_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,13,TYPE1,TYPE1,TYPE1,"2.Тип привода"};
menuItem menu_ModeSetupConf_1_3_0_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"3.Действ. позицион."};
menuItem menu_ModeSetupConf_1_3_0_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,20,TYPE1,TYPE1,TYPE1,"4.Действ. обр. связи"};
menuItem menu_ModeSetupConf_1_3_0_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,TYPE1,TYPE1,TYPE1,"5.Характеристика"};

menuItem menu_ModeSetupAStart_1_3_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,14,TYPE1,TYPE1,TYPE1,"1.Легкий старт"};
menuItem menu_ModeSetupAStart_1_3_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"2.Конеч. положения"};
menuItem menu_ModeSetupAStart_1_3_1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"3.Характерист. I/P"};
menuItem menu_ModeSetupAStart_1_3_1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"4.Полный автостарт"};
menuItem menu_ModeSetupAStart_1_3_1_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"5.Автоподб. парам."};

menuItem menu_ModeSetupLim_1_3_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"1.Клапан 0%"};
menuItem menu_ModeSetupLim_1_3_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,13,TYPE1,TYPE1,TYPE1,"2.Клапан 100%"};
menuItem menu_ModeSetupLim_1_3_2_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,15,TYPE1,TYPE1,TYPE1,"3.Нижний предел"};
menuItem menu_ModeSetupLim_1_3_2_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,TYPE1,TYPE1,TYPE1,"4.Верхний предел"};
menuItem menu_ModeSetupLim_1_3_2_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"5.Отсечка 0%"};
menuItem menu_ModeSetupLim_1_3_2_5 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,14,TYPE1,TYPE1,TYPE1,"6.Отсечка 100%"};

menuItem menu_ModeSetupReg_1_3_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"1.P increase"};
menuItem menu_ModeSetupReg_1_3_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"2.P decrease"};
menuItem menu_ModeSetupReg_1_3_3_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"3.I increase"};
menuItem menu_ModeSetupReg_1_3_3_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"4.I decrease"};
menuItem menu_ModeSetupReg_1_3_3_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"5.D increase"};
menuItem menu_ModeSetupReg_1_3_3_5 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"6.D decrease"};
menuItem menu_ModeSetupReg_1_3_3_6 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"7.Зона неч. спуск"};
menuItem menu_ModeSetupReg_1_3_3_7 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,TYPE1,TYPE1,TYPE1,"8.Зона неч. подъе"};

menuItem menu_ModeSetupServ_1_3_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,6,TYPE1,TYPE1,TYPE1,"1.Язык"};
menuItem menu_ModeSetupServ_1_3_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,9,TYPE1,TYPE1,TYPE1,"2.Дисплей"};
menuItem menu_ModeSetupServ_1_3_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,TYPE1,TYPE1,TYPE1,"3.Калибровка тока"};
menuItem menu_ModeSetupServ_1_3_4_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,TYPE1,TYPE1,TYPE1,"4.Сброс настроек"};
menuItem menu_ModeSetupServ_1_3_4_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,15,TYPE1,TYPE1,TYPE1,"5.Сервисный код"};

menuItem menu_ModeSetupConf_1_3_0_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,MENU_SELECT_TYPE_ROTAT_FORV,TYPE1,TYPE1,"1.По часовой"};
menuItem menu_ModeSetupConf_1_3_0_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,16,MENU_SELECT_TYPE_ROTAT_BACK,TYPE1,TYPE1,"2.Против часовой"};

menuItem menu_ModeSetupConf_1_3_0_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,MENU_SELECT_TYPE_DRV_ROT,TYPE1,TYPE1,"1.Поворотный"};
menuItem menu_ModeSetupConf_1_3_0_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,MENU_SELECT_TYPE_DRV_LINE,TYPE1,TYPE1,"2.Линейный"};

menuItem menu_ModeSetupConf_1_3_0_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,8,MENU_SELECT_TYPE_POS_FORV,TYPE1,TYPE1,"1.Прямой"};
menuItem menu_ModeSetupConf_1_3_0_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,MENU_SELECT_TYPE_POS_BACK,TYPE1,TYPE1,"2.Обратный"};

menuItem menu_ModeSetupConf_1_3_0_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,8,MENU_SELECT_TYPE_FEEDBACK_FORV,TYPE1,TYPE1,"1.Прямой"};
menuItem menu_ModeSetupConf_1_3_0_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,MENU_SELECT_TYPE_FEEDBACK_BACK,TYPE1,TYPE1,"2.Обратный"};

menuItem menu_ModeSetupConf_1_3_0_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,MENU_SELECT_TYPE_CHAR_LINE,TYPE1,TYPE1,"1.Линейная"};
menuItem menu_ModeSetupConf_1_3_0_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,MENU_SELECT_TYPE_CHAR_PERC,TYPE1,TYPE1,"2.Равнопроцентная"};
menuItem menu_ModeSetupConf_1_3_0_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,18,MENU_SELECT_TYPE_CHAR_USER,TYPE1,TYPE1,"3.Пользовательская"};

menuItem menu_ModeSetupServ_1_3_4_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,9,MENU_SELECT_TYPE_LANG_RU,TYPE1,TYPE1,"1.Русский"};
menuItem menu_ModeSetupServ_1_3_4_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,MENU_SELECT_TYPE_LANG_EN,TYPE1,TYPE1,"2.Английский"};
menuItem menu_ModeSetupServ_1_3_4_0_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,MENU_SELECT_TYPE_LANG_CH,TYPE1,TYPE1,"3.Китайский"};

menuItem menu_ModeSetupServ_1_3_4_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,MENU_SELECT_TYPE_DISP_NORM,TYPE1,TYPE1,"1.Нормальный"};
menuItem menu_ModeSetupServ_1_3_4_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,14,MENU_SELECT_TYPE_DISP_REV,TYPE1,TYPE1,"2.Перевернутый"};

menuItem menu_ModeSetupServ_1_3_4_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,10,TYPE1,TYPE1,TYPE1,"1.Вход 4мА"};
menuItem menu_ModeSetupServ_1_3_4_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"2.Вход 20мА"};
menuItem menu_ModeSetupServ_1_3_4_2_2 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,11,TYPE1,TYPE1,TYPE1,"3.Выход 4мА"};
menuItem menu_ModeSetupServ_1_3_4_2_3 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,12,TYPE1,TYPE1,TYPE1,"4.Выход 20мА"};
menuItem menu_ModeSetupServ_1_3_4_2_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,22,TYPE1,TYPE1,TYPE1,"5.Кал. угла +/- 45 гр."};
menuItem menu_ModeSetupServ_1_3_4_2_5 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"6.Кал. угла +45 гр."};
menuItem menu_ModeSetupServ_1_3_4_2_6 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,19,TYPE1,TYPE1,TYPE1,"7.Кал. угла -45 гр."};

screenItem test_screen = {(void*)0,0,0,(float*)0,3.14,2,3,"[мА]"};

screenItem scSetValve0Per	 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetValve100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};
screenItem scSetLimit0Per	 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetLimit100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};
screenItem scSetCut0Per		 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetCut100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};

screenItem scSetPinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetIinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetDinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetPdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetIdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetDdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};

screenItem scSetDeadZoneUp	 = {(void*)0,0,0,(float*)0,3.14,1,3," [В]"};
screenItem scSetDeadZoneDown = {(void*)0,0,0,(float*)0,3.14,1,3," [В]"};
screenItem scSetInput4mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[мА]"};
screenItem scSetInput20mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[мА]"};
screenItem scSetOutput4mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[мА]"};
screenItem scSetOutput20mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[мА]"};
screenItem scSetAngle45DegPlus = {(void*)0,0,0,(float*)0,3.14,3,2,"[Гр]"};
screenItem scSetAngle45DegMinus = {(void*)0,0,0,(float*)0,3.14,3,2,"[Гр]"};

 menuItem* VoidToMenu (void* item)
{
	menuItem* result;
	result = (menuItem*) item;
	return result;
}

 screenItem* VoidToScreen (void* item)
{
	screenItem* result;
	result = (screenItem*) item;
	return result;
}


void MakeMenu(menuItem *str, void *Next, void *Previous, void *Parent, void *Child, void *Screen)
{
   str->Next = Next;
   str->Previous = Previous;
   str->Parent =  Parent;
   str->Child = Child;
   str->NextScreen = Screen;
}

void SetAddrFloatToScreen(screenItem *screen, float* value, void *Prev)
{
   screen->Previous = Prev;
   screen->value_addr = value;
   screen->current_value = *value;
}

void SetMenu()
{
	switch (dsData.modeCtrl) {
	case MODE_CTRL_AUTO:
	{menu_ModeAuto_1_0.Select=1; menu_ModeManual_1_1.Select=0; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=0;
	 menu_ModeManual_1_1_1.Select=0;
	 menu_ModeManual_1_1_2.Select=0;
	 menu_ModeManual_1_1_3.Select=0;
	 menu_ModeManual_1_1_4.Select=0;
	break;}

	case MODE_CTRL_MANUAL1:
	{menu_ModeAuto_1_0.Select=0; menu_ModeManual_1_1.Select=1; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=1;
	 menu_ModeManual_1_1_1.Select=0;
	 menu_ModeManual_1_1_2.Select=0;
	 menu_ModeManual_1_1_3.Select=0;
	 menu_ModeManual_1_1_4.Select=0;
	break;}

	case MODE_CTRL_MANUAL5:
	{menu_ModeAuto_1_0.Select=0; menu_ModeManual_1_1.Select=1; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=0;
	 menu_ModeManual_1_1_1.Select=1;
	 menu_ModeManual_1_1_2.Select=0;
	 menu_ModeManual_1_1_3.Select=0;
	 menu_ModeManual_1_1_4.Select=0;
	break;}
		case MODE_CTRL_MANUAL10:
	{menu_ModeAuto_1_0.Select=0; menu_ModeManual_1_1.Select=1; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=0;
	 menu_ModeManual_1_1_1.Select=0;
	 menu_ModeManual_1_1_2.Select=1;
	 menu_ModeManual_1_1_3.Select=0;
	 menu_ModeManual_1_1_4.Select=0;
	break;}
		case MODE_CTRL_MANUAL25:
	{menu_ModeAuto_1_0.Select=0; menu_ModeManual_1_1.Select=1; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=0;
	 menu_ModeManual_1_1_1.Select=0;
	 menu_ModeManual_1_1_2.Select=0;
	 menu_ModeManual_1_1_3.Select=1;
	 menu_ModeManual_1_1_4.Select=0;
	break;}

		case MODE_CTRL_DIAGNOST:
	{menu_ModeAuto_1_0.Select=0; menu_ModeManual_1_1.Select=1; menu_ModeSpeed_1_2.Select=0;
	 menu_ModeManual_1_1_0.Select=0;
	 menu_ModeManual_1_1_1.Select=0;
	 menu_ModeManual_1_1_2.Select=0;
	 menu_ModeManual_1_1_3.Select=0;
	 menu_ModeManual_1_1_4.Select=1;
	break;}
	}

	switch (dsData.rotationMode) {
	case MODE_ROTATION_RIGHT: 	{menu_ModeSetupConf_1_3_0_0_0.Select=1; menu_ModeSetupConf_1_3_0_0_1.Select=0;break;}
	case MODE_ROTATION_LEFT: 	{menu_ModeSetupConf_1_3_0_0_0.Select=0; menu_ModeSetupConf_1_3_0_0_1.Select=1;break;}
	}

	switch (dsData.driverMode) {
	case MODE_DRIVER_LINE: 		{menu_ModeSetupConf_1_3_0_1_1.Select=1; menu_ModeSetupConf_1_3_0_1_0.Select=0;break;}
	case MODE_DRIVER_ROTATE: 	{menu_ModeSetupConf_1_3_0_1_1.Select=0; menu_ModeSetupConf_1_3_0_1_0.Select=1;break;}
	}

	switch (dsData.directionPosMode) {
	case MODE_DIRECTION_FORWARD:  	{menu_ModeSetupConf_1_3_0_2_0.Select=1; menu_ModeSetupConf_1_3_0_2_1.Select=0;break;}
	case MODE_DIRECTION_REVERSE: 	{menu_ModeSetupConf_1_3_0_2_0.Select=0; menu_ModeSetupConf_1_3_0_2_1.Select=1;break;}
	}

	switch (dsData.feedbackMode) {
	case MODE_FEEDBACK_FORWARD:  	{menu_ModeSetupConf_1_3_0_3_0.Select=1; menu_ModeSetupConf_1_3_0_3_1.Select=0;break;}
	case MODE_FEEDBACK_REVERSE: 	{menu_ModeSetupConf_1_3_0_3_0.Select=0; menu_ModeSetupConf_1_3_0_3_1.Select=1;break;}
	}

	switch (dsData.charachMode) {
	case MODE_CHARACTER_LINE:  		{menu_ModeSetupConf_1_3_0_4_0.Select=1; menu_ModeSetupConf_1_3_0_4_1.Select=0;menu_ModeSetupConf_1_3_0_4_2.Select=0;break;}
	case MODE_CHARACTER_PERCENT: 	{menu_ModeSetupConf_1_3_0_4_0.Select=0; menu_ModeSetupConf_1_3_0_4_1.Select=1;menu_ModeSetupConf_1_3_0_4_2.Select=0;break;}
	case MODE_CHARACTER_USER: 		{menu_ModeSetupConf_1_3_0_4_0.Select=0; menu_ModeSetupConf_1_3_0_4_1.Select=0;menu_ModeSetupConf_1_3_0_4_2.Select=1;break;}
	}

	switch (dsData.lang) {
	case MODE_LANG_RUS: {menu_ModeSetupServ_1_3_4_0_0.Select=1; menu_ModeSetupServ_1_3_4_0_1.Select=0;menu_ModeSetupServ_1_3_4_0_2.Select=0;break;}
	case MODE_LANG_ENG: {menu_ModeSetupServ_1_3_4_0_0.Select=0; menu_ModeSetupServ_1_3_4_0_1.Select=1;menu_ModeSetupServ_1_3_4_0_2.Select=0;break;}
	case MODE_LANG_CHI: {menu_ModeSetupServ_1_3_4_0_0.Select=0; menu_ModeSetupServ_1_3_4_0_1.Select=0;menu_ModeSetupServ_1_3_4_0_2.Select=1;break;}
	}

	switch (dsData.displayMode) {
	case MODE_DISPLAY_NORMAL:  	{menu_ModeSetupServ_1_3_4_1_0.Select=1; menu_ModeSetupServ_1_3_4_1_1.Select=0;break;}
	case MODE_DISPLAY_REVERSE: 	{menu_ModeSetupServ_1_3_4_1_0.Select=0; menu_ModeSetupServ_1_3_4_1_1.Select=1;break;}
	}
}



void InitMenu(void)
{


dsData.pushedButton=0;
dsData.curScreen;


//настройки по диагностике
dsData.settingPer = 10.0;
dsData.settingCur = 4.11;
dsData.positionPer = 11.1;
dsData.positionCur = 4.2;
dsData.errorPer = 1.0;
dsData.curPosStockDeg = 45.1;
dsData.inPressure= 10.2;
dsData.outPressure1 = 11.0;
dsData.outPressure2 = 55.6;
dsData.topLimitDeg = 81.5;
dsData.botLimitDeg = 20.3;
dsData.temperature = 55.6;
dsData.workingTime = 38996; //вообще написано в часах, можно в минутах или секундах мерить и выводить в часах;
dsData.idNumber = 0x55;
dsData.lastService.day = 1;
dsData.lastService.month = 2;
dsData.lastService.year = 20;
dsData.nextService.day=31;
dsData.nextService.month=12;
dsData.nextService.year=55;

//настройки режимов работы и установки параметров
dsData.modeCtrl = MODE_CTRL_MANUAL5;
dsData.rotationMode = MODE_ROTATION_RIGHT;
dsData.driverMode = MODE_DRIVER_LINE;
dsData.directionPosMode = MODE_DIRECTION_FORWARD;
dsData.feedbackMode = MODE_FEEDBACK_FORWARD;
dsData.charachMode = MODE_CHARACTER_LINE;
dsData.lang = MODE_LANG_RUS;
dsData.displayMode = MODE_DISPLAY_NORMAL;

dsData.valve0Per = 0.1;
dsData.valve100Per = 100.2;

dsData.limit0Per = 0.0;
dsData.limit100Per = 100.0;

dsData.cut0Per = 1.5;
dsData.cut100Per = 98.5;

dsData.Pinc = 1.0;
dsData.Iinc= 1.0;
dsData.Dinc= 1.0;

dsData.Pdec= 1.0;
dsData.Idec= 1.0;
dsData.Ddec= 1.0;

dsData.deadZoneUp = 1.4;
dsData.deadZoneDown = 0.9;



dsData.input4mA = 4;
dsData.input20mA = 20;

dsData.output4mA = 4;
dsData.output20mA = 20;

dsData.angle45DegPlus = 120.3;
dsData.angle45DegMinus = 12.55;


	 SetAddrFloatToScreen(&test_screen,&paramScreen_test,&menu_ModeAuto_1_0);

	 SetAddrFloatToScreen(&scSetValve0Per,	&dsData.valve0Per	,&menu_ModeSetupLim_1_3_2_0);
	 SetAddrFloatToScreen(&scSetValve100Per,&dsData.valve100Per	,&menu_ModeSetupLim_1_3_2_1);
	 SetAddrFloatToScreen(&scSetLimit0Per,	&dsData.limit0Per	,&menu_ModeSetupLim_1_3_2_2);
	 SetAddrFloatToScreen(&scSetLimit100Per,&dsData.limit100Per	,&menu_ModeSetupLim_1_3_2_3);
	 SetAddrFloatToScreen(&scSetCut0Per,	&dsData.cut0Per		,&menu_ModeSetupLim_1_3_2_4);
	 SetAddrFloatToScreen(&scSetCut100Per,	&dsData.cut100Per	,&menu_ModeSetupLim_1_3_2_5);

	 SetAddrFloatToScreen(&scSetPinc,		&dsData.Pinc	   	,&menu_ModeSetupReg_1_3_3_0);
	 SetAddrFloatToScreen(&scSetIinc,		&dsData.Iinc	   	,&menu_ModeSetupReg_1_3_3_1);
	 SetAddrFloatToScreen(&scSetDinc,		&dsData.Dinc	   	,&menu_ModeSetupReg_1_3_3_2);
	 SetAddrFloatToScreen(&scSetPdec,		&dsData.Pdec	   	,&menu_ModeSetupReg_1_3_3_3);
	 SetAddrFloatToScreen(&scSetIdec,		&dsData.Idec	   	,&menu_ModeSetupReg_1_3_3_4);
	 SetAddrFloatToScreen(&scSetDdec,		&dsData.Ddec	   	,&menu_ModeSetupReg_1_3_3_5);

	 SetAddrFloatToScreen(&scSetDeadZoneUp,	&dsData.deadZoneUp 	,&menu_ModeSetupReg_1_3_3_6);
	 SetAddrFloatToScreen(&scSetDeadZoneDown,&dsData.deadZoneDown,&menu_ModeSetupReg_1_3_3_7);

	 SetAddrFloatToScreen(&scSetInput4mA,	&dsData.input4mA	,&menu_ModeSetupServ_1_3_4_2_0);
	 SetAddrFloatToScreen(&scSetInput20mA,	&dsData.input20mA	,&menu_ModeSetupServ_1_3_4_2_1);
	 SetAddrFloatToScreen(&scSetOutput4mA,	&dsData.output4mA	,&menu_ModeSetupServ_1_3_4_2_2);
	 SetAddrFloatToScreen(&scSetOutput20mA,	&dsData.output20mA	,&menu_ModeSetupServ_1_3_4_2_3);

	 SetAddrFloatToScreen(&scSetAngle45DegPlus,	&dsData.angle45DegPlus	,&menu_ModeSetupServ_1_3_4_2_5);
	 SetAddrFloatToScreen(&scSetAngle45DegMinus,&dsData.angle45DegMinus	,&menu_ModeSetupServ_1_3_4_2_6);

     //             curr     Next            Prev            Parent      Child
	 MakeMenu(&menu_Diag0,  (void*)0,        (void*)0,       (void*)0,   &menu_Diag1_0, (void*)0);
     //             curr      Next            Prev            Parent       Child
	 MakeMenu(&menu_Diag1_0,  &menu_Diag1_1,  (void*)0,       &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_1,  &menu_Diag1_2,  &menu_Diag1_0,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_2,  &menu_Diag1_3,  &menu_Diag1_1,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_3,  &menu_Diag1_4,  &menu_Diag1_2,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_4,  &menu_Diag1_5,  &menu_Diag1_3,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_5,  &menu_Diag1_6,  &menu_Diag1_4,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_6,  &menu_Diag1_7,  &menu_Diag1_5,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_7,  &menu_Diag1_8,  &menu_Diag1_6,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_8,  &menu_Diag1_9,  &menu_Diag1_7,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_9,  &menu_Diag1_10, &menu_Diag1_8,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_10, &menu_Diag1_11, &menu_Diag1_9,  &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_11, &menu_Diag1_12, &menu_Diag1_10, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_12, &menu_Diag1_13, &menu_Diag1_11, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_13, &menu_Diag1_14, &menu_Diag1_12, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_14, &menu_Diag1_15, &menu_Diag1_13, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_15, &menu_Diag1_16, &menu_Diag1_14, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_16, &menu_Diag1_17, &menu_Diag1_15, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_17, &menu_Diag1_18, &menu_Diag1_16, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_18, (void*)0,       &menu_Diag1_17, &menu_Diag0, (void*)0, (void*)0);

//             curr                 Next                  Prev                 Parent          Child
	 MakeMenu(&menu_Mode_0,         (void*)0,             (void*)0,            (void*)0,       &menu_ModeAuto_1_0, (void*)0);
//             curr                 Next                  Prev                  Parent         Child
	 MakeMenu(&menu_ModeAuto_1_0,   &menu_ModeManual_1_1, (void*)0,             &menu_Mode_0,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1, &menu_ModeSpeed_1_2,  &menu_ModeAuto_1_0,   &menu_Mode_0,  &menu_ModeManual_1_1_0, (void*)0);
	 MakeMenu(&menu_ModeSpeed_1_2,  &menu_ModeSetup_1_3,  &menu_ModeManual_1_1, &menu_Mode_0,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3,  (void*)0,             &menu_ModeSpeed_1_2,  &menu_Mode_0,  &menu_ModeSetup_1_3_0, (void*)0);
//             curr                   Next                    Prev                    Parent                 Child
	 MakeMenu(&menu_ModeManual_1_1_0, &menu_ModeManual_1_1_1, (void*)0,               &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_1, &menu_ModeManual_1_1_2, &menu_ModeManual_1_1_0, &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_2, &menu_ModeManual_1_1_3, &menu_ModeManual_1_1_1, &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_3, &menu_ModeManual_1_1_4, &menu_ModeManual_1_1_2, &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_4, (void*)0,               &menu_ModeManual_1_1_3, &menu_ModeManual_1_1,  (void*)0, (void*)0);

//             curr                   Next                  Prev                   Parent                Child
	 MakeMenu(&menu_ModeSetup_1_3_0, &menu_ModeSetup_1_3_1, (void*)0,              &menu_ModeSetup_1_3,  &menu_ModeSetupConf_1_3_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_1, &menu_ModeSetup_1_3_2, &menu_ModeSetup_1_3_0, &menu_ModeSetup_1_3,  &menu_ModeSetupAStart_1_3_1_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_2, &menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3_1, &menu_ModeSetup_1_3,  &menu_ModeSetupLim_1_3_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3_4, &menu_ModeSetup_1_3_2, &menu_ModeSetup_1_3,  &menu_ModeSetupReg_1_3_3_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_4, (void*)0,              &menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3,  &menu_ModeSetupServ_1_3_4_0, (void*)0);

//             curr                        Next                         Prev                         Parent                 Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0, &menu_ModeSetupConf_1_3_0_1, (void*)0,                    &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1, &menu_ModeSetupConf_1_3_0_2, &menu_ModeSetupConf_1_3_0_0, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_1_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2, &menu_ModeSetupConf_1_3_0_3, &menu_ModeSetupConf_1_3_0_1, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3, &menu_ModeSetupConf_1_3_0_4, &menu_ModeSetupConf_1_3_0_2, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_3_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4, (void*)0,                    &menu_ModeSetupConf_1_3_0_3, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_4_0, (void*)0);

//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0_0, &menu_ModeSetupConf_1_3_0_0_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_0, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_0_0, &menu_ModeSetupConf_1_3_0_0, (void*)0, (void*)0);

//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1_0, &menu_ModeSetupConf_1_3_0_1_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_1_0, &menu_ModeSetupConf_1_3_0_1, (void*)0, (void*)0);

//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2_0, &menu_ModeSetupConf_1_3_0_2_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_2, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_2_0, &menu_ModeSetupConf_1_3_0_2, (void*)0, (void*)0);

//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3_0, &menu_ModeSetupConf_1_3_0_3_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_3, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_3_0, &menu_ModeSetupConf_1_3_0_3, (void*)0, (void*)0);

//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_0, &menu_ModeSetupConf_1_3_0_4_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_1, &menu_ModeSetupConf_1_3_0_4_2, &menu_ModeSetupConf_1_3_0_4_0, &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_2, (void*)0,                      &menu_ModeSetupConf_1_3_0_4_1, &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);

//             curr                          Next                         Prev                           Parent                 Child
	 MakeMenu(&menu_ModeSetupAStart_1_3_1_0, &menu_ModeSetupAStart_1_3_1_1, (void*)0,                      &menu_ModeSetup_1_3_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupAStart_1_3_1_1, &menu_ModeSetupAStart_1_3_1_2, &menu_ModeSetupAStart_1_3_1_0, &menu_ModeSetup_1_3_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupAStart_1_3_1_2, &menu_ModeSetupAStart_1_3_1_3, &menu_ModeSetupAStart_1_3_1_1, &menu_ModeSetup_1_3_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupAStart_1_3_1_3, &menu_ModeSetupAStart_1_3_1_4, &menu_ModeSetupAStart_1_3_1_2, &menu_ModeSetup_1_3_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupAStart_1_3_1_4, (void*)0,                    &menu_ModeSetupAStart_1_3_1_3, &menu_ModeSetup_1_3_1, (void*)0, (void*)0);

//            curr                        Next                        Prev                        Parent                 Child
	 MakeMenu(&menu_ModeSetupLim_1_3_2_0, &menu_ModeSetupLim_1_3_2_1, (void*)0,                   &menu_ModeSetup_1_3_2, (void*)0, &scSetValve0Per);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_1, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetupLim_1_3_2_0, &menu_ModeSetup_1_3_2, (void*)0, &scSetValve100Per);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_2, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_1, &menu_ModeSetup_1_3_2, (void*)0, &scSetLimit0Per);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetup_1_3_2, (void*)0, &scSetLimit100Per);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_5, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, (void*)0, &scSetCut0Per);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_5, (void*)0,                   &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetup_1_3_2, (void*)0, &scSetCut100Per);

//            curr                        Next                        Prev                        Parent                 Child
	 MakeMenu(&menu_ModeSetupReg_1_3_3_0, &menu_ModeSetupReg_1_3_3_1, (void*)0,                   &menu_ModeSetup_1_3_3, (void*)0, &scSetPinc);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_1, &menu_ModeSetupReg_1_3_3_2, &menu_ModeSetupReg_1_3_3_0, &menu_ModeSetup_1_3_3, (void*)0, &scSetIinc);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_2, &menu_ModeSetupReg_1_3_3_3, &menu_ModeSetupReg_1_3_3_1, &menu_ModeSetup_1_3_3, (void*)0, &scSetDinc);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_3, &menu_ModeSetupReg_1_3_3_4, &menu_ModeSetupReg_1_3_3_2, &menu_ModeSetup_1_3_3, (void*)0, &scSetPdec);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_4, &menu_ModeSetupReg_1_3_3_5, &menu_ModeSetupReg_1_3_3_3, &menu_ModeSetup_1_3_3, (void*)0, &scSetIdec);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_5, &menu_ModeSetupReg_1_3_3_6, &menu_ModeSetupReg_1_3_3_4, &menu_ModeSetup_1_3_3, (void*)0, &scSetDdec);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_6, &menu_ModeSetupReg_1_3_3_7, &menu_ModeSetupReg_1_3_3_5, &menu_ModeSetup_1_3_3, (void*)0, &scSetDeadZoneUp);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_7, (void*)0,                   &menu_ModeSetupReg_1_3_3_6, &menu_ModeSetup_1_3_3, (void*)0, &scSetDeadZoneDown);

//            curr                         Next                         Prev                         Parent                 Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0, &menu_ModeSetupServ_1_3_4_1, (void*)0,                    &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1, &menu_ModeSetupServ_1_3_4_2, &menu_ModeSetupServ_1_3_4_0, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_1_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2, &menu_ModeSetupServ_1_3_4_3, &menu_ModeSetupServ_1_3_4_1, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_3, &menu_ModeSetupServ_1_3_4_4, &menu_ModeSetupServ_1_3_4_2, &menu_ModeSetup_1_3_4, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_4, (void*)0,                    &menu_ModeSetupServ_1_3_4_3, &menu_ModeSetup_1_3_4, (void*)0, (void*)0);

//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0_0, &menu_ModeSetupServ_1_3_4_0_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_0, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0_1, &menu_ModeSetupServ_1_3_4_0_2, &menu_ModeSetupServ_1_3_4_0_0, &menu_ModeSetupServ_1_3_4_0, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0_2, (void*)0,                      &menu_ModeSetupServ_1_3_4_0_1, &menu_ModeSetupServ_1_3_4_0, (void*)0, (void*)0);

//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1_0, &menu_ModeSetupServ_1_3_4_1_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_1_0, &menu_ModeSetupServ_1_3_4_1, (void*)0, (void*)0);

//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_0, &menu_ModeSetupServ_1_3_4_2_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetInput4mA);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_1, &menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2_0, &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetInput20mA);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2_3, &menu_ModeSetupServ_1_3_4_2_1, &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetOutput4mA);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_3, &menu_ModeSetupServ_1_3_4_2_4, &menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetOutput20mA);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_4, &menu_ModeSetupServ_1_3_4_2_5, &menu_ModeSetupServ_1_3_4_2_3, &menu_ModeSetupServ_1_3_4_2, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_5, &menu_ModeSetupServ_1_3_4_2_6, &menu_ModeSetupServ_1_3_4_2_4, &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetAngle45DegPlus);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_6, (void*)0,                      &menu_ModeSetupServ_1_3_4_2_5, &menu_ModeSetupServ_1_3_4_2, (void*)0, &scSetAngle45DegMinus);

     SetMenu();
	 tmpScreen = &scSetInput4mA;
	 menu_item = VoidToMenu(&menu_ModeAuto_1_0);
	 dsData.curScreen =  SCREEN_MAIN_DATA;
	 paramScreen_test = 12.586;

     test_screen.current_value = *test_screen.value_addr;
}

  void MenuSelectItemUpdate()
{

	 switch(menu_item->typeOfData)
	 {
		 case MENU_SELECT_TYPE_AUTO:  		dsData.modeCtrl = MODE_CTRL_AUTO;			break;
		 case MENU_SELECT_TYPE_MAN1:  		dsData.modeCtrl = MODE_CTRL_MANUAL1;		break;
		 case MENU_SELECT_TYPE_MAN5:  		dsData.modeCtrl = MODE_CTRL_MANUAL5;		break;
		 case MENU_SELECT_TYPE_MAN10: 		dsData.modeCtrl = MODE_CTRL_MANUAL10;		break;
		 case MENU_SELECT_TYPE_MAN25: 		dsData.modeCtrl = MODE_CTRL_MANUAL25;		break;
		 case MENU_SELECT_TYPE_DIAG:  		dsData.modeCtrl = MODE_CTRL_DIAGNOST;		break;
		 case MENU_SELECT_TYPE_ROTAT_FORV: 	dsData.rotationMode = MODE_ROTATION_RIGHT;		break;
		 case MENU_SELECT_TYPE_ROTAT_BACK: 	dsData.rotationMode = MODE_ROTATION_LEFT;		 break;
		 case MENU_SELECT_TYPE_DRV_ROT: 	dsData.driverMode = MODE_DRIVER_ROTATE;	break;
		 case MENU_SELECT_TYPE_DRV_LINE: 	dsData.driverMode = MODE_DRIVER_LINE;	break;
		 case MENU_SELECT_TYPE_POS_FORV: 	dsData.directionPosMode = MODE_DIRECTION_FORWARD;	break;
		 case MENU_SELECT_TYPE_POS_BACK: 	dsData.directionPosMode = MODE_DIRECTION_REVERSE;	break;
		 case MENU_SELECT_TYPE_FEEDBACK_FORV: dsData.feedbackMode = MODE_FEEDBACK_FORWARD;		break;
		 case MENU_SELECT_TYPE_FEEDBACK_BACK: dsData.feedbackMode = MODE_FEEDBACK_REVERSE;		break;
		 case MENU_SELECT_TYPE_CHAR_LINE: 	 dsData.charachMode = MODE_CHARACTER_LINE;	break;
		 case MENU_SELECT_TYPE_CHAR_PERC: 	 dsData.charachMode = MODE_CHARACTER_PERCENT;	break;
		 case MENU_SELECT_TYPE_CHAR_USER: 	 dsData.charachMode = MODE_CHARACTER_USER;	break;
		 case MENU_SELECT_TYPE_LANG_RU: 	 dsData.lang = MODE_LANG_RUS;	break;
		 case MENU_SELECT_TYPE_LANG_EN: 	 dsData.lang = MODE_LANG_ENG;	break;
		 case MENU_SELECT_TYPE_LANG_CH: 	 dsData.lang = MODE_LANG_CHI;	break;
		 case MENU_SELECT_TYPE_DISP_NORM: 	 dsData.displayMode = MODE_DISPLAY_NORMAL;	break;
		 case MENU_SELECT_TYPE_DISP_REV: 	 dsData.displayMode = MODE_DISPLAY_REVERSE;	break;
     }
}

void ButtonsControlMenu(void)
{
	if(dsData.pushedButton==BUTTON_BACK)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(VoidToMenu(menu_item->Parent)!=NULL)
		menu_item = VoidToMenu(menu_item->Parent);
		if(VoidToMenu(menu_item->Parent)==NULL)
        dsData.curScreen =  SCREEN_MAIN_DATA;
	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(VoidToMenu(menu_item->Next)!=NULL)
		menu_item = VoidToMenu(menu_item->Next);
	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(VoidToMenu(menu_item->Previous)!=NULL)
		menu_item = VoidToMenu(menu_item->Previous);
	 }
	 if(dsData.pushedButton==BUTTON_ENTER)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(VoidToMenu(menu_item->Child)!=NULL)
		menu_item = VoidToMenu(menu_item->Child);
		else {
				if(menu_item->NextScreen!=NULL) {
					tmpScreen = VoidToScreen(menu_item->NextScreen);
					dsData.curScreen =  SCREEN_SET_PPARAM;
					}

             MenuSelectItemUpdate();
             SetMenu();

		}
	 }
}



void ButtonsSetParam(screenItem *Scr)
{
	if(dsData.pushedButton==BUTTON_BACK)
     {
        dsData.pushedButton=BUTTON_NO;
		dsData.curScreen =  SCREEN_MAIN_MENU;
     }
	 if(dsData.pushedButton==BUTTON_DOWN)
     {
		dsData.pushedButton=BUTTON_NO;
		if(Scr->index==0)
		Scr->current_value = Scr->current_value*(-1.0);
		if((Scr->index>0)&&(Scr->index<=Scr->digits))
        {
		   Scr->current_value -=  my_pow(10,Scr->digits-Scr->index);
        }

		if((Scr->index>Scr->digits+1)&&(Scr->index<=Scr->digits+Scr->fractional+1))
        {
		   Scr->current_value -=  1.0/my_pow(10,Scr->index-(Scr->digits+1));
        }
     }
	 if(dsData.pushedButton==BUTTON_UP)
     {
		dsData.pushedButton=BUTTON_NO;
		if(Scr->index==0)
		Scr->current_value = Scr->current_value*(-1.0);
		if((Scr->index>0)&&(Scr->index<=Scr->digits))
        {
		   Scr->current_value +=  my_pow(10,Scr->digits-Scr->index);
        }

		if((Scr->index>Scr->digits+1)&&(Scr->index<=Scr->digits+Scr->fractional+1))
        {
		   Scr->current_value +=  1.0/my_pow(10,Scr->index-(Scr->digits+1));
        }

		if(Scr->index>Scr->digits+Scr->fractional+1) {*Scr->value_addr = Scr->current_value;  //запись из внутренней переменной экрана по адресу в структуру с переменными
		dsData.curScreen =  SCREEN_MAIN_MENU;  }
     }
     if(dsData.pushedButton==BUTTON_ENTER)
     {
		dsData.pushedButton=BUTTON_NO;

		Scr->index++;

		if(Scr->index == Scr->digits+1)
        Scr->index++;
     }
}


void MainMenuUpdate()
{
    uint8_t pix_i;
   memset(OLED13_buff, 0, sizeof(OLED13_buff));

   OLED13_DrawString(1, 35, menu_item->textSize, 0, menu_item->Text,LCD_All_Bolt,INVERSE);
   if(menu_item->Select){ OLED13_DrawString(111, 35, 3, 0, "[*]",LCD_All_Bolt,INVERSE);      }
   for (pix_i = 0; pix_i < 128; pix_i++) {
        OLED13_DrawPixel(pix_i,18,1);
        OLED13_DrawPixel(pix_i,17,1);
        OLED13_DrawPixel(pix_i,16,1);
   }
   if(VoidToMenu(menu_item->Next)!=NULL)
   {
   OLED13_DrawString(1, 50, VoidToMenu(menu_item->Next)->textSize, 0, VoidToMenu(menu_item->Next)->Text,ABB_Font,NO_INVERSE);
   if(VoidToMenu(menu_item->Next)->Select){ OLED13_DrawString(111, 50, 3, 0, "[*]",ABB_Font,NO_INVERSE);      }
   }
   if(VoidToMenu(menu_item->Previous)!=NULL)
   {
   OLED13_DrawString(1, 23, VoidToMenu(menu_item->Previous)->textSize, 0, VoidToMenu(menu_item->Previous)->Text,ABB_Font,NO_INVERSE);
   if(VoidToMenu(menu_item->Previous)->Select){ OLED13_DrawString(111, 23, 3, 0, "[*]",ABB_Font,NO_INVERSE);      }

   }
   if(VoidToMenu(menu_item->Parent)!=NULL)
   {
   OLED13_DrawString(1, 0, VoidToMenu(menu_item->Parent)->textSize, 0,  VoidToMenu(menu_item->Parent)->Text,LCD_All_Bolt,NO_INVERSE);

   }
}

void ScreenSetParamUpdate(screenItem *Scr)
{    uint8_t pix_i;
	 memset(OLED13_buff, 0, sizeof(OLED13_buff));
       for (pix_i = 0; pix_i < 128; pix_i++) {
        OLED13_DrawPixel(pix_i,18,1);
        OLED13_DrawPixel(pix_i,17,1);
        OLED13_DrawPixel(pix_i,16,1);
   }

   if(VoidToMenu(Scr->Previous)!=NULL)
   {
   OLED13_DrawString(1, 0, VoidToMenu(Scr->Previous)->textSize, 0,  VoidToMenu(Scr->Previous)->Text,LCD_All_Bolt,NO_INVERSE);
   }
	 OLED13_DrawUFloat(42,20,1,20,*Scr->value_addr,Scr->digits,Scr->fractional,ABB_Font);
	 OLED13_DrawString(102, 20, 4, 0,  Scr->Text,ABB_Font,NO_INVERSE);
	 OLED13_DrawString(2, 20, 6, 0,  "Текущ:",ABB_Font,NO_INVERSE);

	 OLED13_DrawUFloat(10,40,1,Scr->index,Scr->current_value,Scr->digits,Scr->fractional,LCD_All_Bolt);
	 if(Scr->index>Scr->digits+ Scr->fractional+1)
	 OLED13_DrawString(100, 40, 3, 0,  "ОК?",LCD_All_Bolt,INVERSE);
    else  OLED13_DrawString(100, 40, 3, 0,  "ОК?",LCD_All_Bolt,NO_INVERSE);
	 if(Scr->index>Scr->digits+ Scr->fractional+2)  Scr->index=0;
}


void MainScreenUpdate()
{
	memset(OLED13_buff, 0, sizeof(OLED13_buff));
	if(dsData.modeCtrl!=MODE_CTRL_DIAGNOST){
	OLED13_DrawString(2, 2, 5, 0,  "Режим",ABB_Font,NO_INVERSE);
	switch (dsData.modeCtrl) {
		case MODE_CTRL_AUTO: OLED13_DrawString(20, 15, 1, 0,  "A",LCD_All_Bolt,INVERSE);break;
		case MODE_CTRL_MANUAL1: OLED13_DrawString(10, 15, 3, 0,  "P1%",LCD_All_Bolt,INVERSE);break;
		case MODE_CTRL_MANUAL5: OLED13_DrawString(10, 15, 3, 0,  "P5%",LCD_All_Bolt,INVERSE);break;
		case MODE_CTRL_MANUAL10: OLED13_DrawString(7, 15, 4, 0,  "P10%",LCD_All_Bolt,INVERSE);break;
		case MODE_CTRL_MANUAL25: OLED13_DrawString(7, 15, 4, 0,  "P25%",LCD_All_Bolt,INVERSE);break;
    }


	OLED13_DrawString(60, 2, 9, 0,  "Положение",ABB_Font,NO_INVERSE);
	OLED13_DrawUFloat(62,15,1,20,dsData.positionPer,3,2,LCD_All_Bolt);
	OLED13_DrawString(60,15, 3, 0,  "   ",LCD_All_Bolt,NO_INVERSE);
	OLED13_DrawChar(118, 15, '%',LCD_All_Bolt, NO_INVERSE);

	OLED13_DrawString(40, 30, 7, 0,  "Уставка",ABB_Font,NO_INVERSE);
	OLED13_DrawUFloat(32,45,1,20,dsData.settingPer,3,2,LCD_All_Bolt);
	OLED13_DrawString(30,45, 3, 0,  "   ",LCD_All_Bolt,NO_INVERSE);
	OLED13_DrawChar(90, 45, '%',LCD_All_Bolt, NO_INVERSE);
	}
	else
	OLED13_DrawString(2, 2, 17, 0,  "Режим диагностики",ABB_Font,NO_INVERSE);
}

void ButtonMainScreen()
{
		if(dsData.pushedButton==BUTTON_BACK)
	 {
	   dsData.pushedButton=BUTTON_NO;
	   dsData.curScreen =  SCREEN_MAIN_MENU;
	   menu_item = VoidToMenu(&menu_Diag1_0);
	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL1)
		  dsData.settingPer-=1.0;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL5)
		  dsData.settingPer-=5.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL10)
		  dsData.settingPer-=10.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL25)
		  dsData.settingPer-=25.0;
	  if((dsData.settingPer<0.0)&&(dsData.modeCtrl != MODE_CTRL_AUTO)) dsData.settingPer = 100.0;

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL1)
		  dsData.settingPer+=1.0;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL5)
		  dsData.settingPer+=5.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL10)
		  dsData.settingPer+=10.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL25)
		  dsData.settingPer+=25.0;
       if((dsData.settingPer>100.0)&&(dsData.modeCtrl != MODE_CTRL_AUTO)) dsData.settingPer = 0.0;
	 }
	 if(dsData.pushedButton==BUTTON_ENTER)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.curScreen =  SCREEN_MAIN_MENU;
		menu_item = VoidToMenu(&menu_ModeAuto_1_0);
	 }
}

void RefreshMenu()
{
	  switch(dsData.curScreen)
      {
		  case SCREEN_MAIN_DATA:   {
		  ButtonMainScreen();
		  MainScreenUpdate();          break;}

		  case SCREEN_MAIN_MENU:
          {
          ButtonsControlMenu();
          MainMenuUpdate();
          break;}

		  case SCREEN_SET_PPARAM:
		  {ButtonsSetParam(tmpScreen);
		  ScreenSetParamUpdate(tmpScreen);             				break;}
	  }



}
