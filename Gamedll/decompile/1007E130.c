/*
 * func-name: ?GetStartEnd@Effect_Base@@QAEXAAVVector@@0@Z_0
 * func-address: 0x1007e130
 * callers: 0x1001902e
 * callees: none
 */

void __thiscall Effect_Base::GetStartEnd(Effect_Base *this, struct Vector *a2, struct Vector *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 267);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 268);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 269);
  *(_DWORD *)a3 = *((_DWORD *)this + 270);
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 271);
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 272);
}
