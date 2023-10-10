// Static mesh loader for Out of Range
// From tutorial at https://www.sourcemodding.com/tutorials/goldsrc/projects/where-is-poppy/your-first-custom-entity/
// tangent.space 2023

#ifndef OR_STATIC_MESH_H
#define OR_STATIC_MESH_H
 
#include "extdll.h"		// Required for KeyValueData & Export Parts
#include "util.h"		// Required Consts & Macros
#include "cbase.h"		// Required for inheriting from CBaseAnimating

class CStaticMesh : public CBaseAnimating
{
private:
	void Spawn(void);
};
 
#endif