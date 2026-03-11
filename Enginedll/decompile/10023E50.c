/*
 * func-name: sub_10023E50
 * func-address: 0x10023e50
 * callers: 0x100326a0
 * callees: 0x10020950, 0x101a2500
 */

void __thiscall sub_10023E50(int this, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6)
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
  sub_10020950((_DWORD *)this, this, **(_DWORD **)(this + 4), a2, a3, a4, a5, a4);
}
