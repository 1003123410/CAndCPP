#include <stdio.h>
#include <Windows.h>

bool UnicodeToAnsi(const char *pAnsi, wchar_t **pUnicode){		//const CHAR *pAnsi, WCHAR *pUnicode

	if(nullptr == pAnsi){
	
		return false;
	}

	//�����һ��size��������ô������֪������һ��size
	int nSize = sizeof(pAnsi);
	size_t szAnsi = MultiByteToWideChar(CP_ACP, 0, pAnsi, -1, nullptr, 0);
	*pUnicode = new wchar_t[szAnsi];
	if(szAnsi == MultiByteToWideChar(CP_ACP, 0, pAnsi, szAnsi, *pUnicode, szAnsi)){
	
		return true;
	}

	return false;

}

int main(int *argc, int *argv[]){

	char *szDemo = "abcd";			//���ֽ� խ�ֽ� ASCII�ֽ�
	wchar_t *wszDemo = L"abcd";		//���ֽ� ���ֽ� Unicode�ֽ�

	wchar_t szOut[MAXBYTE] = {0};	//����д����һ����Σ�գ��������

	int c = 100;
	int *a = new int[c];

	//խ�ַ�ת���ַ�
	MultiByteToWideChar(CP_ACP, 0, szDemo, strlen(szDemo), szOut, strlen(szDemo));
	printf("szDemo: %s\n", szDemo);		//խ�ַ� �����ַ���Ϊ	\0
	printf("szOut: %ws\n", szOut);		//���ַ� �����ַ���Ϊ	0000

	//�����Ȼ�ȡ�����ڽ��з��䣬��������װһ��
	wchar_t *szOut2 = nullptr;
	UnicodeToAnsi(szDemo, &szOut2);

	printf("szDemo: %s\n", szDemo);
	printf("szOut2: %ws\n", szOut2);

	delete szOut2;
	getchar();
	return 0;
}