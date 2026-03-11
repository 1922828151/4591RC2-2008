/*
 * func-name: sub_10013ED0
 * func-address: 0x10013ed0
 * callers: 0x10012920, 0x10012990, 0x100139b0
 * callees: 0x10018cf2
 */

void __usercall sub_10013ED0(int a1@<ebx>)
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
      std::string::~string(v2 + 2);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
