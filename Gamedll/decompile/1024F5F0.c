/*
 * func-name: sub_1024F5F0
 * func-address: 0x1024f5f0
 * callers: 0x100022b6
 * callees: 0x102c9d50
 */

void __thiscall sub_1024F5F0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
