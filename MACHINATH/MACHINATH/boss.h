#pragma once

#include "mesh.h"
#include "collider.h"


class Boss : public MeshObject
{
public:
	BoxCollider collider;
	float dissolveValue;

	Boss(Transform transform, MESH_NAME name, SHADER_TYPE type, GameObject* parent = nullptr) :
		MeshObject(transform, name, type, parent), collider(BoxCollider(this, 40, 40, 40, { 0,0,0 }, true)),
		dissolveValue(1)
	{}

	~Boss() {}

	void Draw() override;

private:

};


void InitBoss();
void UninitBoss();
void UpdateBoss();
