#include "interface.h"
#include "LCD.h"
#include <string.h>
//#pragma once


#define NULL 0




uint8_t button_push; //-none, 1- cansel, 2-down, 3-up, 4-enter

float paramScreen_test;
const uint8_t line_1 = 0;
const uint8_t line_2 = 15;
const uint8_t line_3 = 28;
const uint8_t line_4 = 42;
const uint8_t line_5 = 56;

menuItem* menu_item;
lightStartItem *lsItem;
displayData dsData;
screenItem *tmpScreen;
errorList* tmpErr;
//acceptScr acceptScreen;
askItem *tmpAsk;
progressItem *tmpProg;
                                                                                          //nextScr, typeCurScr, Selected, *value, dig,frac,saveCom,secur

menuItem menu_Diag0 =   {(void*)0,(void*)0,(void*)0,(void*)0,"�����������",11,            SCR_TYPE_MENU,SIMPLE_T,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������[%]",10,               SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 3,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������[��]",11,             SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������[%]",11,                SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 3,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������[��]",12,               SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������������.[%]",17,               SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 3,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_5 = {(void*)0,(void*)0,(void*)0,(void*)0,"���.���.�����[\x0011]",16,      SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_6 = {(void*)0,(void*)0,(void*)0,(void*)0,"�����.�.�����[\x0011]",16,    SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_7 = {(void*)0,(void*)0,(void*)0,(void*)0,"����.�.�����[\x0011]",15,     SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_8 = {(void*)0,(void*)0,(void*)0,(void*)0,"�����.�.�����[%]",16,         SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_9 = {(void*)0,(void*)0,(void*)0,(void*)0,"����.�.�����[%]",15,          SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};

menuItem menu_Diag1_10 = {(void*)0,(void*)0,(void*)0,(void*)0,"����.��������",13,               SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_11 = {(void*)0,(void*)0,(void*)0,(void*)0,"���.�������� 1",14,            SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_12 = {(void*)0,(void*)0,(void*)0,(void*)0,"���.�������� 2",14,            SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_13 = {(void*)0,(void*)0,(void*)0,(void*)0,"����.���.[\x0011]",12,     SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_14 = {(void*)0,(void*)0,(void*)0,(void*)0,"���.���.[\x0011]",11,      SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,2,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_15 = {(void*)0,(void*)0,(void*)0,(void*)0,"�����������[\x0011�]",15,       SCR_TYPE_NULL,VAL_FLOAT,  NO_SEL,(void*)0, 2,1,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_16 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������� [�]",13,           SCR_TYPE_NULL,VAL_INT,    NO_SEL,(void*)0, 6,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_17 = {(void*)0,(void*)0,(void*)0,(void*)0,"�����.������",12,              SCR_TYPE_NULL,VAL_INT,    NO_SEL,(void*)0, 6,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_18 = {(void*)0,(void*)0,(void*)0,(void*)0,FIRMWARE,FIRMWARE_TEXT_SIZE,SCR_TYPE_NULL,SIMPLE_T,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_19 = {(void*)0,(void*)0,(void*)0,(void*)0,"��.�����",8,               SCR_TYPE_NULL,VAL_INT,    NO_SEL,(void*)0, 6,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_20 = {(void*)0,(void*)0,(void*)0,(void*)0,"���������� ��",13,                SCR_TYPE_NULL,VAL_DATE_PREV,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_21 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������� ��",12,                SCR_TYPE_NULL,VAL_DATE_NEXT,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};
menuItem menu_Diag1_22 = {(void*)0,(void*)0,(void*)0,(void*)0,"������",6,                 SCR_TYPE_ERROR,VAL_ERR,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};

menuItem menu_Mode_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"����",4,                 SCR_TYPE_MENU,SIMPLE_T,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,SECURITY_FREE};

menuItem menu_ModeAuto_1_0 =   {(void*)0,(void*)0,(void*)0,(void*)0,"1.��������������",16, SCR_TYPE_NULL, SELECT_TYPE_AUTO,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_AUTO,SECURITY_FREE};
menuItem menu_ModeManual_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"2.���. ����������",17,SCR_TYPE_MENU, SELECT_T,           NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeDiagM_1_2 =  {(void*)0,(void*)0,(void*)0,(void*)0,"3.�����������",13,    SCR_TYPE_ASK, SELECT_T,           NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetup_1_3 =  {(void*)0,(void*)0,(void*)0,(void*)0,"4.���������",11,      SCR_TYPE_MENU, SIMPLE_T,           NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeAutoSt_1_4 =  {(void*)0,(void*)0,(void*)0,(void*)0,"5.���������",11,      SCR_TYPE_MENU, SIMPLE_T,           NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};

menuItem menu_ModeManual_1_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"2.1.���.���������� 1%",21, SCR_TYPE_NULL, SELECT_TYPE_MAN1,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN1, SECURITY_FREE};
menuItem menu_ModeManual_1_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"2.2.���.���������� 5%",21, SCR_TYPE_NULL, SELECT_TYPE_MAN5,   NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN5, SECURITY_FREE};
menuItem menu_ModeManual_1_1_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"2.3.���.���������� 10%",22,SCR_TYPE_NULL, SELECT_TYPE_MAN10,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN10,SECURITY_FREE};
menuItem menu_ModeManual_1_1_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"2.4.���.���������� 25%",22,SCR_TYPE_NULL, SELECT_TYPE_MAN25,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN25,SECURITY_FREE};

menuItem menu_ModeDiagM_1_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"3.1.���� � ��������",19,SCR_TYPE_SPEED, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN25,SECURITY_FREE};
menuItem menu_ModeDiagM_1_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"3.2.I / P",9,SCR_TYPE_DAIG_IP, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_MAN25,SECURITY_FREE};

//menuItem menu_ModeManual_1_1_4 = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,0,0,0,17,SELECT_TYPE_DIAG,TYPE1,SAVE_COMMAND_DIAG,0,0,"5.����������� I/P"};

menuItem menu_ModeSetup_1_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.������������",16,  SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetup_1_3_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.�������",11,    SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetup_1_3_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.�������������",17,   SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetup_1_3_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.��������� ���������",23,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};



menuItem menu_ModeSetupConf_1_3_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.1.�����.��������",20,  SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.2.��� �������",17,     SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.3.������.�����������",23,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.4.������.���.�����",22,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.1.5.��������������",20,  SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};


// ����������� ������������� ������� AStart_1_3_1_0 �������� ����� ������������ ����

menuItem menu_ModeAutoSt_1_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"5.1.������ �����",16,      SCR_TYPE_LIGHT_START, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,    SECURITY_FREE};
menuItem menu_ModeAutoSt_1_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"5.2.�������� ���������",22,  SCR_TYPE_PROGRESS, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_START_LIMITS_BORDER,  SECURITY_FREE};
menuItem menu_ModeAutoSt_1_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"5.3.������ ���������",20,  SCR_TYPE_PROGRESS, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_START_FULL_START,     SECURITY_FREE};
menuItem menu_ModeAutoSt_1_4_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"5.4.���������� �����.",21,  SCR_TYPE_PROGRESS, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_START_AUTO_PARAM,     SECURITY_FREE};

menuItem menu_ModeSetupLim_1_3_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.1.������ 0%",15,      SCR_TYPE_ASK,  SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_VALVE_0,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.2.������ 100%",17,    SCR_TYPE_ASK,  SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_VALVE_100,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.3.�������� ��� 0%",21, SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.4.�������� ��� 100%",23,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};

menuItem menu_ModeSetupLim_1_3_2_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.5.�����.������� 0%",22,    SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_OTSECHKA_0PER,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_5 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.6.�����.������� 100%",24,  SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_OTSECHKA_100PER,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_6 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.5.�����.���.�������",23,  SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_LIMIT_0PER,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_7 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.2.6.�����.����.�������",24, SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_LIMIT_100PER,  SECURITY_FREE};

menuItem menu_ModeSetupLim_1_3_2_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������",7,    SCR_TYPE_NULL, SELECT_TYPE_0PER_OSECHKA,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_SET_OTCECHKA_0PER,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"������",6,    SCR_TYPE_NULL, SELECT_TYPE_0PER_LIMIT,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_SET_LIMIT_0PER,  SECURITY_FREE};

menuItem menu_ModeSetupLim_1_3_2_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������",7,    SCR_TYPE_NULL, SELECT_TYPE_100PER_OSECHKA,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_SET_OTCECHKA_100PER,  SECURITY_FREE};
menuItem menu_ModeSetupLim_1_3_2_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"������",6,    SCR_TYPE_NULL, SELECT_TYPE_100PER_LIMIT,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_SET_LIMIT_100PER,  SECURITY_FREE};

menuItem menu_ModeSetupReg_1_3_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.1.P increase",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_PINC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.2.P decrease",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_PDEC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.3.I increase",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_IINC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.4.I decrease",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_IDEC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.5.D increase",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DINC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_5 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.6.D decrease",16,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DDEC,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_6 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.7.������.���.������",23,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DEADZ_DOWN,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_7 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.8.������.���.����������",27,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DEADZ_UP,  SECURITY_FREE};
menuItem menu_ModeSetupReg_1_3_3_8 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.3.9.% ��������.�������",24,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DEADZ_VALVE,  SECURITY_FREE};

menuItem menu_ModeSetupServ_1_3_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.1.Language",14,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.2.�������",13,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.3.���������� ����",21,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.4.������. ���� +/- 45",25,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_4 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.5.����� ��������",20,SCR_TYPE_MENU, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DEAFULT_SETTINGS,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_5 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.6.��������� ���",19,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_NO,  SECURITY_FREE};


menuItem menu_ModeSetupConf_1_3_0_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"�� �������",10,SCR_TYPE_NULL, SELECT_TYPE_ROTAT_FORV,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_ROTAT_FORV,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"������ �������",14,SCR_TYPE_NULL, SELECT_TYPE_ROTAT_BACK,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_ROTAT_BACK,  SECURITY_FREE};

menuItem menu_ModeSetupConf_1_3_0_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"����������",10,SCR_TYPE_NULL, SELECT_TYPE_DRV_ROT,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DRV_ROT,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������",8,SCR_TYPE_NULL, SELECT_TYPE_DRV_LINE,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DRV_LINE,  SECURITY_FREE};

menuItem menu_ModeSetupConf_1_3_0_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"������",6,SCR_TYPE_NULL, SELECT_TYPE_POS_FORV,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_POS_FORV,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������",8,SCR_TYPE_NULL, SELECT_TYPE_POS_BACK,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_POS_BACK,  SECURITY_FREE};

menuItem menu_ModeSetupConf_1_3_0_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"������",6,SCR_TYPE_NULL, SELECT_TYPE_FEEDBACK_FORV,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_FEEDBACK_FORV,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������",8,SCR_TYPE_NULL, SELECT_TYPE_FEEDBACK_BACK,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_FEEDBACK_BACK,  SECURITY_FREE};

menuItem menu_ModeSetupConf_1_3_0_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"��������",8,SCR_TYPE_NULL, SELECT_TYPE_CHAR_LINE,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_CHAR_LINE,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"���������������",15,SCR_TYPE_NULL, SELECT_TYPE_CHAR_PERC,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_CHAR_PERC,  SECURITY_FREE};
menuItem menu_ModeSetupConf_1_3_0_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"����������������",16,SCR_TYPE_NULL, SELECT_TYPE_CHAR_USER,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_CHAR_USER,  SECURITY_FREE};

menuItem menu_ModeSetupServ_1_3_4_0_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"�������",7,SCR_TYPE_NULL, SELECT_TYPE_LANG_RU,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_LANG_RU,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_0_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"English",7,SCR_TYPE_NULL, SELECT_TYPE_LANG_EN,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_LANG_EN,  SECURITY_FREE};

menuItem menu_ModeSetupServ_1_3_4_1_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"����������",10,SCR_TYPE_NULL, SELECT_TYPE_DISP_NORM,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DISP_NORM,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_1_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"������������",12,SCR_TYPE_NULL, SELECT_TYPE_DISP_REV,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DISP_REV,  SECURITY_FREE};

menuItem menu_ModeSetupServ_1_3_4_2_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.3.1.���� 4��",16,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_IN4MA,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_2_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.3.2.���� 20��",17,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_IN20MA,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_2_2 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.3.3.����� 4��",17,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_OUT4MA,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_2_3 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.3.4.����� 20��",18,SCR_TYPE_SET, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_OUT20MA,  SECURITY_FREE};


menuItem menu_ModeSetupServ_1_3_4_3_0 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.4.1.��������. ���� +45",26,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_ANGLE_PLUS45,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_3_1 = {(void*)0,(void*)0,(void*)0,(void*)0,"4.4.4.2.��������. ���� -45",26,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_ANGLE_MINUS45,  SECURITY_FREE};

menuItem menu_ModeSetupServ_1_3_4_4_0 = {(void*)0,(void*)0,(void*)0,(void*)0,  "4.4.5.1.��������� �����",23,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_DEAFULT_SETTINGS,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_4_1 = {(void*)0,(void*)0,(void*)0,(void*)0,  "4.4.5.2.����. ������. �����.",28,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_SAVE_SETTINGS,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_4_2 = {(void*)0,(void*)0,(void*)0,(void*)0,  "4.4.5.3.������ �����",20,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_FULL_WIPE,  SECURITY_FREE};
menuItem menu_ModeSetupServ_1_3_4_4_3 = {(void*)0,(void*)0,(void*)0,(void*)0,  "4.4.5.3.Reboot",14,SCR_TYPE_ASK, SIMPLE_T,  NO_SEL,(void*)0, 0,0,SAVE_COMMAND_FULL_WIPE,  SECURITY_FREE};


void MakeLightStartMenu(lightStartItem *str, void *Next, void *Previous, void *Parent, void *Child, void *AddrValue)
{
   str->Next = Next;
   str->Previous = Previous;
   str->Parent =  Parent;
   str->Child = Child;
   str->AddrValue = AddrValue;
}


lightStartItem startLang_1_0 = 		{(void*)0,(void*)0,(void*)0,(void*)0,"�������","����",7,4,0,SAVE_COMMAND_LANG_RU,SCR_TYPE_MENU,MODE_LANG_RUS,(void*)0};
lightStartItem startLang_1_1 = 		{(void*)0,(void*)0,(void*)0,(void*)0,"English","Language",7,8,0,SAVE_COMMAND_LANG_EN,SCR_TYPE_MENU,MODE_LANG_ENG,(void*)0};
lightStartItem startScreen_2_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"����������","�������",10,7,0,SAVE_COMMAND_DISP_NORM,SCR_TYPE_MENU,MODE_DISPLAY_NORMAL,(void*)0};
lightStartItem startScreen_2_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"������������","�������",12,7,0,SAVE_COMMAND_DISP_REV,SCR_TYPE_MENU,MODE_DISPLAY_REVERSE,(void*)0};
lightStartItem startRotation_3_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"�� �������","�����.��������",10,14,0,SAVE_COMMAND_ROTAT_FORV,SCR_TYPE_MENU,MODE_ROTATION_RIGHT,(void*)0};
lightStartItem startRotation_3_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"������ �������","�����.��������",14,14,0,SAVE_COMMAND_ROTAT_BACK,SCR_TYPE_MENU,MODE_ROTATION_LEFT,(void*)0};
lightStartItem startTDriver_4_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"����������","��� �������",10,11,0,SAVE_COMMAND_DRV_ROT,SCR_TYPE_MENU,MODE_DRIVER_ROTATE,(void*)0};
lightStartItem startTDriver_4_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"��������","��� �������",8,11,0,SAVE_COMMAND_DRV_LINE,SCR_TYPE_MENU,MODE_DRIVER_LINE,(void*)0};
lightStartItem startTPosish_5_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"������","������.�����������",6,17,0,SAVE_COMMAND_POS_FORV,SCR_TYPE_MENU,MODE_DIRECTION_FORWARD,(void*)0};
lightStartItem startTPosish_5_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"��������","������.�����������",8,17,0,SAVE_COMMAND_POS_BACK,SCR_TYPE_MENU,MODE_DIRECTION_REVERSE,(void*)0};
lightStartItem startTBackCon_6_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"������","������.���.�����",6,16,0,SAVE_COMMAND_FEEDBACK_FORV,SCR_TYPE_MENU,MODE_FEEDBACK_FORWARD,(void*)0};
lightStartItem startTBackCon_6_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"��������","������.���.�����",8,16,0,SAVE_COMMAND_FEEDBACK_BACK,SCR_TYPE_MENU,MODE_FEEDBACK_REVERSE,(void*)0};

lightStartItem startCharach_7_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"��������","��������������",8,14,0,SAVE_COMMAND_CHAR_LINE,SCR_TYPE_MENU,MODE_CHARACTER_LINE,(void*)0};
lightStartItem startCharach_7_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"���������������","��������������",15,14,0,SAVE_COMMAND_CHAR_PERC,SCR_TYPE_MENU,MODE_CHARACTER_PERCENT,(void*)0};
lightStartItem startCharach_7_2 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"����������������","��������������",16,14,0,SAVE_COMMAND_CHAR_USER,SCR_TYPE_MENU,MODE_CHARACTER_USER,(void*)0};

lightStartItem startCalibr_8_0 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"�������� ���������","���������",18,9,0,SAVE_COMMAND_START_LIMITS_BORDER,SCR_TYPE_PROGRESS,0,(void*)0};
lightStartItem startCalibr_8_1 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"������ ���������","���������",16,9,0,SAVE_COMMAND_START_FULL_START,SCR_TYPE_PROGRESS,0,(void*)0};
lightStartItem startCalibr_8_2 = 	{(void*)0,(void*)0,(void*)0,(void*)0,"���������� �����.","���������",17,9,0,SAVE_COMMAND_START_AUTO_PARAM,SCR_TYPE_PROGRESS,0,(void*)0};



progressItem progLimitsBorder;
progressItem progFullStart;
progressItem progAutoParam;

errorList menu_Error_1[15] = {{(void*)0,(void*)0,(void*)0,0,0,18,17,0,"����� ���� �������","��������� �������",""},
{(void*)0,(void*)0,(void*)0,0,0,18,13,0,"����� ���� �������","IP ����������",""},
{(void*)0,(void*)0,(void*)0,0,0,13,10,12,"������ ������","�������� �","�������� ���"},
{(void*)0,(void*)0,(void*)0,0,0,13,11,13,"������ ������","�������� ��","��������� ���"},
{(void*)0,(void*)0,(void*)0,0,0,13,10,12,"������ ������","�������� �","�������� ���"},
{(void*)0,(void*)0,(void*)0,0,0,13,11,13,"������ ������","�������� ��","��������� ���"},
{(void*)0,(void*)0,(void*)0,0,0,15,15,5,"���������� ����","������� �������","�����"},
{(void*)0,(void*)0,(void*)0,0,0,17,7,0,"������ ����������","�������",""},
{(void*)0,(void*)0,(void*)0,0,0,17,14,13,"���������� �����-","����� ��������","������� �����"},
{(void*)0,(void*)0,(void*)0,0,0,12,7,0,"��� ��������","�������",""},
{(void*)0,(void*)0,(void*)0,0,0,18,18,7,"��������� ��������","�������� ���������","�������"},
{(void*)0,(void*)0,(void*)0,0,0,18,17,0,"������ �����������","��������� �������",""},
{(void*)0,(void*)0,(void*)0,0,0,18,16,13,"������ �����������","���� ����������.","IP ����������"},
{(void*)0,(void*)0,(void*)0,0,0,17,0,0,"������ ����������","",""},
{(void*)0,(void*)0,(void*)0,0,0,18,16,0,"������ �����������","�������� �������",""}};



const float IPVoltageMas[IP_VOLTAGE_STEPS] = {IP_VOLTAGE_1, IP_VOLTAGE_2, IP_VOLTAGE_3};

screenItem test_screen = {(void*)0,0,0,(float*)0,3.14,2,3,"[��]"};

screenItem scSetValve0Per	 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetValve100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};
screenItem scSetLimit0Per	 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetLimit100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};
screenItem scSetCut0Per		 = {(void*)0,0,0,(float*)0,3.14,2,1," [%]"};
screenItem scSetCut100Per	 = {(void*)0,0,0,(float*)0,3.14,3,1," [%]"};

screenItem scSetPinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetPdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetIinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetIdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetDinc		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};
screenItem scSetDdec		 = {(void*)0,0,0,(float*)0,3.14,3,3," [ ]"};

screenItem scSetDeadZoneUp	 = {(void*)0,0,0,(float*)0,3.14,1,3," [�]"};
screenItem scSetDeadZoneDown = {(void*)0,0,0,(float*)0,3.14,1,3," [�]"};
screenItem scSetDeadValve =    {(void*)0,0,0,(float*)0,3.14,1,1," [%]"};

screenItem scSetInput4mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[��]"};
screenItem scSetInput20mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[��]"};
screenItem scSetOutput4mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[��]"};
screenItem scSetOutput20mA	 = {(void*)0,0,0,(float*)0,3.14,2,2,"[��]"};
screenItem scSetAngle45DegPlus = {(void*)0,0,0,(float*)0,3.14,3,2," [\x0011]"};
screenItem scSetAngle45DegMinus = {(void*)0,0,0,(float*)0,3.14,3,2," [\x0011]"};

askItem askValve0 = 		{(void*)0, "���������� �������", "��������� ��� 0%?", 18, 17, SAVE_COMMAND_VALVE_0};
askItem askValve100 = 		{(void*)0, "���������� �������", "��������� ��� 100%?", 18, 19, SAVE_COMMAND_VALVE_100};
askItem askAngleP45 = 		{(void*)0, "���������� �������", "��������� ��� +45\x0011?", 18, 19, SAVE_COMMAND_ANGLE_PLUS45};
askItem askAngleN45 = 		{(void*)0, "���������� �������", "��������� ��� -45\x0011?", 18, 19, SAVE_COMMAND_ANGLE_MINUS45};
askItem askCurr4mA = 		{(void*)0, "���������� �������",  "������� ���� ��� 4��?", 18, 21, SAVE_COMMAND_IN4MA};
askItem askCurr20mA = 		{(void*)0, "���������� �������", "������� ���� ��� 20��?", 18, 22, SAVE_COMMAND_IN20MA};
askItem askLoadSettings = 	{(void*)0, "��������� ���������", "��������� ����������?", 19, 21, SAVE_COMMAND_LOAD_SETTINGS};
askItem askSaveSettings = 	{(void*)0, "���������� �������",  "��������� ��� ���������?", 18, 24, SAVE_COMMAND_SAVE_SETTINGS};
askItem askWipeSettings = 	{(void*)0, "��������! ��������",  "��������� �� ���������?", 18, 23, SAVE_COMMAND_FULL_WIPE};
askItem askReboot = 		{(void*)0, "��������!", "������������ ����������?", 9, 24, SAVE_COMMAND_REBOOT};
askItem askDiagnost =   	{(void*)0, "��������! ���������", "�������. ����������?", 19, 20, SAVE_COMMAND_DIAG};
askItem askErrClear =   	{(void*)0, "�������� ���", "������ �� ����������?", 12, 21, SAVE_COMMAND_CLEAR_ERROR};

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

float * VoidToFloat( void *ptr)
{
	float *tmp;
	tmp = (void*) ptr;
	return tmp;
}

 errorList* VoidToErrList (void* item)
{
	errorList* result;
	result = (errorList*) item;
	return result;
}

void MakeErrorList(errorList *str, void *Next, void *Previous, void *Parent, uint16_t index)
{
   str->Next = Next;
   str->Previous = Previous;
   str->ParentMenuItem = Parent;
   str->index = index;
}

void MakeAskList(askItem *ask, void *Previous )
{
  ask->Previous = Previous;
}


void MakeProgressItem (progressItem *Srs, void *Previous, uint8_t saveCommand)
{
   Srs->saveCommand = saveCommand;
   Srs->Previous = Previous;
}



void ErrorListData(void)
{
uint8_t i;
uint16_t index;
uint16_t prev_err;
index = 0;

	if(dsData.codeErorr>0)
	{
		for (i = 0; i < NUMBER_OF_ERRORS; i++)
		{

			if(((dsData.codeErorr>>i)&0x01)==0x01)
			{
			index++;
			if(index==1)
				{
					menu_Error_1[i].Previous = (void*)0;
					menu_Error_1[i].Next = (void*)0;
					menu_Error_1[i].index = index ;
					menu_Diag1_22.Child = &menu_Error_1[i];
					prev_err = i;
				}
				else
				{
					menu_Error_1[prev_err].Next = &menu_Error_1[i];
					menu_Error_1[i].Previous = &menu_Error_1[prev_err];
					menu_Error_1[i].index = index ;
					menu_Error_1[i].Next = (void*)0;
					prev_err = i;
				}

			}
		}
	}

}

void ErrorCountUpdate(void)
{
uint8_t i, index;
index = 0;
	if(dsData.codeErorr>0)
	{
		for (i = 0; i < NUMBER_OF_ERRORS; i++)
		{

			if(((dsData.codeErorr>>i)&0x01)==0x01)
			{
			index++;
			}
			}
		}

	dsData.ErrorCount = index;
}

void MakeMenu(menuItem *str, void *Next, void *Previous, void *Parent, void *Child, void *Screen)
{
   str->Next = Next;
   str->Previous = Previous;
   str->Parent =  Parent;
   str->Child = Child;

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
	{menu_ModeAuto_1_0.Selected=1; menu_ModeManual_1_1.Selected=0; menu_ModeDiagM_1_2.Selected=0;
	 menu_ModeManual_1_1_0.Selected=0;
	 menu_ModeManual_1_1_1.Selected=0;
	 menu_ModeManual_1_1_2.Selected=0;
	 menu_ModeManual_1_1_3.Selected=0;
	 //menu_ModeManual_1_1_4.Selected=0;
	break;}

	case MODE_CTRL_MANUAL1:
	{menu_ModeAuto_1_0.Selected=0; menu_ModeManual_1_1.Selected=1; menu_ModeDiagM_1_2.Selected=0;
	 menu_ModeManual_1_1_0.Selected=1;
	 menu_ModeManual_1_1_1.Selected=0;
	 menu_ModeManual_1_1_2.Selected=0;
	 menu_ModeManual_1_1_3.Selected=0;
	 //menu_ModeManual_1_1_4.Selected=0;
	break;}

	case MODE_CTRL_MANUAL5:
	{menu_ModeAuto_1_0.Selected=0; menu_ModeManual_1_1.Selected=1; menu_ModeDiagM_1_2.Selected=0;
	 menu_ModeManual_1_1_0.Selected=0;
	 menu_ModeManual_1_1_1.Selected=1;
	 menu_ModeManual_1_1_2.Selected=0;
	 menu_ModeManual_1_1_3.Selected=0;

	break;}
		case MODE_CTRL_MANUAL10:
	{menu_ModeAuto_1_0.Selected=0; menu_ModeManual_1_1.Selected=1; menu_ModeDiagM_1_2.Selected=0;
	 menu_ModeManual_1_1_0.Selected=0;
	 menu_ModeManual_1_1_1.Selected=0;
	 menu_ModeManual_1_1_2.Selected=1;
	 menu_ModeManual_1_1_3.Selected=0;

	break;}
		case MODE_CTRL_MANUAL25:
	{menu_ModeAuto_1_0.Selected=0; menu_ModeManual_1_1.Selected=1; menu_ModeDiagM_1_2.Selected=0;
	 menu_ModeManual_1_1_0.Selected=0;
	 menu_ModeManual_1_1_1.Selected=0;
	 menu_ModeManual_1_1_2.Selected=0;
	 menu_ModeManual_1_1_3.Selected=1;

	break;}

		case MODE_CTRL_DIAGNOST:
	{menu_ModeAuto_1_0.Selected=0; menu_ModeManual_1_1.Selected=0; menu_ModeDiagM_1_2.Selected=1;
	 menu_ModeManual_1_1_0.Selected=0;
	 menu_ModeManual_1_1_1.Selected=0;
	 menu_ModeManual_1_1_2.Selected=0;
	 menu_ModeManual_1_1_3.Selected=0;

	break;}
	}

	switch (dsData.rotationMode) {
	case MODE_ROTATION_RIGHT: 	{
	menu_ModeSetupConf_1_3_0_0_0.Selected=1; menu_ModeSetupConf_1_3_0_0_1.Selected=0;
	startRotation_3_0.Selected=1;   startRotation_3_1.Selected=0;
	break;}
	case MODE_ROTATION_LEFT: 	{
	menu_ModeSetupConf_1_3_0_0_0.Selected=0; menu_ModeSetupConf_1_3_0_0_1.Selected=1;
	startRotation_3_0.Selected=0;   startRotation_3_1.Selected=1;
	break;}
	}

	switch (dsData.driverMode) {
	case MODE_DRIVER_LINE: 		{
	menu_ModeSetupConf_1_3_0_1_1.Selected=1; menu_ModeSetupConf_1_3_0_1_0.Selected=0;
	startTDriver_4_0.Selected=1; 	startTDriver_4_1.Selected=0;
	break;}
	case MODE_DRIVER_ROTATE: 	{
	menu_ModeSetupConf_1_3_0_1_1.Selected=0; menu_ModeSetupConf_1_3_0_1_0.Selected=1;
    startTDriver_4_0.Selected=0; 	startTDriver_4_1.Selected=1;
	break;}
	}

	switch (dsData.directionPosMode) {
	case MODE_DIRECTION_FORWARD:  	{
	menu_ModeSetupConf_1_3_0_2_0.Selected=1; menu_ModeSetupConf_1_3_0_2_1.Selected=0;
	startTPosish_5_0.Selected=1;    startTPosish_5_1.Selected=0;
	break;}
	case MODE_DIRECTION_REVERSE: 	{
	menu_ModeSetupConf_1_3_0_2_0.Selected=0; menu_ModeSetupConf_1_3_0_2_1.Selected=1;
	startTPosish_5_0.Selected=0;    startTPosish_5_1.Selected=1;
	break;}
	}

	switch (dsData.feedbackMode) {
	case MODE_FEEDBACK_FORWARD:  	{
	menu_ModeSetupConf_1_3_0_3_0.Selected=1; menu_ModeSetupConf_1_3_0_3_1.Selected=0;
	startTBackCon_6_0.Selected=1;     startTBackCon_6_1.Selected=0;
	break;}
	case MODE_FEEDBACK_REVERSE: 	{
	menu_ModeSetupConf_1_3_0_3_0.Selected=0; menu_ModeSetupConf_1_3_0_3_1.Selected=1;
	startTBackCon_6_0.Selected=0;     startTBackCon_6_1.Selected=1;
	break;}
	}

	switch (dsData.charachMode) {
	case MODE_CHARACTER_LINE:  		{
	menu_ModeSetupConf_1_3_0_4_0.Selected=1; menu_ModeSetupConf_1_3_0_4_1.Selected=0;menu_ModeSetupConf_1_3_0_4_2.Selected=0;
	startCharach_7_0.Selected=1;  startCharach_7_1.Selected=0;  startCharach_7_2.Selected=0;
	break;}
	case MODE_CHARACTER_PERCENT: 	{
	menu_ModeSetupConf_1_3_0_4_0.Selected=0; menu_ModeSetupConf_1_3_0_4_1.Selected=1;menu_ModeSetupConf_1_3_0_4_2.Selected=0;
	startCharach_7_0.Selected=0;  startCharach_7_1.Selected=1;  startCharach_7_2.Selected=0;
	break;}
	case MODE_CHARACTER_USER: 		{
	menu_ModeSetupConf_1_3_0_4_0.Selected=0; menu_ModeSetupConf_1_3_0_4_1.Selected=0;menu_ModeSetupConf_1_3_0_4_2.Selected=1;
    startCharach_7_0.Selected=0;  startCharach_7_1.Selected=0;  startCharach_7_2.Selected=1;
	break;}
	}

	switch (dsData.lang) {
	case MODE_LANG_RUS: {
	menu_ModeSetupServ_1_3_4_0_0.Selected=1; menu_ModeSetupServ_1_3_4_0_1.Selected=0;
	startLang_1_0.Selected=1; startLang_1_1.Selected=0;
	break;}
	case MODE_LANG_ENG: {
	menu_ModeSetupServ_1_3_4_0_0.Selected=0; menu_ModeSetupServ_1_3_4_0_1.Selected=1;
	startLang_1_0.Selected=0; startLang_1_1.Selected=1;
	break;}
	case MODE_LANG_CHI: {
	menu_ModeSetupServ_1_3_4_0_0.Selected=0; menu_ModeSetupServ_1_3_4_0_1.Selected=0;

	break;}
	}

	switch (dsData.displayMode) {
	case MODE_DISPLAY_NORMAL:  	{
	menu_ModeSetupServ_1_3_4_1_0.Selected=1; menu_ModeSetupServ_1_3_4_1_1.Selected=0;
	startScreen_2_0.Selected=1;  startScreen_2_1.Selected=0;
	break;}
	case MODE_DISPLAY_REVERSE: 	{
	menu_ModeSetupServ_1_3_4_1_0.Selected=0; menu_ModeSetupServ_1_3_4_1_1.Selected=1;
    startScreen_2_0.Selected=0;  startScreen_2_1.Selected=1;
	break;}
	}

    switch (dsData.valveType0Per) {
	case MODE_OTSECHKA:  	{
	menu_ModeSetupLim_1_3_2_2_0.Selected=1; menu_ModeSetupLim_1_3_2_2_1.Selected=0;

	break;}
	case MODE_LIMIT: 	    {
	menu_ModeSetupLim_1_3_2_2_0.Selected=0; menu_ModeSetupLim_1_3_2_2_1.Selected=1;

	break;}
	}

    switch (dsData.valveType100Per) {
	case MODE_OTSECHKA:  	{
	menu_ModeSetupLim_1_3_2_3_0.Selected=1; menu_ModeSetupLim_1_3_2_3_1.Selected=0;

	break;}
	case MODE_LIMIT: 	    {
	menu_ModeSetupLim_1_3_2_3_0.Selected=0; menu_ModeSetupLim_1_3_2_3_1.Selected=1;

	break;}
	}



}

void MenuLimitCutUpdate()
{

    if (dsData.valveType0Per == MODE_OTSECHKA) {
    MakeMenu(&menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetup_1_3_2, &menu_ModeSetupLim_1_3_2_3_0,(void*)0);
    if(dsData.valveType100Per == MODE_OTSECHKA)
         {
         MakeMenu(&menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_5, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, &scSetCut0Per, 	(void*)0);
         MakeMenu(&menu_ModeSetupLim_1_3_2_5, (void*)0,                   &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetup_1_3_2, &scSetCut100Per, 	(void*)0);
         }
         else {
         MakeMenu(&menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_7, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, &scSetCut0Per, 	(void*)0);
         MakeMenu(&menu_ModeSetupLim_1_3_2_7, (void*)0,                   &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetup_1_3_2, &scSetLimit100Per, 	(void*)0);
         }

    }



    else
    {
    MakeMenu(&menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_6, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetup_1_3_2, &menu_ModeSetupLim_1_3_2_3_0,(void*)0);
    if(dsData.valveType100Per == MODE_OTSECHKA){
    MakeMenu(&menu_ModeSetupLim_1_3_2_6, &menu_ModeSetupLim_1_3_2_5, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, &scSetLimit0Per, 	(void*)0);
    MakeMenu(&menu_ModeSetupLim_1_3_2_5, (void*)0,                   &menu_ModeSetupLim_1_3_2_6, &menu_ModeSetup_1_3_2, &scSetCut100Per, 	(void*)0);
    }
    else
    {
    MakeMenu(&menu_ModeSetupLim_1_3_2_6, &menu_ModeSetupLim_1_3_2_7, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, &scSetLimit0Per, 	(void*)0);
    MakeMenu(&menu_ModeSetupLim_1_3_2_7, (void*)0,                   &menu_ModeSetupLim_1_3_2_6, &menu_ModeSetup_1_3_2, &scSetLimit100Per, 	(void*)0);

    }
    }
}

void InitMenu(void)
{
LCD_init();
dsData.pushedButton=0;
dsData.curScreen = 0;
dsData.command = TYPE_IDLE;

//��������� �� �����������
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
dsData.workingTime = 38996; //������ �������� � �����, ����� � ������� ��� �������� ������ � �������� � �����;
dsData.idNumber = 0x55;
dsData.lastService.day = 1;
dsData.lastService.month = 2;
dsData.lastService.year = 20;
dsData.nextService.day=31;
dsData.nextService.month=12;
dsData.nextService.year=55;

//��������� ������� ������ � ��������� ����������
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
dsData.Iinc= 2.0;
dsData.Dinc= 3.0;

dsData.Pdec= 4.0;
dsData.Idec= 5.0;
dsData.Ddec= 61.0;

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
	 SetAddrFloatToScreen(&scSetPdec,		&dsData.Pdec	   	,&menu_ModeSetupReg_1_3_3_1);
	 SetAddrFloatToScreen(&scSetIinc,		&dsData.Iinc	   	,&menu_ModeSetupReg_1_3_3_2);
	 SetAddrFloatToScreen(&scSetIdec,		&dsData.Idec	   	,&menu_ModeSetupReg_1_3_3_3);
	 SetAddrFloatToScreen(&scSetDinc,		&dsData.Dinc	   	,&menu_ModeSetupReg_1_3_3_4);
	 SetAddrFloatToScreen(&scSetDdec,		&dsData.Ddec	   	,&menu_ModeSetupReg_1_3_3_5);

	 SetAddrFloatToScreen(&scSetDeadZoneDown,&dsData.deadZoneDown,&menu_ModeSetupReg_1_3_3_6);
	 SetAddrFloatToScreen(&scSetDeadZoneUp,	&dsData.deadZoneUp 	,&menu_ModeSetupReg_1_3_3_7);
	 SetAddrFloatToScreen(&scSetDeadValve,	&dsData.deadZoneValve 	,&menu_ModeSetupReg_1_3_3_8);


	 SetAddrFloatToScreen(&scSetInput4mA,	&dsData.input4mA	,&menu_ModeSetupServ_1_3_4_2_0);
	 SetAddrFloatToScreen(&scSetInput20mA,	&dsData.input20mA	,&menu_ModeSetupServ_1_3_4_2_1);
	 SetAddrFloatToScreen(&scSetOutput4mA,	&dsData.output4mA	,&menu_ModeSetupServ_1_3_4_2_2);
	 SetAddrFloatToScreen(&scSetOutput20mA,	&dsData.output20mA	,&menu_ModeSetupServ_1_3_4_2_3);

	// SetAddrFloatToScreen(&scSetAngle45DegPlus,	&dsData.angle45DegPlus	,&menu_ModeSetupServ_1_3_4_2_5);
	// SetAddrFloatToScreen(&scSetAngle45DegMinus,&dsData.angle45DegMinus	,&menu_ModeSetupServ_1_3_4_2_6);

	 //             curr     Next            Prev            Parent      Child
	 MakeMenu(&menu_Diag0,  (void*)0,        (void*)0,       (void*)0,   &menu_Diag1_0, (void*)0);
     //             curr      Next            Prev            Parent       Child
  	 MakeMenu(&menu_Diag1_0,  &menu_Diag1_1,  &menu_Diag1_22, &menu_Diag0, (void*)0, (void*)0);
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
	 MakeMenu(&menu_Diag1_18, &menu_Diag1_19, &menu_Diag1_17, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_19, &menu_Diag1_20, &menu_Diag1_18, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_20, &menu_Diag1_21, &menu_Diag1_19, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_21, &menu_Diag1_22, &menu_Diag1_20, &menu_Diag0, (void*)0, (void*)0);
	 MakeMenu(&menu_Diag1_22, &menu_Diag1_0,  &menu_Diag1_21, &menu_Diag0, (void*)0, (void*)0);

	 //������� ����
//             curr                 Next                  Prev                 Parent          Child
	 MakeMenu(&menu_Mode_0,         (void*)0,             (void*)0,            (void*)0,       &menu_ModeAuto_1_0, (void*)0);
//             curr                 Next                  Prev                  Parent         Child
	 MakeMenu(&menu_ModeAuto_1_0,   &menu_ModeManual_1_1, (void*)0,             &menu_Mode_0,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1, &menu_ModeDiagM_1_2,  &menu_ModeAuto_1_0,   &menu_Mode_0,  &menu_ModeManual_1_1_0, (void*)0);
	 MakeMenu(&menu_ModeDiagM_1_2,  &menu_ModeSetup_1_3,  &menu_ModeManual_1_1, &menu_Mode_0,  &askDiagnost, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3,  &menu_ModeAutoSt_1_4, &menu_ModeDiagM_1_2,  &menu_Mode_0,  &menu_ModeSetup_1_3_0, (void*)0);
	 MakeMenu(&menu_ModeAutoSt_1_4, (void*)0,             &menu_ModeSetup_1_3,  &menu_Mode_0,  &menu_ModeAutoSt_1_4_0, (void*)0);

     //�����������
	 MakeMenu(&menu_ModeDiagM_1_2_0, &menu_ModeDiagM_1_2_1, (void*)0,              &menu_ModeDiagM_1_2,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeDiagM_1_2_1, (void*)0 , 			&menu_ModeDiagM_1_2_0, &menu_ModeDiagM_1_2,  (void*)0, (void*)0);


	//������ ����������

//             curr                   Next                    Prev                    Parent                 Child
	 MakeMenu(&menu_ModeManual_1_1_0, &menu_ModeManual_1_1_1, (void*)0,               &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_1, &menu_ModeManual_1_1_2, &menu_ModeManual_1_1_0, &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_2, &menu_ModeManual_1_1_3, &menu_ModeManual_1_1_1, &menu_ModeManual_1_1,  (void*)0, (void*)0);
	 MakeMenu(&menu_ModeManual_1_1_3, (void*)0, 			  &menu_ModeManual_1_1_2, &menu_ModeManual_1_1,  (void*)0, (void*)0);

	 //���������
//             curr                   Next                  Prev                   Parent                Child
	 MakeMenu(&menu_ModeSetup_1_3_0, &menu_ModeSetup_1_3_2, (void*)0,              &menu_ModeSetup_1_3,  &menu_ModeSetupConf_1_3_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_2, &menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3_0, &menu_ModeSetup_1_3,  &menu_ModeSetupLim_1_3_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3_4, &menu_ModeSetup_1_3_2, &menu_ModeSetup_1_3,  &menu_ModeSetupReg_1_3_3_0, (void*)0);
	 MakeMenu(&menu_ModeSetup_1_3_4, (void*)0,              &menu_ModeSetup_1_3_3, &menu_ModeSetup_1_3,  &menu_ModeSetupServ_1_3_4_0, (void*)0);
	 //���������
     //             curr                          Next                         Prev                           Parent                 Child
	 MakeMenu(&menu_ModeAutoSt_1_4_0, &menu_ModeAutoSt_1_4_1, (void*)0,               &menu_ModeAutoSt_1_4, &startLang_1_0, (void*)0);
	 MakeMenu(&menu_ModeAutoSt_1_4_1, &menu_ModeAutoSt_1_4_2, &menu_ModeAutoSt_1_4_0, &menu_ModeAutoSt_1_4, &progLimitsBorder, (void*)0);
	 MakeMenu(&menu_ModeAutoSt_1_4_2, &menu_ModeAutoSt_1_4_3, &menu_ModeAutoSt_1_4_1, &menu_ModeAutoSt_1_4, &progFullStart, (void*)0);
	 MakeMenu(&menu_ModeAutoSt_1_4_3, (void*)0, 			  &menu_ModeAutoSt_1_4_2, &menu_ModeAutoSt_1_4, &progAutoParam, (void*)0);

	 //������������
//             curr                        Next                         Prev                         Parent                 Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0, &menu_ModeSetupConf_1_3_0_1, (void*)0,                    &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1, &menu_ModeSetupConf_1_3_0_2, &menu_ModeSetupConf_1_3_0_0, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_1_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2, &menu_ModeSetupConf_1_3_0_3, &menu_ModeSetupConf_1_3_0_1, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3, &menu_ModeSetupConf_1_3_0_4, &menu_ModeSetupConf_1_3_0_2, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_3_0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4, (void*)0,                    &menu_ModeSetupConf_1_3_0_3, &menu_ModeSetup_1_3_0, &menu_ModeSetupConf_1_3_0_4_0, (void*)0);

	//������� ����
//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0_0, &menu_ModeSetupConf_1_3_0_0_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_0, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_0_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_0_0, &menu_ModeSetupConf_1_3_0_0, (void*)0, (void*)0);

	 //��� �������
//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1_0, &menu_ModeSetupConf_1_3_0_1_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_1_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_1_0, &menu_ModeSetupConf_1_3_0_1, (void*)0, (void*)0);

	 //������ �����������
//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2_0, &menu_ModeSetupConf_1_3_0_2_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_2, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_2_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_2_0, &menu_ModeSetupConf_1_3_0_2, (void*)0, (void*)0);

	 //������ ��� �����
//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3_0, &menu_ModeSetupConf_1_3_0_3_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_3, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_3_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_3_0, &menu_ModeSetupConf_1_3_0_3, (void*)0, (void*)0);

	 //��������������
//             curr                          Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_0, &menu_ModeSetupConf_1_3_0_4_1, (void*)0,                      &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_1, &menu_ModeSetupConf_1_3_0_4_2, &menu_ModeSetupConf_1_3_0_4_0, &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupConf_1_3_0_4_2, (void*)0,                      &menu_ModeSetupConf_1_3_0_4_1, &menu_ModeSetupConf_1_3_0_4, (void*)0, (void*)0);


	 //�������
//            curr                        Next                        Prev                        Parent                 Child
	 MakeMenu(&menu_ModeSetupLim_1_3_2_0, &menu_ModeSetupLim_1_3_2_1, (void*)0,                   &menu_ModeSetup_1_3_2, &askValve0, 	(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_1, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetupLim_1_3_2_0, &menu_ModeSetup_1_3_2, &askValve100, (void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_2, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_1, &menu_ModeSetup_1_3_2, &menu_ModeSetupLim_1_3_2_2_0,(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_3, &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_2, &menu_ModeSetup_1_3_2, &menu_ModeSetupLim_1_3_2_3_0,(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_4, &menu_ModeSetupLim_1_3_2_5, &menu_ModeSetupLim_1_3_2_3, &menu_ModeSetup_1_3_2, &scSetCut0Per, 	(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_5, &menu_ModeSetupLim_1_3_2_6, &menu_ModeSetupLim_1_3_2_4, &menu_ModeSetup_1_3_2, &scSetCut100Per, 	(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_6, &menu_ModeSetupLim_1_3_2_7, &menu_ModeSetupLim_1_3_2_5, &menu_ModeSetup_1_3_2, &scSetLimit0Per, 	(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_7, (void*)0,                   &menu_ModeSetupLim_1_3_2_6, &menu_ModeSetup_1_3_2, &scSetLimit100Per, (void*)0);

	 //��������� 0%
	 MakeMenu(&menu_ModeSetupLim_1_3_2_2_0, &menu_ModeSetupLim_1_3_2_2_1, (void*)0, 					&menu_ModeSetupLim_1_3_2_2, (void*)0,(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_2_1, (void*)0,				  	  &menu_ModeSetupLim_1_3_2_2_0, &menu_ModeSetupLim_1_3_2_2, (void*)0,(void*)0);

	 //��������� 100%
	 MakeMenu(&menu_ModeSetupLim_1_3_2_3_0, &menu_ModeSetupLim_1_3_2_3_1, (void*)0, 					&menu_ModeSetupLim_1_3_2_3, (void*)0,(void*)0);
	 MakeMenu(&menu_ModeSetupLim_1_3_2_3_1, (void*)0,				  	  &menu_ModeSetupLim_1_3_2_3_0, &menu_ModeSetupLim_1_3_2_3, (void*)0,(void*)0);


	 //���������
//            curr                        Next                        Prev                        Parent                 Child
	 MakeMenu(&menu_ModeSetupReg_1_3_3_0, &menu_ModeSetupReg_1_3_3_1, (void*)0					, &menu_ModeSetup_1_3_3, &scSetPinc, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_1, &menu_ModeSetupReg_1_3_3_2, &menu_ModeSetupReg_1_3_3_0, &menu_ModeSetup_1_3_3, &scSetPdec, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_2, &menu_ModeSetupReg_1_3_3_3, &menu_ModeSetupReg_1_3_3_1, &menu_ModeSetup_1_3_3, &scSetIinc, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_3, &menu_ModeSetupReg_1_3_3_4, &menu_ModeSetupReg_1_3_3_2, &menu_ModeSetup_1_3_3, &scSetIdec, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_4, &menu_ModeSetupReg_1_3_3_5, &menu_ModeSetupReg_1_3_3_3, &menu_ModeSetup_1_3_3, &scSetDinc, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_5, &menu_ModeSetupReg_1_3_3_6, &menu_ModeSetupReg_1_3_3_4, &menu_ModeSetup_1_3_3, &scSetDdec, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_6, &menu_ModeSetupReg_1_3_3_7, &menu_ModeSetupReg_1_3_3_5, &menu_ModeSetup_1_3_3, &scSetDeadZoneDown, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_7, &menu_ModeSetupReg_1_3_3_8, &menu_ModeSetupReg_1_3_3_6, &menu_ModeSetup_1_3_3, &scSetDeadZoneUp, (void*)0);
	 MakeMenu(&menu_ModeSetupReg_1_3_3_8, (void*)0					, &menu_ModeSetupReg_1_3_3_7, &menu_ModeSetup_1_3_3, &scSetDeadValve, (void*)0);

	 //������ �����
//            curr                         Next                         Prev                         Parent                 Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0, &menu_ModeSetupServ_1_3_4_1, (void*)0,                    &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_0_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1, &menu_ModeSetupServ_1_3_4_2, &menu_ModeSetupServ_1_3_4_0, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_1_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2, &menu_ModeSetupServ_1_3_4_3, &menu_ModeSetupServ_1_3_4_1, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_2_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_3, &menu_ModeSetupServ_1_3_4_4, &menu_ModeSetupServ_1_3_4_2, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_3_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_4, &menu_ModeSetupServ_1_3_4_5, &menu_ModeSetupServ_1_3_4_3, &menu_ModeSetup_1_3_4, &menu_ModeSetupServ_1_3_4_4_0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_5, (void*)0,                    &menu_ModeSetupServ_1_3_4_4, &menu_ModeSetup_1_3_4, (void*)0, (void*)0);

	 //����
//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0_0, &menu_ModeSetupServ_1_3_4_0_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_0, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_0_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_0_0, &menu_ModeSetupServ_1_3_4_0, (void*)0, (void*)0);
	 
	 //�������
//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1_0, &menu_ModeSetupServ_1_3_4_1_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_1, (void*)0, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_1_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_1_0, &menu_ModeSetupServ_1_3_4_1, (void*)0, (void*)0);



	  //���������� ����
//            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_0, &menu_ModeSetupServ_1_3_4_2_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_2, &askCurr4mA, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_1, &menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2_0, &menu_ModeSetupServ_1_3_4_2, &askCurr20mA, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2_3, &menu_ModeSetupServ_1_3_4_2_1, &menu_ModeSetupServ_1_3_4_2, &scSetOutput4mA, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_2_3, (void*)0,                      &menu_ModeSetupServ_1_3_4_2_2, &menu_ModeSetupServ_1_3_4_2, &scSetOutput20mA, (void*)0);

	 //���������� ����
	 //            curr                           Next                           Prev                           Parent                       Child
	 MakeMenu(&menu_ModeSetupServ_1_3_4_3_0, &menu_ModeSetupServ_1_3_4_3_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_3, &askAngleP45, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_3_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_3_0, &menu_ModeSetupServ_1_3_4_3, &askAngleN45, (void*)0);

     //����� ��������

     MakeMenu(&menu_ModeSetupServ_1_3_4_4_0, &menu_ModeSetupServ_1_3_4_4_1, (void*)0,                      &menu_ModeSetupServ_1_3_4_4, &askLoadSettings, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_4_1, &menu_ModeSetupServ_1_3_4_4_2, &menu_ModeSetupServ_1_3_4_4_0, &menu_ModeSetupServ_1_3_4_4, &askSaveSettings, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_4_2, &menu_ModeSetupServ_1_3_4_4_3, &menu_ModeSetupServ_1_3_4_4_1, &menu_ModeSetupServ_1_3_4_4, &askWipeSettings, (void*)0);
	 MakeMenu(&menu_ModeSetupServ_1_3_4_4_3, (void*)0,                      &menu_ModeSetupServ_1_3_4_4_2, &menu_ModeSetupServ_1_3_4_4, &askReboot, (void*)0);


MakeProgressItem(&progLimitsBorder,&menu_ModeAutoSt_1_4_1,SAVE_COMMAND_LIMITS_BORDER);
MakeProgressItem(&progFullStart,&menu_ModeAutoSt_1_4_2,SAVE_COMMAND_FULL_START);
MakeProgressItem(&progAutoParam,&menu_ModeAutoSt_1_4_3,SAVE_COMMAND_AUTO_PARAM);


	MakeLightStartMenu(&startLang_1_0, &startLang_1_1,(void*)0,(void*)0,&startScreen_2_0, &dsData.lang);
	MakeLightStartMenu(&startLang_1_1, (void*)0,&startLang_1_0,(void*)0,&startScreen_2_0, &dsData.lang);
	MakeLightStartMenu(&startScreen_2_0, &startScreen_2_1,(void*)0,&startLang_1_0,&startRotation_3_0, &dsData.displayMode);
	MakeLightStartMenu(&startScreen_2_1, (void*)0,&startScreen_2_0,&startLang_1_0,&startRotation_3_0, &dsData.displayMode);
	MakeLightStartMenu(&startRotation_3_0, &startRotation_3_1,(void*)0,&startScreen_2_0,&startTDriver_4_0, &dsData.rotationMode);
	MakeLightStartMenu(&startRotation_3_1, (void*)0,&startRotation_3_0,&startScreen_2_0,&startTDriver_4_0, &dsData.rotationMode);
	MakeLightStartMenu(&startTDriver_4_0, &startTDriver_4_1,(void*)0,&startRotation_3_0,&startTPosish_5_0, &dsData.driverMode);
	MakeLightStartMenu(&startTDriver_4_1, (void*)0,&startTDriver_4_0,&startRotation_3_0,&startTPosish_5_0, &dsData.driverMode);
	MakeLightStartMenu(&startTPosish_5_0, &startTPosish_5_1,(void*)0,&startTDriver_4_0,&startTBackCon_6_0, &dsData.directionPosMode);
	MakeLightStartMenu(&startTPosish_5_1, (void*)0,&startTPosish_5_0,&startTDriver_4_0,&startTBackCon_6_0, &dsData.directionPosMode);
	MakeLightStartMenu(&startTBackCon_6_0, &startTBackCon_6_1,(void*)0,&startTPosish_5_0,&startCharach_7_0, &dsData.feedbackMode);
	MakeLightStartMenu(&startTBackCon_6_1, (void*)0,&startTBackCon_6_0,&startTPosish_5_0,&startCharach_7_0, &dsData.feedbackMode);

	MakeLightStartMenu(&startCharach_7_0, &startCharach_7_1, (void*)0,			&startTBackCon_6_0,&startCalibr_8_0, &dsData.charachMode);
	MakeLightStartMenu(&startCharach_7_1, &startCharach_7_2, &startCharach_7_0, &startTBackCon_6_0,&startCalibr_8_0, &dsData.charachMode);
	MakeLightStartMenu(&startCharach_7_2, (void*)0,			 &startCharach_7_1, &startTBackCon_6_0,&startCalibr_8_0, &dsData.charachMode);

	MakeLightStartMenu(&startCalibr_8_0, &startCalibr_8_1, (void*)0,		 &startCharach_7_0,&progLimitsBorder, (void*)0);
	MakeLightStartMenu(&startCalibr_8_1, &startCalibr_8_2, &startCalibr_8_0, &startCharach_7_0,&progFullStart, (void*)0);
	MakeLightStartMenu(&startCalibr_8_2, (void*)0,		   &startCalibr_8_1, &startCharach_7_0,&progAutoParam, (void*)0);




     MakeAskList(&askAngleP45 ,&menu_ModeSetupServ_1_3_4_3_0);
     MakeAskList(&askAngleN45 ,&menu_ModeSetupServ_1_3_4_3_1);
     MakeAskList(&askValve0 ,&menu_ModeSetupLim_1_3_2_0);
     MakeAskList(&askValve100 ,&menu_ModeSetupLim_1_3_2_1);
     MakeAskList(&askCurr4mA ,&menu_ModeSetupServ_1_3_4_2_0);
     MakeAskList(&askCurr20mA ,&menu_ModeSetupServ_1_3_4_2_1);

     MakeAskList(&askLoadSettings ,&menu_ModeSetupServ_1_3_4_4_0);
     MakeAskList(&askSaveSettings ,&menu_ModeSetupServ_1_3_4_4_1);
     MakeAskList(&askWipeSettings ,&menu_ModeSetupServ_1_3_4_4_2);
     MakeAskList(&askReboot ,&menu_ModeSetupServ_1_3_4_4_3);
     MakeAskList(&askDiagnost ,&menu_ModeDiagM_1_2_0);


     MakeAskList(&askErrClear ,&menu_ModeSetupServ_1_3_4_2_1);



 menu_Diag1_0.AddrValue = &dsData.settingPer;
 menu_Diag1_1.AddrValue = &dsData.settingCur;
 menu_Diag1_2.AddrValue = &dsData.positionPer;
 menu_Diag1_3.AddrValue = &dsData.positionCur;   // ��������� � ��
 menu_Diag1_4.AddrValue = &dsData.errorPer;      // ���������������
 menu_Diag1_5.AddrValue = &dsData.curPosStockDeg; // ��������� ����� � ����
 menu_Diag1_6.AddrValue = &dsData.topLimitDeg;
 menu_Diag1_7.AddrValue = &dsData.botLimitDeg;
 menu_Diag1_8.AddrValue = &dsData.topLimitPer;
 menu_Diag1_9.AddrValue = &dsData.botLimitPer;


 menu_Diag1_10.AddrValue = &dsData.inPressure;    // ������� ��������
 menu_Diag1_11.AddrValue = &dsData.outPressure1; // ��� ����1
 menu_Diag1_12.AddrValue = &dsData.outPressure2; // ��� ����2
 menu_Diag1_13.AddrValue = &dsData.topLimitDeg;  //������� ����������� � ����
 menu_Diag1_14.AddrValue = &dsData.botLimitDeg;  //������ ����������� � ����
 menu_Diag1_15.AddrValue = &dsData.temperature;  //�����������
 menu_Diag1_16.AddrValue = &dsData.workingTime;
 menu_Diag1_17.AddrValue = &dsData.cycles;
 menu_Diag1_19.AddrValue = &dsData.idNumber;

	 dsData.HARTState= HART_OFF ;
	 dsData.USBState = USB_OFF;
	 dsData.CurLoopState = 3;

     MenuLimitCutUpdate();
     SetMenu();
	 tmpScreen = &scSetInput4mA;
	 menu_item = VoidToMenu(&menu_ModeAuto_1_0);
    // menu_item = VoidToMenu(&menu_ModeSetupReg_1_3_3_0);

	 dsData.curScreen =  SCREEN_MAIN_DATA;
    //dsData.curScreen =  SCREEN_SET_PPARAM;
	 paramScreen_test = 12.586;
	 dsData.codeErorr=0;
     dsData.IPVolatgeMax = 2.5;
	 dsData.codeWarning=0;
	 dsData.IPVoltageStepCount=0;
	 dsData.IPVolatgeStep = IPVoltageMas[dsData.IPVoltageStepCount];
	//test_screen.current_value = *test_screen.value_addr;

}



void MenuSelectItemUpdate()
{
	 switch(menu_item->typeOfCurrScr)
	 {
		 case SELECT_TYPE_AUTO:  		 {dsData.modeCtrl = MODE_CTRL_AUTO; dsData.command=SAVE_COMMAND_AUTO;		break;  }
		 case SELECT_TYPE_MAN1:  		 {dsData.modeCtrl = MODE_CTRL_MANUAL1; dsData.command=SAVE_COMMAND_MAN1;		break;  }
		 case SELECT_TYPE_MAN5:  		 {dsData.modeCtrl = MODE_CTRL_MANUAL5; dsData.command=SAVE_COMMAND_MAN5;		break;  }
		 case SELECT_TYPE_MAN10: 		 {dsData.modeCtrl = MODE_CTRL_MANUAL10; dsData.command=SAVE_COMMAND_MAN10;		break;  }
		 case SELECT_TYPE_MAN25: 		 {dsData.modeCtrl = MODE_CTRL_MANUAL25;	dsData.command=SAVE_COMMAND_MAN25;	break;  }
		 case SELECT_TYPE_DIAG:  		 {dsData.modeCtrl = MODE_CTRL_DIAGNOST;	dsData.command=SAVE_COMMAND_DIAG;	break;  }
		 case SELECT_TYPE_ROTAT_FORV: 	 {dsData.rotationMode = MODE_ROTATION_RIGHT; dsData.command=SAVE_COMMAND_ROTAT_FORV;		break;}
		 case SELECT_TYPE_ROTAT_BACK: 	 {dsData.rotationMode = MODE_ROTATION_LEFT;	dsData.command=SAVE_COMMAND_ROTAT_BACK;	 break;}
		 case SELECT_TYPE_DRV_ROT: 	     {dsData.driverMode = MODE_DRIVER_ROTATE; dsData.command=SAVE_COMMAND_DRV_ROT;	break;}
		 case SELECT_TYPE_DRV_LINE: 	 {dsData.driverMode = MODE_DRIVER_LINE; dsData.command=SAVE_COMMAND_DRV_LINE;	break;}
		 case SELECT_TYPE_POS_FORV: 	 {dsData.directionPosMode = MODE_DIRECTION_FORWARD; dsData.command=SAVE_COMMAND_POS_FORV;	break;}
		 case SELECT_TYPE_POS_BACK: 	 {dsData.directionPosMode = MODE_DIRECTION_REVERSE; dsData.command=SAVE_COMMAND_POS_BACK;	break;}
		 case SELECT_TYPE_FEEDBACK_FORV: {dsData.feedbackMode = MODE_FEEDBACK_FORWARD; dsData.command=SAVE_COMMAND_FEEDBACK_FORV;		break;}
		 case SELECT_TYPE_FEEDBACK_BACK: {dsData.feedbackMode = MODE_FEEDBACK_REVERSE; dsData.command=SAVE_COMMAND_FEEDBACK_BACK;		break;}
		 case SELECT_TYPE_CHAR_LINE: 	 {dsData.charachMode = MODE_CHARACTER_LINE;	 dsData.command=SAVE_COMMAND_CHAR_LINE;   break;    }
		 case SELECT_TYPE_CHAR_PERC: 	 {dsData.charachMode = MODE_CHARACTER_PERCENT; dsData.command=SAVE_COMMAND_CHAR_PERC;	break;    }
		 case SELECT_TYPE_CHAR_USER: 	 {dsData.charachMode = MODE_CHARACTER_USER; dsData.command=SAVE_COMMAND_CHAR_USER;	break;        }
		 case SELECT_TYPE_LANG_RU: 	     {dsData.lang = MODE_LANG_RUS;	 dsData.command=SAVE_COMMAND_LANG_RU; break;                  }
		 case SELECT_TYPE_LANG_EN: 	     {dsData.lang = MODE_LANG_ENG;	 dsData.command=SAVE_COMMAND_LANG_EN; break;                  }
		 case SELECT_TYPE_LANG_CH: 	     {dsData.lang = MODE_LANG_CHI;	 dsData.command=SAVE_COMMAND_LANG_CH;  break;                 }
		 case SELECT_TYPE_DISP_NORM: 	 {dsData.displayMode = MODE_DISPLAY_NORMAL; dsData.command=SAVE_COMMAND_DISP_NORM;	break;        }
		 case SELECT_TYPE_DISP_REV: 	 {dsData.displayMode = MODE_DISPLAY_REVERSE; dsData.command=SAVE_COMMAND_DISP_REV;	break;    }

		 case SELECT_TYPE_0PER_OSECHKA: 	 {dsData.valveType0Per = MODE_OTSECHKA; dsData.command=SAVE_COMMAND_SET_OTCECHKA_0PER; MenuLimitCutUpdate();	break;    }
		 case SELECT_TYPE_0PER_LIMIT: 	     {dsData.valveType0Per = MODE_LIMIT; dsData.command=SAVE_COMMAND_SET_LIMIT_0PER;  MenuLimitCutUpdate();	break;    }
		 case SELECT_TYPE_100PER_OSECHKA: 	 {dsData.valveType100Per = MODE_OTSECHKA; dsData.command=SAVE_COMMAND_SET_OTCECHKA_100PER; MenuLimitCutUpdate();	break;    }
         case SELECT_TYPE_100PER_LIMIT: 	 {dsData.valveType100Per = MODE_LIMIT; dsData.command=SAVE_COMMAND_SET_LIMIT_100PER;  MenuLimitCutUpdate();	break;    }

	 }
	// dsData.command = INTERFACE_COMMAND_SAVE;
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
		ErrorListData();
		dsData.pushedButton=BUTTON_NO;
		if(VoidToMenu(menu_item->Child)!=NULL){

		if(menu_item->typeOfNextScr==SCR_TYPE_MENU) menu_item = VoidToMenu(menu_item->Child);  //������� �� ���� �����


		else
		if(menu_item->typeOfNextScr==SCR_TYPE_SET)    //��������� ���������
			{
				tmpScreen = VoidToScreen(menu_item->Child);
				tmpScreen->current_value = *tmpScreen->value_addr;
				tmpScreen->index = 0;
				dsData.curScreen = SCREEN_SET_PPARAM; //���������� ���������
			}


			else
            if(menu_item->typeOfNextScr==SCR_TYPE_ASK)   // ������
        {
          dsData.curScreen =  SCREEN_ASK;
		  tmpAsk = (askItem*)menu_item->Child;
		}

		else
		if(menu_item->typeOfNextScr==SCR_TYPE_PROGRESS)  //�������� ����������
        {
          dsData.curScreen =  SCREEN_PROGRESS;
		  dsData.command = menu_item->saveCommand;
		  tmpProg = (progressItem*)menu_item->Child;
        }

		else
		if(menu_item->typeOfNextScr==SCR_TYPE_ERROR)  //������� ������
		  {

		  dsData.curScreen =  SCREEN_ERRORS;
		  tmpErr = VoidToErrList(menu_item->Child);

		  }
		  else
		  if(menu_item->typeOfNextScr==SCR_TYPE_LIGHT_START)  //������ �����
		  {
			lsItem = (lightStartItem*)menu_item->Child;
			dsData.curScreen = SCREEN_LIGHT_START;
		  }




		}
		else {


        if(menu_item->typeOfNextScr==SCR_TYPE_NULL)  //
        {
           if(menu_item->typeOfCurrScr>=SELECT_TYPE_AUTO)
           MenuSelectItemUpdate();
		}


		if(menu_item->typeOfNextScr==SCR_TYPE_PASS)  dsData.curScreen =  SCREEN_PASS;    //������
		if(menu_item->typeOfNextScr==SCR_TYPE_SPEED)  dsData.curScreen =  SCREEN_SPEED;   //���� � ��������
		if(menu_item->typeOfNextScr==SCR_TYPE_DAIG_IP)  dsData.curScreen =  SCREEN_IP_DIAG;  // ����������� IP ����
	   //	if(menu_item->typeOfNextScr==SCR_TYPE_LIGHT_START)  ;   // ������ �����
		}


	 }
}



void ButtonsSetParam(screenItem *Scr)
{
	float tmp_value;
    	if(Scr->index==0) Scr->index++;
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
			tmp_value  =  my_pow(10,Scr->digits-Scr->index);
		   Scr->current_value -= tmp_value;
        }

		if((Scr->index>Scr->digits+1)&&(Scr->index<=Scr->digits+Scr->fractional+1))
		{
		   tmp_value  =  1.0/my_pow(10,Scr->index-(Scr->digits+1));
		   Scr->current_value -=  tmp_value;
		}
           if(Scr->current_value<=(-1.0*my_pow(10,Scr->digits)+0.0005))
		   Scr->current_value +=  tmp_value;

           if(Scr->current_value<0.0) Scr->current_value = 0.0;


     }
	 if(dsData.pushedButton==BUTTON_UP)
     {
		dsData.pushedButton=BUTTON_NO;

		if(Scr->index==0)
		Scr->current_value = Scr->current_value*(-1.0);
		if((Scr->index>0)&&(Scr->index<=Scr->digits))
		{
			tmp_value = my_pow(10,Scr->digits-Scr->index);
		   Scr->current_value += tmp_value;
		}

		if((Scr->index>(Scr->digits+1))&&(Scr->index<=Scr->digits+Scr->fractional+1))
		{
		tmp_value= 1.0/my_pow(10,Scr->index-(Scr->digits+1));
		   Scr->current_value +=  tmp_value;
		}
		   if(Scr->current_value>=my_pow(10,Scr->digits)-0.0005)
		   Scr->current_value -=  tmp_value;

		if(Scr->index>(Scr->digits+Scr->fractional+1)) {


        *Scr->value_addr = Scr->current_value;
        Scr->index = 0;
        dsData.command = menu_item->saveCommand;
		dsData.curScreen =  SCREEN_MAIN_MENU;

		}
     }
     if(dsData.pushedButton==BUTTON_ENTER)
     {
		dsData.pushedButton=BUTTON_NO;

		Scr->index++;

		if(Scr->index == Scr->digits+1)
        Scr->index++;
	 }
}


void ControlMenuUpdate()
{


	uint8_t pix_i;
   LCD_buffer_clear();

   LCD_DrawString(1, line_3, menu_item->textSize, 0, menu_item->Text,LCD_All_Bolt,INVERSE);
   if(menu_item->Selected){ LCD_DrawString(113, line_3, 3, 0, "[*]",LCD_All_Bolt,INVERSE);      }
   if(menu_item->typeOfCurrScr==VAL_FLOAT) {
	LCD_DrawUFloat(87,line_3,0,20,*(float*)menu_item->AddrValue,menu_item->digits,menu_item->fractional,LCD_All_Bolt);
	}
   if(menu_item->typeOfCurrScr==VAL_INT) {
   LCD_DrawUInt(87, line_3, 0, *(uint32_t*)menu_item->AddrValue, menu_item->digits, LCD_All_Bolt);
   }

   if(menu_item->typeOfCurrScr==VAL_ERR) {
   if(dsData.codeErorr>0){
   LCD_DrawUInt(87, line_3, 0, dsData.ErrorCount, 2, LCD_All_Bolt);
  // LCD_DrawString(105, line_3, 2, 0, "��",LCD_All_Bolt,NO_INVERSE);
   }

   else
   LCD_DrawString(87, line_3, 3, 0, "���",LCD_All_Bolt,NO_INVERSE);
   }


   if(menu_item->typeOfCurrScr==VAL_DATE_PREV) {
   LCD_DrawUInt(87, line_3, 0, dsData.lastService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_3, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_3, 0, dsData.lastService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_3, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_3, 0, dsData.lastService.year, 2, LCD_All_Bolt);
   }

	if(menu_item->typeOfCurrScr==VAL_DATE_NEXT) {
   LCD_DrawUInt(87, line_3, 0, dsData.nextService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_3, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_3, 0, dsData.nextService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_3, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_3, 0, dsData.nextService.year, 2, LCD_All_Bolt);
   }


   LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);

   if(VoidToMenu(menu_item->Next)!=NULL)
   {
   LCD_DrawString(1, line_4, VoidToMenu(menu_item->Next)->textSize, 0, VoidToMenu(menu_item->Next)->Text,LCD_All_Bolt,NO_INVERSE);
   if(VoidToMenu(menu_item->Next)->Selected){ LCD_DrawString(113, line_4, 3, 0, "[*]",LCD_All_Bolt,NO_INVERSE);      }

   if(VoidToMenu(menu_item->Next)->typeOfCurrScr==VAL_FLOAT) {
   LCD_DrawUFloat(87,line_4,0,20,*(float*)VoidToMenu(menu_item->Next)->AddrValue,VoidToMenu(menu_item->Next)->digits,VoidToMenu(menu_item->Next)->fractional,LCD_All_Bolt);   }
   if(VoidToMenu(menu_item->Next)->typeOfCurrScr==VAL_INT) { LCD_DrawUInt(87, line_4, 0, *(uint32_t*)VoidToMenu(menu_item->Next)->AddrValue, VoidToMenu(menu_item->Next)->digits, LCD_All_Bolt);   }

 
   if(VoidToMenu(menu_item->Next)->typeOfCurrScr==VAL_ERR)
 {
   if(dsData.codeErorr>0)
   LCD_DrawUInt(87, line_4, 0, dsData.ErrorCount, 2, LCD_All_Bolt);
   //LCD_DrawString(87, line_4, 4, 0, "����",LCD_All_Bolt,NO_INVERSE);
   else
   LCD_DrawString(87, line_4, 3, 0, "���",LCD_All_Bolt,NO_INVERSE);
   }

   if(VoidToMenu(menu_item->Next)->typeOfCurrScr==VAL_DATE_PREV)
  {
   LCD_DrawUInt(87, line_4, 0, dsData.lastService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_4, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_4, 0, dsData.lastService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_4, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_4, 0, dsData.lastService.year, 2, LCD_All_Bolt);
   }

	if(VoidToMenu(menu_item->Next)->typeOfCurrScr==VAL_DATE_NEXT)
	{
   LCD_DrawUInt(87, line_4, 0, dsData.nextService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_4, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_4, 0, dsData.nextService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_4, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_4, 0, dsData.nextService.year, 2, LCD_All_Bolt);
   }







   }
   if(VoidToMenu(menu_item->Previous)!=NULL)
   {
   LCD_DrawString(1, line_2, VoidToMenu(menu_item->Previous)->textSize, 0, VoidToMenu(menu_item->Previous)->Text,LCD_All_Bolt,NO_INVERSE);
   if(VoidToMenu(menu_item->Previous)->Selected){ LCD_DrawString(113, line_2, 3, 0, "[*]",LCD_All_Bolt,NO_INVERSE);      }
   if(VoidToMenu(menu_item->Previous)->typeOfCurrScr==VAL_FLOAT) {
   LCD_DrawUFloat(87,line_2,0,20,*(float*)VoidToMenu(menu_item->Previous)->AddrValue,VoidToMenu(menu_item->Previous)->digits,VoidToMenu(menu_item->Previous)->fractional,LCD_All_Bolt);   }
   if(VoidToMenu(menu_item->Previous)->typeOfCurrScr==VAL_INT) { LCD_DrawUInt(87, line_2, 0, *(uint32_t*)VoidToMenu(menu_item->Previous)->AddrValue, VoidToMenu(menu_item->Previous)->digits, LCD_All_Bolt);   }


   if(VoidToMenu(menu_item->Previous)->typeOfCurrScr==VAL_ERR) {
   if(dsData.codeErorr>0)
   LCD_DrawUInt(87, line_2, 0, dsData.ErrorCount, 2, LCD_All_Bolt);
   //LCD_DrawString(87, line_2, 4, 0, "����",LCD_All_Bolt,NO_INVERSE);
   else
   LCD_DrawString(87, line_2, 3, 0, "���",LCD_All_Bolt,NO_INVERSE);
   }
   if(VoidToMenu(menu_item->Previous)->typeOfCurrScr==VAL_DATE_PREV) {
   LCD_DrawUInt(87, line_2, 0, dsData.lastService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_2, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_2, 0, dsData.lastService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_2, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_2, 0, dsData.lastService.year, 2, LCD_All_Bolt);
   }

	if(VoidToMenu(menu_item->Previous)->typeOfCurrScr==VAL_DATE_NEXT) {
   LCD_DrawUInt(87, line_2, 0, dsData.nextService.day, 2, LCD_All_Bolt);
   LCD_DrawString(99, line_2, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(101, line_2, 0, dsData.nextService.month, 2, LCD_All_Bolt);
   LCD_DrawString(113, line_2, 1, 0, ":",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(115, line_2, 0, dsData.nextService.year, 2, LCD_All_Bolt);
   }

   }
   if(VoidToMenu(menu_item->Parent)!=NULL)
   {
   LCD_DrawString(0, line_1, VoidToMenu(menu_item->Parent)->textSize, 0,  VoidToMenu(menu_item->Parent)->Text,LCD_All_Bolt,NO_INVERSE);

   }
   LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);
   if(menu_item->typeOfNextScr==SCR_TYPE_MENU) LCD_DrawString(100, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);
   if(menu_item->typeOfNextScr==SCR_TYPE_ASK) LCD_DrawString(108, line_5,4, 0, "����",ABB_Font,NO_INVERSE);
   if(menu_item->typeOfNextScr==SCR_TYPE_SET) LCD_DrawString(108, line_5,4, 0, "����",ABB_Font,NO_INVERSE);
   if(menu_item->typeOfNextScr==SCR_TYPE_LIGHT_START) LCD_DrawString(108, line_5,4, 0, "����",ABB_Font,NO_INVERSE);
   if(menu_item->typeOfNextScr==SCR_TYPE_PROGRESS) LCD_DrawString(108, line_5,4, 0, "����",ABB_Font,NO_INVERSE);
   if((menu_item->typeOfCurrScr>=SELECT_TYPE_AUTO)&&(menu_item->typeOfCurrScr<=SELECT_TYPE_100PER_LIMIT)) LCD_DrawString(86, line_5,9, 0, "���������",ABB_Font,NO_INVERSE);



}

void SetParamUpdate(screenItem *Scr)
{

uint8_t pix_i;
	 LCD_buffer_clear();

	 LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);




   if(VoidToMenu(Scr->Previous)!=NULL)
   {
   LCD_DrawString(0, 0, VoidToMenu(Scr->Previous)->textSize, 0,  VoidToMenu(Scr->Previous)->Text,LCD_All_Bolt,NO_INVERSE);
   }
	 LCD_DrawUFloat(42,20,1,20,*Scr->value_addr,Scr->digits,Scr->fractional,LCD_All_Bolt);
	 LCD_DrawString(102, 20, 4, 0,  Scr->Text,LCD_All_Bolt,NO_INVERSE);
	 LCD_DrawString(2, 20, 6, 0,  "�����:",LCD_All_Bolt,NO_INVERSE);

	 LCD_DrawUFloat(10,40,1,Scr->index,Scr->current_value,Scr->digits,Scr->fractional,LCD_All_Bolt);
	 if(Scr->index>Scr->digits+ Scr->fractional+1)
	 LCD_DrawString(100, 40, 3, 0,  "��?",LCD_All_Bolt,INVERSE);
    else  LCD_DrawString(100, 40, 3, 0,  "��?",LCD_All_Bolt,NO_INVERSE);
	 if(Scr->index>Scr->digits+ Scr->fractional+2)  Scr->index=0;



      LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,6, 0, "������",ABB_Font,NO_INVERSE);

  LCD_DrawString(100, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);

  if(Scr->index>Scr->digits+ Scr->fractional+1) LCD_DrawString(45, line_5,10, 0, "^���������",ABB_Font,NO_INVERSE);
  else LCD_DrawString(45, line_5,9, 0, "^��������",ABB_Font,NO_INVERSE);


     
}


void MainScreenUpdate()
{
	LCD_buffer_clear();

	LCD_Plot_Horisontal_Line (0,127,0,0);
	LCD_Plot_Horisontal_Line (0,127,18,0);
   LCD_Plot_Vertical_Line (127,1,17,0);
   LCD_Plot_Vertical_Line (48,1,17,0);
   LCD_Plot_Vertical_Line (0,1,17,0);

	switch (dsData.modeCtrl) {
		case MODE_CTRL_AUTO: LCD_DrawString(18, 1, 1, 0,  "A",Font_with_pic,NO_INVERSE);break;
		case MODE_CTRL_MANUAL1: LCD_DrawString(8, 1, 3, 0,  "P1%",Font_with_pic,NO_INVERSE);break;
		case MODE_CTRL_MANUAL5: LCD_DrawString(8, 1, 3, 0,  "P5%",Font_with_pic,NO_INVERSE);break;
		case MODE_CTRL_MANUAL10: LCD_DrawString(3, 1, 4, 0,  "P10%",Font_with_pic,NO_INVERSE);break;
		case MODE_CTRL_MANUAL25: LCD_DrawString(3, 1, 4, 0,  "P25%",Font_with_pic,NO_INVERSE);break;
		case MODE_CTRL_DIAGNOST: LCD_DrawString(5, 1, 1, 0,  "�",Font_with_pic,NO_INVERSE);break;
    }


	//LCD_DrawString(60, 2, 9, 0,  "���������",ABB_Font,NO_INVERSE);
	LCD_DrawUFloat(50,1,0,20,dsData.positionPer,3,2,Font_with_pic);
   //	LCD_DrawString(60,15, 3, 0,  "   ",LCD_All_Bolt,NO_INVERSE);

   LCD_DrawChar(114, 1, '%',Font_with_pic, NO_INVERSE);

	LCD_DrawString(6, 20, 8, 0,  "�������:",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(48,20,1,20,dsData.settingPer,3,2,LCD_All_Bolt);
	//LCD_DrawString(30,45, 3, 0,  "   ",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawChar(94, 20, '%',LCD_All_Bolt, NO_INVERSE);

	LCD_DrawString(28, 32, 4, 0,  "���:",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(48,32,1,20,dsData.settingCur,3,2,LCD_All_Bolt);
	LCD_DrawString(94, 32, 2, 0,  "��",LCD_All_Bolt,NO_INVERSE);

	if(dsData.codeErorr>0)
	{
		LCD_DrawString(1, 45, 1, 0,  "�",Font_with_pic,NO_INVERSE); //������
		if(dsData.ErrorCount>9) LCD_DrawUInt(19, 48, 0, dsData.ErrorCount, 2, LCD_All_Bolt);
		else LCD_DrawUInt(19, 48, 0, dsData.ErrorCount, 1, LCD_All_Bolt);
	}
	if(dsData.codeWarning>0)
	{
	LCD_DrawString(34, 44, 1, 0,  "�",Font_with_pic,NO_INVERSE); // ��������������
	LCD_DrawUInt(56, 48, 0, dsData.ErrorCount, 2, LCD_All_Bolt);
	}
	if(dsData.HARTState == HART_ON)	LCD_DrawString(72, 47, 1, 0,  "�",Font_with_pic,NO_INVERSE); // HART

	if(dsData.CurLoopState == CUR_LOOP_ON) LCD_DrawString(103, 46, 1, 0,  "�",Font_with_pic,NO_INVERSE);
	if(dsData.CurLoopState == CUR_LOOP_OFF) LCD_DrawString(103, 46, 1, 0,  "�",Font_with_pic,NO_INVERSE);
	if(dsData.CurLoopState == CUR_LOOP_ERROR) LCD_DrawString(103, 46, 1, 0,  "�",Font_with_pic,NO_INVERSE);


	
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
		dsData.command = SAVE_COMMAND_DEC_PERCENT;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL1)
		  dsData.settingPer-=1.0;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL5)
		  dsData.settingPer-=5.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL10)
		  dsData.settingPer-=10.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL25)
		  dsData.settingPer-=25.0;
	  if((dsData.settingPer<0.0)&&(dsData.modeCtrl != MODE_CTRL_AUTO)) dsData.settingPer = 0.0;

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.command = SAVE_COMMAND_INC_PERCENT;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL1)
		  dsData.settingPer+=1.0;
		if(dsData.modeCtrl == MODE_CTRL_MANUAL5)
		  dsData.settingPer+=5.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL10)
		  dsData.settingPer+=10.0;
	   if(dsData.modeCtrl == MODE_CTRL_MANUAL25)
		  dsData.settingPer+=25.0;
       if((dsData.settingPer>100.0)&&(dsData.modeCtrl != MODE_CTRL_AUTO)) dsData.settingPer = 100.0;
	 }
	 if(dsData.pushedButton==BUTTON_ENTER)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.curScreen =  SCREEN_MAIN_MENU;
		menu_item = VoidToMenu(&menu_ModeAuto_1_0);
	 }
}

void ProgressUpdate(void)
{
uint8_t i;
	LCD_buffer_clear();
	LCD_DrawString(2, 2, menu_item->textSize, 0,  menu_item->Text,LCD_All_Bolt,INVERSE);
	LCD_Plot_Horisontal_Line (0,127,30,0);
	LCD_Plot_Vertical_Line (0,31,49,0);

	LCD_Plot_Horisontal_Line (0,127,50,0);
	LCD_Plot_Vertical_Line (127,31,49,0);
	if((*dsData.progress>=100)&&(*dsData.progress<150))
	{LCD_DrawString(38, 33, 9, 0,  "���������",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawString(87, line_5,9, 0, "���������",ABB_Font,NO_INVERSE); }
	if(*dsData.progress<100)
	for (i = 0; i < (uint8_t)((*dsData.progress)*1.28); i++) {
	LCD_Plot_Vertical_Line (i,32,48,0);
	}
	if(*dsData.progress>150)
	LCD_DrawString(45, 33, 6, 0,  "������",LCD_All_Bolt,NO_INVERSE);

	LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,6, 0, "������",ABB_Font,NO_INVERSE);


}

void ButtonProgressUpdate(void)
{
			if(dsData.pushedButton==BUTTON_BACK)
	 {
	   dsData.pushedButton = BUTTON_NO;
	 //  if(*dsData.progress<100){
       dsData.command = SAVE_COMMAND_ABORT;

	   dsData.curScreen =  SCREEN_MAIN_MENU;
       //}
	 /*  if((*dsData.progress>=100)&&(*dsData.progress<150))
		dsData.curScreen =  SCREEN_MAIN_MENU;
        if(*dsData.progress>=150)
        dsData.curScreen =  SCREEN_MAIN_MENU;   */
	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
	   if((*dsData.progress>=100)&&(*dsData.progress<150))
		dsData.curScreen =  SCREEN_MAIN_MENU;
		dsData.command = tmpProg->saveCommand;
	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		if((*dsData.progress>=100)&&(*dsData.progress<150))
		dsData.curScreen =  SCREEN_MAIN_MENU;
		dsData.command = tmpProg->saveCommand;
	 }
	 if(dsData.pushedButton==BUTTON_ENTER)
	 {
		dsData.pushedButton = BUTTON_NO;
		if((*dsData.progress>=100)&&(*dsData.progress<150))
		dsData.curScreen =  SCREEN_MAIN_MENU;
        dsData.command = tmpProg->saveCommand;

	 }
}

void ErrorListUpdate(void)
{

uint8_t i;
uint16_t index;
index = 0;
	LCD_buffer_clear();
	LCD_DrawString(0, 0, 7, 0,  "������:",LCD_All_Bolt,NO_INVERSE);
   LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);
 		for (i = 0; i < NUMBER_OF_ERRORS; i++)
		{

			if(((dsData.codeErorr>>i)&0x01)==0x01)
			{
			index++;
			}
			}



   if(index==0) LCD_DrawString(65, 0, 6, 0,  "0 �� 0",LCD_All_Bolt,NO_INVERSE);
   if(index>0) {
   LCD_DrawUInt(63, 0, 0, tmpErr->index, 3, LCD_All_Bolt);
   LCD_DrawString(87, 0, 2, 0,  "��",LCD_All_Bolt,NO_INVERSE);
   LCD_DrawUInt(104, 0, 0, index, 3, LCD_All_Bolt);

   LCD_DrawString(2, line_2, tmpErr->lengh1, 0,  tmpErr->Text1,LCD_All_Bolt,NO_INVERSE);
   LCD_DrawString(2, line_3, tmpErr->lengh2, 0,  tmpErr->Text2,LCD_All_Bolt,NO_INVERSE);
   LCD_DrawString(2, line_4, tmpErr->lengh3, 0,  tmpErr->Text3,LCD_All_Bolt,NO_INVERSE);


   }
   LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);
   LCD_DrawString(78, line_5,12, 0, "�������� ���",ABB_Font,NO_INVERSE);
}

 void ButtonErrorUpdate(void)
{
			if(dsData.pushedButton==BUTTON_BACK)
	 {
		  dsData.pushedButton=BUTTON_NO;
		  dsData.curScreen =  SCREEN_MAIN_MENU;

	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
		 if(tmpErr->Next!=NULL) tmpErr = VoidToErrList(tmpErr->Next);

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		if(tmpErr->Previous!=NULL) tmpErr = VoidToErrList(tmpErr->Previous);
	 }
	 if(dsData.pushedButton==BUTTON_ENTER)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.curScreen =  SCREEN_MAIN_MENU;
        dsData.command = SAVE_COMMAND_CLEAR_ERROR;
	 }
}



void  ButtonAskUpdate(void)
{
		if(dsData.pushedButton==BUTTON_BACK)
	 {
		  dsData.pushedButton=BUTTON_NO;
		  dsData.curScreen =  SCREEN_MAIN_MENU;

	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;


	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;

	 }
	  if(dsData.pushedButton==BUTTON_ENTER)
	 {
	   dsData.pushedButton=BUTTON_NO;
	   dsData.command = tmpAsk->saveCommand;
	   dsData.curScreen =  SCREEN_MAIN_MENU;
	   menu_item = (menuItem*)tmpAsk->Previous;
	   if(tmpAsk->saveCommand == SAVE_COMMAND_DIAG) {
       dsData.modeCtrl = MODE_CTRL_DIAGNOST;
       dsData.command=SAVE_COMMAND_DIAG;
       }
	 }
}

void  ScreenAskUpdate(void)
{

uint8_t pix_i;
	 LCD_buffer_clear();

	 LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);




   if(VoidToMenu(tmpAsk->Previous)!=NULL)
   {
   LCD_DrawString(0, 0, VoidToMenu(tmpAsk->Previous)->textSize, 0,  VoidToMenu(tmpAsk->Previous)->Text,LCD_All_Bolt,NO_INVERSE);
   }

    LCD_DrawString(0, 21, tmpAsk->textSize1, 0,  tmpAsk->Text1,LCD_All_Bolt,NO_INVERSE);

    LCD_DrawString(0, 35, tmpAsk->textSize2, 0,  tmpAsk->Text2,LCD_All_Bolt,NO_INVERSE);


	  LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,6, 0, "������",ABB_Font,NO_INVERSE);
  LCD_DrawString(87, line_5,9, 0, "���������",ABB_Font,NO_INVERSE);



}

void ButtonSpeedUpdate (void)
{
       	if(dsData.pushedButton==BUTTON_BACK)
	 {
		  dsData.pushedButton=BUTTON_NO;
		  dsData.curScreen =  SCREEN_MAIN_MENU;

	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
		  dsData.command = SAVE_COMMAND_SPEED_MEAS_DOWN;

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.command = SAVE_COMMAND_SPEED_MEAS_UP;
	 }
	  if(dsData.pushedButton==BUTTON_ENTER)
	 {
	   dsData.pushedButton=BUTTON_NO;

	 }
}

void ScreenSpeedUpdate(void)
{


  LCD_buffer_clear();

	LCD_DrawString(0,line_1, 15, 0,  "���� � ��������",LCD_All_Bolt,NO_INVERSE);
   LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);

	LCD_DrawString(0,line_2, 18, 0,  "����. �����. ����:",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawString(122,line_2, 1, 0,  "�",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(89,line_2,0,20,dsData.SpeedUp,2,2,LCD_All_Bolt);

	LCD_DrawString(0,line_3, 18, 0,  "����. �����. ����:",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawString(122,line_3, 1, 0,  "�",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(89,line_3,0,20,dsData.SpeedDown,2,2,LCD_All_Bolt);

	LCD_DrawString(0,line_4, 25, 0,  "����: ����:          ���:",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(51,line_4,0,20,dsData.topLimitDeg,2,1,LCD_All_Bolt);
    LCD_DrawUFloat(101,line_4,0,20,dsData.botLimitDeg,2,1,LCD_All_Bolt);

	  LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,6, 0, "������",ABB_Font,NO_INVERSE);
  LCD_DrawString(45, line_5,9, 0, "^��������",ABB_Font,NO_INVERSE);

}

void ButtonDiagIPUpdate (void)
{


		if(dsData.pushedButton==BUTTON_BACK)
	 {
		  dsData.pushedButton=BUTTON_NO;
		  dsData.curScreen =  SCREEN_MAIN_MENU;

	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.command = SAVE_COMMAND_IP_VOLTAGE_DEC;

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
		dsData.command = SAVE_COMMAND_IP_VOLTAGE_INC;
	 }
	  if(dsData.pushedButton==BUTTON_ENTER)
	 {
	   dsData.pushedButton=BUTTON_NO;
	   dsData.IPVoltageStepCount++;
	   if(dsData.IPVoltageStepCount>=IP_VOLTAGE_STEPS)  dsData.IPVoltageStepCount = 0;
	   dsData.IPVolatgeStep = IPVoltageMas[dsData.IPVoltageStepCount];
	 }


}



void ScreenDiagIPUpdate (void)
{

   uint8_t i;
   float tmp;
	LCD_buffer_clear();
	LCD_DrawString(0,line_1, 17, 0,  "����������� I / P",LCD_All_Bolt,NO_INVERSE);
	   LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);

	LCD_Plot_Horisontal_Line (0,127,30,0);
	LCD_Plot_Vertical_Line (0,31,49,0);

	LCD_Plot_Horisontal_Line (0,127,50,0);
	LCD_Plot_Vertical_Line (127,31,49,0);

	LCD_DrawUFloat(45,line_2,0,20,dsData.IPVolatge,1,2,LCD_All_Bolt);
	LCD_DrawString(0,line_2, 3, 0,  "0 �",LCD_All_Bolt,NO_INVERSE);
	LCD_DrawUFloat(100,line_2,0,20,dsData.IPVolatgeMax,1,2,LCD_All_Bolt);

	tmp = ( dsData.IPVolatge *(126.0 / dsData.IPVolatgeMax));
	i = (uint8_t) tmp;
	LCD_Plot_Vertical_Line (i,32,48,0);
	LCD_Plot_Vertical_Line (i+1,32,48,0);

	  LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);
  LCD_DrawString(35, line_5,9, 0, "^��������",ABB_Font,NO_INVERSE);
  LCD_DrawString(86, line_5,4, 0, "���:",ABB_Font,NO_INVERSE);
  LCD_DrawUFloat(104,line_5,0,20,IPVoltageMas[dsData.IPVoltageStepCount],1,2,ABB_Font);

}


void ButtonLightStartUpdate (void)
{
		if(dsData.pushedButton==BUTTON_BACK)
	 {
		  dsData.pushedButton=BUTTON_NO;

		  if(lsItem->Parent!=NULL)
		  lsItem = (lightStartItem*)lsItem->Parent;
		  else
		  dsData.curScreen =  SCREEN_MAIN_MENU;

	 }
	 if(dsData.pushedButton==BUTTON_DOWN)
	 {
		dsData.pushedButton=BUTTON_NO;
	   if(lsItem->Next!=NULL)
   {
	   lsItem = (lightStartItem*)lsItem->Next;
   }

	 }
	 if(dsData.pushedButton==BUTTON_UP)
	 {
		dsData.pushedButton=BUTTON_NO;
         if(lsItem->Previous!=NULL)
   {
	   lsItem = (lightStartItem*)lsItem->Previous;
   }
	 }
	  if(dsData.pushedButton==BUTTON_ENTER)
	 {
	   dsData.pushedButton=BUTTON_NO;
	   dsData.command= lsItem->saveCommand;
	   if(lsItem->AddrValue!=NULL) *lsItem->AddrValue = lsItem->value;

	   if(lsItem->Child!=NULL)
	   {
	   if(lsItem->typeOfNextScr == SCR_TYPE_PROGRESS)
	   {
	   dsData.curScreen = SCREEN_PROGRESS;
	   tmpProg = (progressItem*)lsItem->Child;
	   }
	   else
	   {
		lsItem = (lightStartItem*)lsItem->Child;
       }
	   }

	 }


}
 void ScreenLightStartUpdate (void)
{
      	uint8_t pix_i;
   LCD_buffer_clear();

   LCD_DrawString(1, line_3, lsItem->textSize, 0, lsItem->Text,LCD_All_Bolt,INVERSE);
   LCD_DrawString(0, line_1, lsItem->captionSize, 0,  lsItem->Caption,LCD_All_Bolt,NO_INVERSE);

   if(lsItem->Selected){ LCD_DrawString(113, line_3, 3, 0, "[*]",LCD_All_Bolt,INVERSE);      }
   LCD_Plot_Horisontal_Line (0,127,12,0);
   LCD_Plot_Horisontal_Line (0,127,13,0);

   if(lsItem->Next!=NULL)
   {
   LCD_DrawString(1, line_4, ((lightStartItem*)(lsItem->Next))->textSize, 0, ((lightStartItem*)(lsItem->Next))->Text,LCD_All_Bolt,NO_INVERSE);
   if(((lightStartItem*)(lsItem->Next))->Selected){ LCD_DrawString(113, line_4, 3, 0, "[*]",LCD_All_Bolt,NO_INVERSE);      }

   }

	if(lsItem->Previous!=NULL)
   {
   LCD_DrawString(1, line_2, ((lightStartItem*)(lsItem->Previous))->textSize, 0, ((lightStartItem*)(lsItem->Previous))->Text,LCD_All_Bolt,NO_INVERSE);
   if(((lightStartItem*)(lsItem->Previous))->Selected){ LCD_DrawString(113, line_2, 3, 0, "[*]",LCD_All_Bolt,NO_INVERSE);      }

   }

   LCD_Plot_Horisontal_Line (0,127,55,0);
   LCD_DrawString(0, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);
   LCD_DrawString(100, line_5,5, 0, "�����",ABB_Font,NO_INVERSE);

}

void RefreshMenu(void)
{
	  switch(dsData.curScreen)
      {
		  case SCREEN_MAIN_DATA:   {
		  ButtonMainScreen();
		  MainScreenUpdate();          					break;}

		  case SCREEN_MAIN_MENU:
          {
		  ButtonsControlMenu();
		  ControlMenuUpdate();
														break;}

		  case SCREEN_SET_PPARAM:
		  {ButtonsSetParam(tmpScreen);
		  SetParamUpdate(tmpScreen);             		break;}

		  case SCREEN_PROGRESS:
		  {ButtonProgressUpdate();
		  ProgressUpdate();             				break;}

		  case SCREEN_ERRORS:
		  {ButtonErrorUpdate();
		  ErrorListUpdate();             				break;}


		  case SCREEN_ASK:
		  {ButtonAskUpdate();
		  ScreenAskUpdate();             				break;}

		  case SCREEN_IP_DIAG:
		  {ButtonDiagIPUpdate();
		  ScreenDiagIPUpdate();           				break;}

		  case SCREEN_SPEED:
		  {ButtonSpeedUpdate();
		  ScreenSpeedUpdate();
			break;}

		  case SCREEN_PASS:
		  {            				break;}

          case SCREEN_LIGHT_START:
		  { ButtonLightStartUpdate();
		  ScreenLightStartUpdate();
		             				break;}


	  }

	  SetMenu();
      ErrorCountUpdate();
}
