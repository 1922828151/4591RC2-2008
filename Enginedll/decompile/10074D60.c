/*
 * func-name: ??0TextureCamera@@QAE@ABV0@@Z
 * func-address: 0x10074d60
 * callers: none
 * callees: 0x10010f10, 0x10029dd0, 0x10030270
 */

TextureCamera *__thiscall TextureCamera::TextureCamera(TextureCamera *this, const struct TextureCamera *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &TextureCamera::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  *((_DWORD *)this + 264) = &TCameraFrame::`vftable';
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  Camera::Camera((TextureCamera *)((char *)this + 1088), (const struct TextureCamera *)((char *)a2 + 1088));
  *((_DWORD *)this + 377) = *((_DWORD *)a2 + 377);
  *((_DWORD *)this + 378) = *((_DWORD *)a2 + 378);
  *((_DWORD *)this + 379) = *((_DWORD *)a2 + 379);
  *((_DWORD *)this + 380) = *((_DWORD *)a2 + 380);
  *((_DWORD *)this + 381) = *((_DWORD *)a2 + 381);
  *((float *)this + 382) = *((float *)a2 + 382);
  std::string::string((char *)this + 1532, (char *)a2 + 1532);
  std::string::string((char *)this + 1560, (char *)a2 + 1560);
  *((_DWORD *)this + 397) = *((_DWORD *)a2 + 397);
  *((float *)this + 398) = *((float *)a2 + 398);
  *((float *)this + 399) = *((float *)a2 + 399);
  *((float *)this + 400) = *((float *)a2 + 400);
  *((float *)this + 401) = *((float *)a2 + 401);
  World::World((TextureCamera *)((char *)this + 1608), (const struct TextureCamera *)((char *)a2 + 1608));
  *((_BYTE *)this + 5404) = *((_BYTE *)a2 + 5404);
  return this;
}
