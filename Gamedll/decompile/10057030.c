/*
 * func-name: sub_10057030
 * func-address: 0x10057030
 * callers: 0x1001479a
 * callees: 0x102c9d50
 */

void __thiscall sub_10057030(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
