#include "Hero.h"

namespace NS_SUV{

	CHero::CHero(){

	}
	CHero::~CHero(){

	}
	bool CHero::Initialize(){
		return true;
	}
	bool CHero::Update(float dt){
		return true;
	}

	/*player fresh*/
	 void CHero::ReLoad(){}
	 void CHero::OnEvent(){}

	/* player Status*/
	 void CHero::setPosition(const CCPoint& pos){

	 }
	 CCPoint CHero::getPosition(){
		 return ccp(0,0);
	 }

	 void CHero::idle(){}
	 void CHero::hert(){}
	 void CHero::die(){}

	 int CHero::getHP(){
		 return 0;
	 }
	 int CHero::getMP(){
		 return 0;
	 }

	 int CHero::mBuffState(){
		 return 0;
	 }
}