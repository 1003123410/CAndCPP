#pragma once

#include "stdef.h"

typedef enum tagMODULE_SETS	//SETS��ʾ����ö�ټ���
{
	MY_ALL_MODULE = 0,
	MY_READ_MODULE = 1,
	MY_WRITE_MODULE = 2,

	MY_INVALID_MODULE = 0xffff

}MODULE_SETS_E;	//E��ʾenum

typedef int(*pProcFun)();

typedef struct tagMoudleData	//һ����й���Ľṹ����C�����ж���tagXXXX
{
	int iModule;		//ÿ��ģ��ΨһID
	pProcFun pFun;
}MOUDLE_DATA_S;		//һ���ڽṹ���β����S������struct;


int RegisterProc(int iModule, pProcFun pFun);
int ExcuteAllModule();
