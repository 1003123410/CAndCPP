#include "moduleAdmin.h"

#define MAX_PROC 100

int g_iProCnt = 0;	//ȫ�ֵ�ǰ���һ��g
MOUDLE_DATA_S FunList[MAX_PROC] = {0};

int RegisterProc(int iModule, pProcFun pFun){

	if(g_iProCnt == MAX_PROC){
		
		return ERR;
	}

	FunList[g_iProCnt].iModule = iModule;
	FunList[g_iProCnt].pFun = pFun;

	g_iProCnt++;
	return OK;
}

//����ע��ĺ���
int ExcuteAllModule(){

	for(int i = 0; i < g_iProCnt; i++){
		
		FunList[i].pFun();
	}

	return OK;
}