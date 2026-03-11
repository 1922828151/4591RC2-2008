/*
 * func-name: sub_1024D560
 * func-address: 0x1024d560
 * callers: 0x1000448f
 * callees: 0x100086d4, 0x10016180, 0x102c9d50
 */

void __thiscall sub_1024D560(int this)
{
  void *v2; // eax
  int v3; // eax

  v2 = *(void **)(this + 40);
  if ( v2 )
    operator delete(v2);
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  sub_10016180();
  operator delete(*(void **)(this + 28));
  *(_DWORD *)(this + 28) = 0;
  v3 = *(_DWORD *)(this + 4);
  if ( v3 )
  {
    sub_100086D4(v3, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
