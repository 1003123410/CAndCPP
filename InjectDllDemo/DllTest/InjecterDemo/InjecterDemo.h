
// InjecterDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInjecterDemoApp:
// �йش����ʵ�֣������ InjecterDemo.cpp
//

class CInjecterDemoApp : public CWinApp
{
public:
	CInjecterDemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CInjecterDemoApp theApp;