/*
 * func-name: sub_101DA840
 * func-address: 0x101da840
 * callers: 0x100190e7
 * callees: 0x102c9d50
 */

void __thiscall sub_101DA840(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
