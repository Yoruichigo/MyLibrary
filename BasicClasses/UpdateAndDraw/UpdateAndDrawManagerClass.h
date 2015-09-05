/*

	更新、描画を行うクラスを管理するクラス
	ソース

*/

#pragma once

#include <memory>
#include <list>

#include "BasicUpdateAndDrawClass.h"



namespace MyLib
{


	class UpdateAndDrawManagerClass{
	public:
		UpdateAndDrawManagerClass(){}
		~UpdateAndDrawManagerClass(){}

		//登録してあるクラスの更新を行います
		void AllUpdate();

		//登録してあるクラスの描画を行います
		void AllDraw();

		//クラスの登録を行います
		void Register(std::shared_ptr<UpdateAndDrawClass> _RegisteredPerson);

		//登録してあるクラスを除外します
		void Exclusion(std::shared_ptr<UpdateAndDrawClass> _ExcludedPerson);

		//登録してあるクラスを"全て"除外します
		void Clear();

		//登録データリストの取得
		const std::list<std::shared_ptr<UpdateAndDrawClass> > &GetDataList(){
			return BasicClassesList;
		}

	private:
		
		//登録データリスト
		std::list< std::shared_ptr<UpdateAndDrawClass> > BasicClassesList;

	};


}




