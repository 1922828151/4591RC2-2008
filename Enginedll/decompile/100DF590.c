/*
 * func-name: ??0Light@@QAE@PAVWorld@@ABUFloatColor@@M@Z
 * func-address: 0x100df590
 * callers: none
 * callees: 0x10001440, 0x10050b80, 0x100dd7c0, 0x100de140, 0x100e0a90, 0x100e0d40, 0x10136290
 */

Light *__thiscall Light::Light(Light *this, struct World *a2, const struct FloatColor *a3, float a4)
{
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  int v8; // eax
  const struct FloatColor *v9; // eax
  int v10; // edx

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
  v5 = *((_DWORD *)this + 214);
  *((float *)this + 295) = 0.0;
  v6 = *((_DWORD *)this + 215);
  v7 = a4;
  v8 = *((_DWORD *)this + 216);
  *((_DWORD *)this + 278) = v5;
  *((_DWORD *)this + 279) = v6;
  *((_DWORD *)this + 280) = v8;
  v9 = a3;
  *((_BYTE *)this + 1053) = 1;
  *((_BYTE *)this + 1189) = 0;
  *((_DWORD *)this + 269) = *(_DWORD *)v9;
  *((_DWORD *)this + 270) = *((_DWORD *)v9 + 1);
  *((_DWORD *)this + 271) = *((_DWORD *)v9 + 2);
  v10 = *((_DWORD *)v9 + 3);
  *((float *)this + 284) = v7;
  *((_DWORD *)this + 272) = v10;
  sub_100E0D40((int)this + 1148, (char *)this + 1076);
  *(float *)&a2 = 0.0;
  sub_100E0A90((int)this + 1164, (int)&a2);
  return this;
}
