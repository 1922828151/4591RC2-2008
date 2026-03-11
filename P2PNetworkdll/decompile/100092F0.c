/*
 * func-name: sub_100092F0
 * func-address: 0x100092f0
 * callers: 0x10007310, 0x10008960, 0x100089e0
 * callees: 0x10023306
 */

void __usercall sub_100092F0(int a1@<edi>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  bool v3; // zf
  Outpop::Utility::Ref_Object *v4; // ecx
  _DWORD *v5; // ebx

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
      v4 = (Outpop::Utility::Ref_Object *)v2[3];
      v5 = (_DWORD *)*v2;
      if ( v4 )
        Outpop::Utility::Ref_Object::release(v4);
      operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
}
