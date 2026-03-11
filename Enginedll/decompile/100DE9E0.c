/*
 * func-name: ??0Light@@QAE@PAVWorld@@@Z
 * func-address: 0x100de9e0
 * callers: 0x10038ca0, 0x10045740, 0x1009b110, 0x100b2080, 0x100b41c0, 0x1012ffd0
 * callees: 0x10001440, 0x10050b80, 0x100dd7c0, 0x100de140, 0x10136290
 */

Light *__thiscall Light::Light(Light *this, struct World *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Light::`vftable';
  *((float *)this + 264) = 0.0;
  *((float *)this + 265) = 0.0;
  *((float *)this + 266) = 0.0;
  LightState::LightState((Light *)((char *)this + 1076));
  *((_DWORD *)this + 288) = 0;
  *((_DWORD *)this + 289) = 0;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 292) = 0;
  *((_DWORD *)this + 293) = 0;
  *((_DWORD *)this + 294) = 0;
  sub_10001440((float *)this + 298);
  *((float *)this + 308) = 0.0;
  *((_DWORD *)this + 312) = 0;
  *((float *)this + 309) = 0.0;
  *((_DWORD *)this + 313) = 0;
  *((float *)this + 310) = 0.0;
  *((_DWORD *)this + 314) = 0;
  Texture::Texture((Light *)((char *)this + 1264));
  *((_DWORD *)this + 360) = 0;
  *((_DWORD *)this + 361) = 0;
  *((_DWORD *)this + 362) = 0;
  Light::Initialize(this);
  return this;
}
