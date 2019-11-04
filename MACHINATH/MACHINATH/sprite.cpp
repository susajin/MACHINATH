#include "sprite.h"
#include "mydirect3d.h"
#include "transformation.h"


// sprite device
static LPD3DXSPRITE sprite;



void SpriteDraw(const Sprite& sp, bool rotateAtPos)
{
	sprite->SetTransform(&TransformSprite(sp.position, sp.rotZ, sp.scale, rotateAtPos));
	sprite->Draw(sp.sprite, NULL, &sp.center, NULL, sp.color);
}

void InitSprite()
{
	auto device = MyDirect3D_GetDevice();
	D3DXCreateSprite(device, &sprite);
}

void SpriteStart()
{
	sprite->Begin(D3DXSPRITE_ALPHABLEND);
}

void SpriteEnd()
{
	sprite->End();
}
