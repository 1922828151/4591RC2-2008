/*
 * func-name: sub_100DF120
 * func-address: 0x100df120
 * callers: 0x10014763
 * callees: none
 */

void __thiscall sub_100DF120(int this, struct World *a2)
{
  if ( !a2 && *(_BYTE *)(this + 1064) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1052) + 44))(*(_DWORD *)(this + 1052));
    *(_BYTE *)(this + 1064) = 0;
  }
  Actor::SetWorld((Actor *)this, a2);
}
