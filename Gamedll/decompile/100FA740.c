/*
 * func-name: sub_100FA740
 * func-address: 0x100fa740
 * callers: 0x10011e78
 * callees: 0x102c9d50
 */

void __thiscall sub_100FA740(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
