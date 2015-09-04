/*

	更新と描画を行う基底クラス
	ヘッダ

*/


#pragma once

#include <memory>


namespace BasicClass
{
	
	class UpdateAndDrawClass{
	public:
		UpdateAndDrawClass(){}
		virtual ~UpdateAndDrawClass(){}

		//更新関数
		virtual void Update() = 0;

		//描画関数
		virtual void Draw() = 0;



		//インスタンス取得関数
		std::shared_ptr<UpdateAndDrawClass> GetInstance(){
			return std::shared_ptr<UpdateAndDrawClass>(this);
		}

	};



}

