/*
 * func-name: sub_10059E70
 * func-address: 0x10059e70
 * callers: 0x100158ed
 * callees: 0x1000eb6f, 0x102c9d50
 */

void __thiscall sub_10059E70(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_1000EB6F(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
