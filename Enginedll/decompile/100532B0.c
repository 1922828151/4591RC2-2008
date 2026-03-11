/*
 * func-name: ??0IndoorVolume@@QAE@ABV0@@Z
 * func-address: 0x100532b0
 * callers: none
 * callees: 0x10029dd0
 */

IndoorVolume *__thiscall IndoorVolume::IndoorVolume(IndoorVolume *this, const struct IndoorVolume *a2)
{
  IndoorVolume *result; // eax

  Actor::Actor(this, a2);
  *(_DWORD *)this = &IndoorVolume::`vftable';
  *((_DWORD *)this + 263) = &Volume::`vftable';
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((_DWORD *)this + 263) = &BBox::`vftable';
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  *((_DWORD *)this + 272) = *((_DWORD *)a2 + 272);
  *((_BYTE *)this + 1092) = *((_BYTE *)a2 + 1092);
  *((_DWORD *)this + 274) = *((_DWORD *)a2 + 274);
  *((_DWORD *)this + 275) = *((_DWORD *)a2 + 275);
  *((float *)this + 276) = *((float *)a2 + 276);
  *((_DWORD *)this + 277) = *((_DWORD *)a2 + 277);
  *((_DWORD *)this + 278) = *((_DWORD *)a2 + 278);
  *((_DWORD *)this + 279) = *((_DWORD *)a2 + 279);
  *((float *)this + 280) = *((float *)a2 + 280);
  result = this;
  *((float *)this + 281) = *((float *)a2 + 281);
  return result;
}
