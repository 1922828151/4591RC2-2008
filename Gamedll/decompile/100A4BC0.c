/*
 * func-name: sub_100A4BC0
 * func-address: 0x100a4bc0
 * callers: 0x10016428
 * callees: 0x102c9d50
 */

void __thiscall sub_100A4BC0(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
