/*

	更新、描画を行うクラスを管理するクラス
	ソース

*/





#include "UpdateAndDrawManagerClass.h"





using namespace ManagerClass;

//更新
void UpdateAndDrawManagerClass::AllUpdate()
{
	//foreach文で全ての更新
	for (auto data : BasicClasesList)
	{
		data->Update();
	}
}

//描画
void UpdateAndDrawManagerClass::AllDraw()
{
	//foreach文で全ての描画
	for (auto data : BasicClasesList)
	{
		data->Draw();
	}
}


//登録
void UpdateAndDrawManagerClass::Register(std::shared_ptr<BasicClass::UpdateAndDrawClass> _RegisteredPerson)
{
	//データリストの末尾に登録
	BasicClasesList.push_back(_RegisteredPerson);
}



//除外
void UpdateAndDrawManagerClass::Exclusion(std::shared_ptr<BasicClass::UpdateAndDrawClass> _ExcludedPerson)
{
	//イテレーター
	std::list<std::shared_ptr<BasicClass::UpdateAndDrawClass> >::iterator
		it;

	//データリストから除外するデータを検索し除外する
	for (it = BasicClasesList.begin(); it != BasicClasesList.end();)
	{
		if ((*it) == _ExcludedPerson){
			it = BasicClasesList.erase(it);
		}
		else{
			it++;
		}
	}

}


//全て削除
void UpdateAndDrawManagerClass::Clear()
{
	BasicClasesList.clear();
}


