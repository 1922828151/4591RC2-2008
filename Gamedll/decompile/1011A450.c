/*
 * func-name: sub_1011A450
 * func-address: 0x1011a450
 * callers: 0x1001610d
 * callees: 0x102c9d50
 */

void __thiscall sub_1011A450(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
