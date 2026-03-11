/*
 * func-name: sub_100EC240
 * func-address: 0x100ec240
 * callers: 0x10010262
 * callees: 0x1000c41e, 0x102c9d50
 */

int __thiscall sub_100EC240(int this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD **v7; // ecx
  _DWORD *v8; // eax
  bool v9; // zf
  _DWORD *v10; // edi

  v7 = *(_DWORD ***)(this + 4);
  v8 = *v7;
  *v7 = v7;
  *(_DWORD *)(*(_DWORD *)(this + 4) + 4) = *(_DWORD *)(this + 4);
  v9 = v8 == *(_DWORD **)(this + 4);
  *(_DWORD *)(this + 8) = 0;
  if ( !v9 )
  {
    do
    {
      v10 = (_DWORD *)*v8;
      operator delete(v8);
      v8 = v10;
    }
    while ( v10 != *(_DWORD **)(this + 4) );
  }
  return sub_1000C41E(this, **(_DWORD **)(this + 4), a2, a3, a4, a5, a4);
}
