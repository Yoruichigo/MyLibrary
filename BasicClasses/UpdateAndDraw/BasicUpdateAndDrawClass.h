/*

	更新と描画を行う基底クラス
	ヘッダ

	//enable_shard_from_thisを継承し、自分のスマートポインタを返せるようにする。
	//Create関数を使用してインスタンスを生成するように

*/


#pragma once

#include <memory>


namespace MyLib
{
	
	
	class UpdateAndDrawClass : public std::enable_shared_from_this<UpdateAndDrawClass>{
	protected:
		UpdateAndDrawClass(){}

	public:
		virtual ~UpdateAndDrawClass(){}

		//更新関数
		virtual void Update() = 0;

		//描画関数
		virtual void Draw() = 0;

		
		//<class T>のインスタンスを作成します
		template<class T>
			static inline std::shared_ptr<T> CreateInstance(){
				auto ins = std::make_shared<T>();
				return ins;
		}


		//インスタンス取得関数
		std::shared_ptr<UpdateAndDrawClass> GetInstance(){
			return this->shared_from_this();
		}


	};



}

