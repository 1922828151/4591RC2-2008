/*
 * func-name: sub_101C88E0
 * func-address: 0x101c88e0
 * callers: 0x100033f5
 * callees: 0x102c9d50
 */

void __thiscall sub_101C88E0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
