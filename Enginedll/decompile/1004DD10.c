/*
 * func-name: ?PostRender@Actor@@UAEXPAVCamera@@@Z
 * func-address: 0x1004dd10
 * callers: 0x100da280, 0x10169d00, 0x1016da60
 * callees: none
 */

void __thiscall Actor::PostRender(Actor *this, struct Camera *a2)
{
  bool v2; // cc
  bool v3; // zf
  bool v4; // sf

  v2 = *((_DWORD *)this + 186) <= 0;
  *((_DWORD *)this + 186) = 0;
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 185) == 0;
    v4 = *((int *)this + 185) < 0;
    *((_DWORD *)this + 185) = 0;
    *((_DWORD *)this + 184) = (!v4 && !v3) + 1;
  }
  else
  {
    *((_DWORD *)this + 184) = 3;
    *((_DWORD *)this + 185) = 0;
  }
}
