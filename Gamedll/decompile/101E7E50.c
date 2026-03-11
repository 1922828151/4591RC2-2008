/*
 * func-name: sub_101E7E50
 * func-address: 0x101e7e50
 * callers: 0x1000a4fc
 * callees: 0x102c9d50
 */

void __thiscall sub_101E7E50(int this)
{
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  v2 = *(_DWORD ***)(this + 4);
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(*(_DWORD *)(this + 4) + 4) = *(_DWORD *)(this + 4);
  v4 = v3 == *(_DWORD **)(this + 4);
  *(_DWORD *)(this + 8) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != *(_DWORD **)(this + 4) );
  }
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
}
