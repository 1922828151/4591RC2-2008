/*
 * func-name: sub_10059230
 * func-address: 0x10059230
 * callers: 0x1000602d
 * callees: 0x102c9d50
 */

void __thiscall sub_10059230(int this)
{
  if ( *(_DWORD *)(this + 40) )
    operator delete(*(void **)(this + 40));
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  if ( *(_DWORD *)(this + 24) )
    operator delete(*(void **)(this + 24));
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
}
