/*
 * func-name: sub_1000A080
 * func-address: 0x1000a080
 * callers: 0x100098d0, 0x1000a270
 * callees: 0x1000a1f0
 */

void __usercall sub_1000A080(int a1@<ecx>, int a2@<ebx>, Outpop::Utility::Ref_Object *a3)
{
  int v3; // esi
  int v4; // edi
  Outpop::Utility::Ref_Object **v5; // ebp
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  bool v8; // zf
  bool v9; // cc
  Outpop::Utility::Ref_Object *v10; // ecx

  v3 = a1;
  v4 = (a1 - 1) / 2;
  if ( a1 > 0 )
  {
    do
    {
      v5 = (Outpop::Utility::Ref_Object **)(a2 + 4 * v4);
      if ( !(unsigned __int8)sub_1000A1F0(v5) )
        break;
      v6 = *(Outpop::Utility::Ref_Object **)(a2 + 4 * v3);
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      v7 = *v5;
      v8 = *v5 == 0;
      *(_DWORD *)(a2 + 4 * v3) = *v5;
      if ( !v8 )
        Outpop::Utility::Ref_Object::addref(v7);
      v3 = v4;
      v9 = v4 <= 0;
      v4 = (v4 - 1) / 2;
    }
    while ( !v9 );
  }
  v10 = *(Outpop::Utility::Ref_Object **)(a2 + 4 * v3);
  if ( v10 )
    Outpop::Utility::Ref_Object::release(v10);
  *(_DWORD *)(a2 + 4 * v3) = a3;
  if ( a3 )
  {
    Outpop::Utility::Ref_Object::addref(a3);
    Outpop::Utility::Ref_Object::release(a3);
  }
}
