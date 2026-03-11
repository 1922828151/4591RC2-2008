/*
 * func-name: ??1TextureCamera@@UAE@XZ
 * func-address: 0x1016e550
 * callers: 0x100695d0
 * callees: 0x10010ec0, 0x100511a0, 0x1010a090, 0x1013df40, 0x1016d6e0
 */

void __thiscall TextureCamera::~TextureCamera(struct Model **this)
{
  *this = (struct Model *)&TextureCamera::`vftable';
  Precacher::PurgeModel(this + 179);
  World::~World((World *)(this + 402));
  std::string::~string(this + 390);
  std::string::~string(this + 383);
  Camera::~Camera((Camera *)(this + 272));
  sub_1016D6E0((RenderBase *)(this + 264));
  Actor::~Actor((Actor *)this);
}
