/*
 * func-name: sub_1005A320
 * func-address: 0x1005a320
 * callers: 0x10017b07
 * callees: 0x10011a72, 0x102c9d50
 */

void __thiscall sub_1005A320(int this)
{
  if ( *(_DWORD *)(this + 4) )
  {
    sub_10011A72();
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
