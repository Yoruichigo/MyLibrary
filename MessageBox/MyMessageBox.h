/*

	メッセージボックスの簡略用
	ヘッダ

*/

#pragma once

#include <Windows.h>


namespace MyLib
{
	//OKボタンのみ
	inline void MessageBoxOK(LPCTSTR _Title,LPCTSTR _text){
		MessageBox(NULL, _text,_Title, MB_OK);
	}

	inline void MessageBoxErrOK(LPCTSTR _Title, LPCTSTR _text){
		MessageBox(NULL, _text, _Title, MB_OK | MB_ICONERROR);
	}


}
