/*
 * func-name: ?DisableForceOpacity@Prefab@@QAEXXZ
 * func-address: 0x1004d6a0
 * callers: none
 * callees: none
 */

void __thiscall Prefab::DisableForceOpacity(Prefab *this)
{
  *((float *)this + 207) = 1.0;
  *((_BYTE *)this + 1052) = 0;
  *((float *)this + 264) = 1.0;
  *((_BYTE *)this + 824) = 0;
}
