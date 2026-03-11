/*
 * func-name: sub_10008D00
 * func-address: 0x10008d00
 * callers: 0x100073a0
 * callees: none
 */

void __stdcall sub_10008D00(int a1)
{
  int v1; // eax
  Outpop::Utility::Ref_Object **v2; // edi
  Outpop::Utility::Ref_Object **v3; // esi

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    v2 = *(Outpop::Utility::Ref_Object ***)(a1 + 8);
    if ( ((int)v2 - v1) >> 2 )
    {
      v3 = v2 - 1;
      do
      {
        if ( *v3 )
          Outpop::Utility::Ref_Object::release(*v3);
        ++v3;
      }
      while ( v3 != v2 );
      *(_DWORD *)(a1 + 8) -= 4;
    }
  }
}
