/*
 * func-name: ??0Effect_Base@@QAE@ABV0@@Z_0
 * func-address: 0x1007e1a0
 * callers: 0x1000727a
 * callees: none
 */

Effect_Base *__thiscall Effect_Base::Effect_Base(Effect_Base *this, const struct Effect_Base *a2)
{
  Effect_Base *result; // eax

  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_Base::`vftable';
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((float *)this + 264) = *((float *)a2 + 264);
  *((float *)this + 265) = *((float *)a2 + 265);
  *((_BYTE *)this + 1064) = *((_BYTE *)a2 + 1064);
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  *((_DWORD *)this + 272) = *((_DWORD *)a2 + 272);
  *((_DWORD *)this + 273) = *((_DWORD *)a2 + 273);
  *((_DWORD *)this + 274) = *((_DWORD *)a2 + 274);
  *((_DWORD *)this + 275) = *((_DWORD *)a2 + 275);
  *((_DWORD *)this + 276) = *((_DWORD *)a2 + 276);
  *((_DWORD *)this + 277) = *((_DWORD *)a2 + 277);
  result = this;
  *((float *)this + 278) = *((float *)a2 + 278);
  *((float *)this + 279) = *((float *)a2 + 279);
  *((float *)this + 280) = *((float *)a2 + 280);
  *((float *)this + 281) = *((float *)a2 + 281);
  *((float *)this + 282) = *((float *)a2 + 282);
  *((_BYTE *)this + 1132) = *((_BYTE *)a2 + 1132);
  *((_BYTE *)this + 1133) = *((_BYTE *)a2 + 1133);
  return result;
}
