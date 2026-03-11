/*
 * func-name: sub_10022CB0
 * func-address: 0x10022cb0
 * callers: 0x10020d10, 0x10021a60, 0x10021cd0
 * callees: 0x100294f2
 */

void __stdcall sub_10022CB0(int a1)
{
  void **v1; // eax
  void *v2; // ebx
  bool v3; // zf
  Outpop::Utility::Ref_Object **v4; // esi
  Outpop::Utility::Ref_Object **i; // ebp
  void *v6; // [esp+14h] [ebp-14h]

  v1 = *(void ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(void **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v6 = *(void **)v2;
      v4 = (Outpop::Utility::Ref_Object **)*((_DWORD *)v2 + 4);
      if ( v4 )
      {
        for ( i = (Outpop::Utility::Ref_Object **)*((_DWORD *)v2 + 5); v4 != i; ++v4 )
        {
          if ( *v4 )
            Outpop::Utility::Ref_Object::release(*v4);
        }
        operator delete(*((void **)v2 + 4));
      }
      *((_DWORD *)v2 + 4) = 0;
      *((_DWORD *)v2 + 5) = 0;
      *((_DWORD *)v2 + 6) = 0;
      operator delete(v2);
      v2 = v6;
    }
    while ( v6 != *(void **)(a1 + 4) );
  }
}
