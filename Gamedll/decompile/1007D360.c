/*
 * func-name: sub_1007D360
 * func-address: 0x1007d360
 * callers: 0x1001574e
 * callees: 0x102c9d50
 */

void __thiscall sub_1007D360(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
