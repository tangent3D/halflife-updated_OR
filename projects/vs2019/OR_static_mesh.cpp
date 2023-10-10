// Static mesh loader for Out of Range
// From tutorial at https://www.sourcemodding.com/tutorials/goldsrc/projects/where-is-poppy/your-first-custom-entity/
// tangent.space 2023

#include "OR_static_mesh.h"

LINK_ENTITY_TO_CLASS(OR_StaticMesh, CStaticMesh);

void CStaticMesh::Spawn(void)
{
	PRECACHE_MODEL((char*)STRING(pev->model));
	SET_MODEL(ENT(pev), STRING(pev->model));
}