#ifndef __bind_SSPART__
#define __bind_SSPART__


#include "package_SpriteStudio.h"


class Bind_SsPart : public myPyBinder<SsPart>
{
public:
	Bind_SsPart(){}
	Bind_SsPart(SsPart* p){bind(p);}
	virtual ~Bind_SsPart(){}

	bool	debug();
	
	//SsPart�̃����o�[�𑀍삷��
	const char*	name(){ return bind_inst->name.c_str(); }
	int			arrayIndex(){return bind_inst->arrayIndex; }
	int			parentIndex(){return bind_inst->parentIndex; }
	int			type(){return (int)bind_inst->type; }
	int			boundsType(){return (int)bind_inst->boundsType; }
	int			inheritType(){return (int)bind_inst->inheritType; }
	int			alphaBlendType(){return (int)bind_inst->alphaBlendType; }
	int			show(){return (int)bind_inst->show; }
	int			locked(){return (int)bind_inst->locked; }
	float		inheritRates(int type){ return (float)bind_inst->inheritRates[type]; }
};


#endif