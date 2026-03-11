/*
 * func-name: sub_10009A40
 * func-address: 0x10009a40
 * callers: 0x10006f70, 0x10007100, 0x10008540, 0x10008860, 0x10009780, 0x100129a0, 0x1001d9c0, 0x10027970
 * callees: 0x100294f2
 */

void __usercall sub_10009A40(int a1@<ebx>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  bool v3; // zf
  _DWORD *v4; // edi
  Outpop::Utility::Ref_Object *v5; // ecx

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
      v5 = (Outpop::Utility::Ref_Object *)v2[3];
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
