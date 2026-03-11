/*
 * func-name: sub_100140C0
 * func-address: 0x100140c0
 * callers: 0x10013010, 0x10013080, 0x10013c70
 * callees: 0x10018cf2
 */

void __stdcall sub_100140C0(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  bool v3; // zf
  _DWORD *v4; // edi

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      std::wstring::~wstring(v2 + 9);
      std::wstring::~wstring(v2 + 2);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
