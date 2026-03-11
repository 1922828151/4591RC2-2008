/*
 * func-name: ?SetStartEnd@Effect_Base@@UAEXAAVVector@@0@Z_0
 * func-address: 0x1007e5c0
 * callers: 0x100055fb
 * callees: none
 */

void __thiscall Effect_Base::SetStartEnd(Effect_Base *this, struct Vector *a2, struct Vector *a3)
{
  *((_DWORD *)this + 267) = *(_DWORD *)a2;
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 270) = *(_DWORD *)a3;
  *((_DWORD *)this + 271) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 272) = *((_DWORD *)a3 + 2);
}
