/*
 * func-name: sub_100355D0
 * func-address: 0x100355d0
 * callers: 0x10019190, 0x1002bac0, 0x1002bd30
 * callees: 0x1004e870
 */

int __usercall sub_100355D0@<eax>(int a1@<ebx>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // edi
  Outpop::Utility::Ref_Object *v6; // ecx

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(result + 4) = result;
  v4 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v2;
      v6 = (Outpop::Utility::Ref_Object *)v2[4];
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      result = operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
