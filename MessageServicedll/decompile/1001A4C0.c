/*
 * func-name: sub_1001A4C0
 * func-address: 0x1001a4c0
 * callers: none
 * callees: 0x10019b50, 0x1001a250, 0x1001bb10, 0x100295c0
 */

void __thiscall sub_1001A4C0(int this, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Message::Message **v3; // edi
  int v4; // eax
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Ref_Object *v6; // eax
  Outpop::Utility::Ref_Object *v7[2]; // [esp+14h] [ebp-14h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  v3 = (Outpop::Message::Message **)a2;
  if ( (*(_BYTE *)(*(_DWORD *)a2 + 97) & 0xF) != 0 )
    v4 = *(_DWORD *)((*(_BYTE *)(*(_DWORD *)a2 + 97) & 0xF) + *(_DWORD *)(*(_DWORD *)a2 + 100));
  else
    v4 = -1;
  sub_1001BB10(&a2, v4);
  v8 = 0;
  if ( a2 && sub_10019B50(a2, v3) == 1 )
  {
    if ( *(_DWORD *)(this + 12) )
    {
      v5 = (Outpop::Utility::Ref_Object *)operator new(0x10u);
      v7[1] = v5;
      LOBYTE(v8) = 2;
      if ( v5 )
        v6 = sub_1001A250(v5, *(_DWORD *)(this + 8), &a2);
      else
        v6 = 0;
      LOBYTE(v8) = 0;
      v7[0] = v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v8) = 3;
      (*(void (__stdcall **)(Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 16) + 8))(v7);
    }
    else
    {
      v7[0] = a2;
      if ( a2 )
        Outpop::Utility::Ref_Object::addref(a2);
      LOBYTE(v8) = 1;
      (*(void (__stdcall **)(Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 8) + 4))(v7);
    }
    LOBYTE(v8) = 0;
    if ( v7[0] )
      Outpop::Utility::Ref_Object::release(v7[0]);
  }
  v8 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
