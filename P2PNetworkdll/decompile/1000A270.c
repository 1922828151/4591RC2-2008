/*
 * func-name: sub_1000A270
 * func-address: 0x1000a270
 * callers: 0x1000a150
 * callees: 0x1000a080, 0x1000a1f0
 */

void __cdecl sub_1000A270(int a1, Outpop::Utility::Ref_Object *a2)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  bool i; // zf
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object *v10; // ecx

  v3 = v2;
  v4 = 0;
  v5 = 2;
  for ( i = a1 == 2; v5 < a1; i = v5 == a1 )
  {
    if ( sub_1000A1F0(v3 + 4 * v5 - 4, (int *)(v3 + 4 * v5)) )
      --v5;
    v7 = *(Outpop::Utility::Ref_Object **)(v3 + 4 * v4);
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
    v8 = *(Outpop::Utility::Ref_Object **)(v3 + 4 * v5);
    *(_DWORD *)(v3 + 4 * v4) = v8;
    if ( v8 )
      Outpop::Utility::Ref_Object::addref(v8);
    v4 = v5;
    v5 = 2 * v5 + 2;
  }
  if ( i )
  {
    v9 = *(Outpop::Utility::Ref_Object **)(v3 + 4 * v4);
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    v10 = *(Outpop::Utility::Ref_Object **)(v3 + 4 * a1 - 4);
    *(_DWORD *)(v3 + 4 * v4) = v10;
    if ( v10 )
      Outpop::Utility::Ref_Object::addref(v10);
    v4 = a1 - 1;
  }
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  sub_1000A080(v4, v3, a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
