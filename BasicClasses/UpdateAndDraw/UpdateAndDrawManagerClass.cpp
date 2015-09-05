/*

	更新、描画を行うクラスを管理するクラス
	ソース

*/





#include "UpdateAndDrawManagerClass.h"





using namespace MyLib;

	

//更新
void UpdateAndDrawManagerClass::AllUpdate()
{
	//foreach文で全ての更新
	for (auto data : BasicClassesList)
	{
		data->Update();
	}
}

//描画
void UpdateAndDrawManagerClass::AllDraw()
{
	//foreach文で全ての描画
	for (auto data : BasicClassesList)
	{
		data->Draw();
	}
}


//登録
void UpdateAndDrawManagerClass::Register(std::shared_ptr<UpdateAndDrawClass> _RegisteredPerson)
{
	//データリストの末尾に登録
	BasicClassesList.push_back(_RegisteredPerson);

	int a = (*BasicClassesList.begin()).use_count();

	int b = 0;
}



//除外
void UpdateAndDrawManagerClass::Exclusion(std::shared_ptr<UpdateAndDrawClass> _ExcludedPerson)
{
	//イテレーター
	std::list<std::shared_ptr<UpdateAndDrawClass> >::iterator
		it;

	//データリストから除外するデータを検索し除外する
	for (it = BasicClassesList.begin(); it != BasicClassesList.end();)
	{
		if ((*it) == _ExcludedPerson){
			it = BasicClassesList.erase(it);
		}
		else{
			it++;
		}
	}

}


//全て削除
void UpdateAndDrawManagerClass::Clear()
{
	BasicClassesList.clear();
}

