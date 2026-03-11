/*
 * func-name: ?ForceOpacity@Prefab@@QAEXMM@Z
 * func-address: 0x1004d670
 * callers: none
 * callees: none
 */

void __thiscall Prefab::ForceOpacity(Prefab *this, float a2, float a3)
{
  *((float *)this + 264) = a2;
  *((_BYTE *)this + 1052) = 1;
  *((_BYTE *)this + 1053) = 1;
  *((float *)this + 265) = a3;
  *((_BYTE *)this + 824) = 1;
}
