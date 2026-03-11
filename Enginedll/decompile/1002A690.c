/*
 * func-name: ??0Light@@QAE@ABV0@@Z
 * func-address: 0x1002a690
 * callers: none
 * callees: 0x1000d4b0, 0x1000f130, 0x100210c0, 0x10022800, 0x10023740, 0x10029dd0
 */

Light *__thiscall Light::Light(Light *this, const struct Light *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Light::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  *((_BYTE *)this + 1053) = *((_BYTE *)a2 + 1053);
  *((_BYTE *)this + 1054) = *((_BYTE *)a2 + 1054);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((float *)this + 267) = *((float *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  qmemcpy((char *)this + 1076, (char *)a2 + 1076, 0x48u);
  sub_10023740((int)this + 1148, (int)a2 + 1148);
  sub_10022800((_DWORD *)this + 291, (int)a2 + 1164);
  *((float *)this + 295) = *((float *)a2 + 295);
  *((float *)this + 296) = *((float *)a2 + 296);
  *((_BYTE *)this + 1188) = *((_BYTE *)a2 + 1188);
  *((_BYTE *)this + 1189) = *((_BYTE *)a2 + 1189);
  *((_DWORD *)this + 298) = &Volume::`vftable';
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  *((_DWORD *)this + 300) = *((_DWORD *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  *((_DWORD *)this + 298) = &BBox::`vftable';
  *((_DWORD *)this + 302) = *((_DWORD *)a2 + 302);
  *((_DWORD *)this + 303) = *((_DWORD *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 309);
  *((_DWORD *)this + 310) = *((_DWORD *)a2 + 310);
  std::vector<Model *>::vector<Model *>((_DWORD *)this + 311, (int)a2 + 1244);
  *((_DWORD *)this + 315) = *((_DWORD *)a2 + 315);
  Texture::Texture((Light *)((char *)this + 1264), (const struct Light *)((char *)a2 + 1264));
  *((_BYTE *)this + 1420) = *((_BYTE *)a2 + 1420);
  *((_BYTE *)this + 1421) = *((_BYTE *)a2 + 1421);
  *((_BYTE *)this + 1422) = *((_BYTE *)a2 + 1422);
  *((_DWORD *)this + 356) = *((_DWORD *)a2 + 356);
  *((_DWORD *)this + 357) = *((_DWORD *)a2 + 357);
  *((_DWORD *)this + 358) = *((_DWORD *)a2 + 358);
  std::vector<Actor *>::vector<Actor *>((_DWORD *)this + 359, (int)a2 + 1436);
  *((_BYTE *)this + 1452) = *((_BYTE *)a2 + 1452);
  return this;
}
