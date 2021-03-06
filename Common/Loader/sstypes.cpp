﻿
#include "sstypes.h"

//---------------------------------------------------------------
//相互変換 SsPartType
SsString	__EnumToString_( SsPartType::_enum n )
{
	if ( SsPartType::invalid ) return "invalid";
	if ( SsPartType::null ) return "null";
	if ( SsPartType::normal ) return "normal";
	if ( SsPartType::text ) return "text";
	if ( SsPartType::instance ) return "instance";
	return "invalid";	
}

void 	__StringToEnum_( SsString n , SsPartType::_enum& out)
{
	out =  SsPartType::invalid;
	if ( n == "invalid") out = SsPartType::invalid;
	if ( n == "null") out = SsPartType::null;
	if ( n == "normal") out = SsPartType::normal;
	if ( n == "text") out = SsPartType::text;
	if ( n == "instance") out = SsPartType::instance;
}

//---------------------------------------------------------------
//相互変換 SsPartsSortMode
SsString	__EnumToString_( SsPartsSortMode::_enum n )
{
	if ( SsPartsSortMode::invalid ) return "invalid";
	if ( SsPartsSortMode::prio ) return "prio";
	if ( SsPartsSortMode::z ) return "z";
	return "invalid";	
}

void	__StringToEnum_( SsString n , SsPartsSortMode::_enum &out )
{
	out = SsPartsSortMode::invalid;
	if ( n == "invalid") out = SsPartsSortMode::invalid;
	if ( n == "prio") out = SsPartsSortMode::prio;
	if ( n == "z") out = SsPartsSortMode::z;
}

//---------------------------------------------------------------
//相互変換 SsBoundsType
SsString	__EnumToString_( SsBoundsType::_enum n )
{
	if ( SsBoundsType::invalid ) return "invalid";
	if ( SsBoundsType::none ) return "none";
	if ( SsBoundsType::quad ) return "quad";
	if ( SsBoundsType::aabb ) return "aabb";
	if ( SsBoundsType::circle ) return "circle";
	if ( SsBoundsType::circle_smin ) return "circle_smin";
	if ( SsBoundsType::circle_smax ) return "circle_smax";
	return "invalid";	
}

void	__StringToEnum_( SsString n , SsBoundsType::_enum &out )
{
	out = SsBoundsType::invalid;
	if ( n == "invalid") out = SsBoundsType::invalid;
	if ( n == "none") out = SsBoundsType::none;
	if ( n == "quad") out = SsBoundsType::quad;
	if ( n == "aabb") out = SsBoundsType::aabb;
	if ( n == "circle") out = SsBoundsType::circle;
	if ( n == "circle_smin") out = SsBoundsType::circle_smin;
	if ( n == "circle_smax") out = SsBoundsType::circle_smax;
}


//---------------------------------------------------------------
//相互変換 SsBoundsType
SsString	__EnumToString_( SsInheritType::_enum n )
{
	if ( SsInheritType::invalid ) return "invalid";
	if ( SsInheritType::parent ) return "parent";
	if ( SsInheritType::self ) return "self";
	return "invalid";	
}

void	__StringToEnum_( SsString n , SsInheritType::_enum &out )
{
	out = SsInheritType::invalid;
	if ( n == "invalid") out = SsInheritType::invalid;
	if ( n == "parent") out = SsInheritType::parent;
	if ( n == "self") out = SsInheritType::self;
}


//---------------------------------------------------------------
//相互変換 SsBlendType
SsString	__EnumToString_( SsBlendType::_enum n )
{
	if ( SsBlendType::invalid ) return "invalid";
	if ( SsBlendType::mix ) return "mix";
	if ( SsBlendType::mul ) return "mul";
	if ( SsBlendType::add ) return "add";
	if ( SsBlendType::sub ) return "sub";

	return "invalid";	
}

void	__StringToEnum_( SsString n , SsBlendType::_enum &out )
{
	out = SsBlendType::invalid;
	if ( n == "invalid") out = SsBlendType::invalid;
	if ( n == "mix") out = SsBlendType::mix;
	if ( n == "mul") out = SsBlendType::mul;
	if ( n == "add") out = SsBlendType::add;
	if ( n == "sub") out = SsBlendType::sub;
}




//---------------------------------------------------------------
//相互変換 SsInterpolationType
SsString	__EnumToString_( SsInterpolationType::_enum n )
{
	if ( SsInterpolationType::invalid )		return "invalid";
	if ( SsInterpolationType::none )		return "none";
	if ( SsInterpolationType::linear )		return "linear";
	if ( SsInterpolationType::hermite )		return "hermite";
	if ( SsInterpolationType::bezier )		return "bezier";
	if ( SsInterpolationType::acceleration ) return "acceleration";
	if ( SsInterpolationType::deceleration ) return "deceleration";

	return "none";	
}

void	__StringToEnum_( SsString n , SsInterpolationType::_enum &out )
{
	out = SsInterpolationType::none;
	if ( n == "invalid") out = SsInterpolationType::invalid;
	if ( n == "none") out = SsInterpolationType::none;
	if ( n == "linear") out = SsInterpolationType::linear;
	if ( n == "hermite") out = SsInterpolationType::hermite;
	if ( n == "bezier") out = SsInterpolationType::bezier;
	if ( n == "acceleration") out = SsInterpolationType::acceleration;
	if ( n == "deceleration") out = SsInterpolationType::deceleration;
}

//---------------------------------------------------------------
//相互変換 SsTexWrapMode
SsString	__EnumToString_( SsTexWrapMode::_enum n )
{
	if ( SsTexWrapMode::invalid )		return "invalid";
	if ( SsTexWrapMode::clamp )		return "clamp";
	if ( SsTexWrapMode::repeat )		return "repeat";
	if ( SsTexWrapMode::mirror )		return "mirror";

	return "invalid";	
}

void	__StringToEnum_( SsString n , SsTexWrapMode::_enum &out )
{
	out = SsTexWrapMode::invalid;
	if ( n == "invalid") out = SsTexWrapMode::invalid;
	if ( n == "clamp") out = SsTexWrapMode::clamp;
	if ( n == "repeat") out = SsTexWrapMode::repeat;
	if ( n == "mirror") out = SsTexWrapMode::mirror;

}

//---------------------------------------------------------------
//相互変換 SsTexFilterMode
SsString	__EnumToString_( SsTexFilterMode::_enum n )
{
	if ( SsTexFilterMode::invalid )		return "invalid";
	if ( SsTexFilterMode::nearest )		return "nearest";
	if ( SsTexFilterMode::linear )		return "linear";

	return "invalid";	
}

void	__StringToEnum_( SsString n , SsTexFilterMode::_enum &out )
{
	out = SsTexFilterMode::invalid;
	if ( n == "invalid") out = SsTexFilterMode::invalid;
	if ( n == "nearest") out = SsTexFilterMode::nearest;
	if ( n == "linear") out = SsTexFilterMode::linear;

}

//---------------------------------------------------------------
//相互変換 SsTexFilterMode
SsString	__EnumToString_( SsColorBlendTarget::_enum n )
{
	if ( SsColorBlendTarget::invalid )		return "invalid";
	if ( SsColorBlendTarget::whole )		return "whole";
	if ( SsColorBlendTarget::vertex )		return "vertex";

	return "invalid";	
}

void	__StringToEnum_( SsString n , SsColorBlendTarget::_enum &out )
{
	out = SsColorBlendTarget::invalid;
	if ( n == "invalid") out = SsColorBlendTarget::invalid;
	if ( n == "whole") out = SsColorBlendTarget::whole;
	if ( n == "vertex") out = SsColorBlendTarget::vertex;

}

//---------------------------------------------------------------
//相互変換 SsAttributeKind
SsString	__EnumToString_( SsAttributeKind::_enum n )
{
	if ( SsAttributeKind::invalid )		return "invalid";
	if ( SsAttributeKind::cell )		return "CELL";
	if ( SsAttributeKind::posx )		return "POSX";
	if ( SsAttributeKind::posy )		return "POSY";
	if ( SsAttributeKind::posz )		return "POSZ";
	if ( SsAttributeKind::rotx )		return "ROTX";
	if ( SsAttributeKind::roty )		return "ROTY";
	if ( SsAttributeKind::rotz )		return "ROTZ";
	if ( SsAttributeKind::sclx )		return "SCLX";
	if ( SsAttributeKind::scly )		return "SCLY";
	if ( SsAttributeKind::alpha )		return "ALPH";
	if ( SsAttributeKind::prio )		return "PRIO";
	if ( SsAttributeKind::fliph )		return "FLPH";
	if ( SsAttributeKind::flipv )		return "FLPV";
	if ( SsAttributeKind::hide )		return "HIDE";
	if ( SsAttributeKind::color )		return "VCOL";
	if ( SsAttributeKind::vertex )		return "VERT";
	if ( SsAttributeKind::pivotx )		return "PVTX";
	if ( SsAttributeKind::pivoty )		return "PVTY";
	if ( SsAttributeKind::anchorx )		return "ANCX";
	if ( SsAttributeKind::anchory )		return "ANCY";
	if ( SsAttributeKind::sizex )		return "SIZX";
	if ( SsAttributeKind::sizey )		return "SIZY";
	if ( SsAttributeKind::imgfliph )	return "IFLH";
	if ( SsAttributeKind::imgflipv )	return "IFLV";
	if ( SsAttributeKind::uvtx )		return "UVTX";
	if ( SsAttributeKind::uvty )		return "UVTY";
	if ( SsAttributeKind::uvrz )		return "UVRZ";
	if ( SsAttributeKind::uvsx )		return "UVSX";
	if ( SsAttributeKind::uvsy )		return "UVSY";
	if ( SsAttributeKind::boundr )		return "BNDR";
	if ( SsAttributeKind::user )		return "USER";
	if ( SsAttributeKind::instance )    return "IPRM";

	return "invalid";	
}

void	__StringToEnum_( SsString n , SsAttributeKind::_enum &out )
{

	out = SsAttributeKind::invalid;
	if ( n == "invalid") out = SsAttributeKind::invalid;
	if ( n == "CELL") out = SsAttributeKind::cell;
	if ( n == "POSX") out = SsAttributeKind::posx;
	if ( n == "POSY") out = SsAttributeKind::posy;
	if ( n == "POSZ") out = SsAttributeKind::posz;
	if ( n == "ROTX") out = SsAttributeKind::rotx;
	if ( n == "ROTY") out = SsAttributeKind::roty;
	if ( n == "ROTZ") out = SsAttributeKind::rotz;
	if ( n == "SCLX") out = SsAttributeKind::sclx;
	if ( n == "SCLY") out = SsAttributeKind::scly;
	if ( n == "ALPH") out = SsAttributeKind::alpha;
	if ( n == "PRIO") out = SsAttributeKind::prio;
	if ( n == "FLPH") out = SsAttributeKind::fliph;
	if ( n == "FLPV") out = SsAttributeKind::flipv;
	if ( n == "HIDE") out = SsAttributeKind::hide;
	if ( n == "VCOL") out = SsAttributeKind::color;
	if ( n == "VERT") out = SsAttributeKind::vertex;
	if ( n == "PVTX") out = SsAttributeKind::pivotx;
	if ( n == "PVTY") out = SsAttributeKind::pivoty;
	if ( n == "ANCX") out = SsAttributeKind::anchorx;
	if ( n == "ANCY") out = SsAttributeKind::anchory;
	if ( n == "SIZX") out = SsAttributeKind::sizex;
	if ( n == "SIZY") out = SsAttributeKind::sizey;
	if ( n == "IFLH") out = SsAttributeKind::imgfliph;
	if ( n == "IFLV") out = SsAttributeKind::imgflipv;
	if ( n == "UVTX") out = SsAttributeKind::uvtx;
	if ( n == "UVTY") out = SsAttributeKind::uvty;
	if ( n == "UVRZ") out = SsAttributeKind::uvrz;
	if ( n == "UVSX") out = SsAttributeKind::uvsx;
	if ( n == "UVSY") out = SsAttributeKind::uvsy;
	if ( n == "BNDR") out = SsAttributeKind::boundr;
	if ( n == "USER") out = SsAttributeKind::user;
	if ( n == "IPRM") out = SsAttributeKind::instance;

}


