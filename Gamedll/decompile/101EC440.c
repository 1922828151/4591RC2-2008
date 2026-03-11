/*
 * func-name: sub_101EC440
 * func-address: 0x101ec440
 * callers: 0x1001a1ea
 * callees: 0x102c9d50
 */

void __thiscall sub_101EC440(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
