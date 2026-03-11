/*
 * func-name: sub_101B5230
 * func-address: 0x101b5230
 * callers: 0x10018f84
 * callees: 0x102c9d50
 */

void __thiscall sub_101B5230(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
