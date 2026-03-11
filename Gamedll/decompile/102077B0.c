/*
 * func-name: sub_102077B0
 * func-address: 0x102077b0
 * callers: 0x100077ed
 * callees: 0x1000e56b, 0x10015bef, 0x10017d23
 */

Outpop::Utility::Ref_Object **__thiscall sub_102077B0(
        unsigned int *this,
        Outpop::Utility::Ref_Object **a2,
        unsigned __int16 a3,
        char a4,
        int a5,
        Outpop::Utility::Ref_Object *a6,
        Outpop::Utility::Ref_Object *a7)
{
  Outpop::Utility::Ref_Object *v7; // ebx
  Outpop::Utility::Ref_Object *v8; // edi
  Outpop::Utility::Ref_Object *v9; // eax
  Outpop::Utility::Ref_Object *v10; // edi
  unsigned int v11; // edx
  int v12; // eax
  int v14; // [esp-8h] [ebp-30h]
  int v15; // [esp-4h] [ebp-2Ch]
  int v16; // [esp-4h] [ebp-2Ch]

  *a2 = 0;
  v7 = a6;
  if ( a6 != (Outpop::Utility::Ref_Object *)1 || this[61] )
  {
    v9 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
    v10 = v9;
    a6 = v9;
    if ( v9 )
    {
      Outpop::Message::Message::Message(v9, 1, v7 == 0, 0, 0, (char *)a7 + 4);
      *(_DWORD *)v10 = &Outpop::Message::Message::`vftable';
    }
    else
    {
      v10 = 0;
    }
    a7 = v10;
    if ( v10 )
      Outpop::Utility::Ref_Object::addref(v10);
    if ( *a2 )
      Outpop::Utility::Ref_Object::release(*a2);
    *a2 = v10;
    if ( v10 )
    {
      Outpop::Utility::Ref_Object::addref(v10);
      Outpop::Utility::Ref_Object::release(v10);
    }
    if ( v7 )
    {
      v11 = this[61];
    }
    else
    {
      Outpop::Message::Message::set_multi_id(*a2, this[58]);
      v11 = this[59];
    }
    Outpop::Utility::Binary_Stream::channelid(*a2, v11);
  }
  else
  {
    v8 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
    a6 = v8;
    if ( v8 )
    {
      Outpop::Message::Message::Message(v8, 1, 1, 0, 0, (char *)a7 + 4);
      *(_DWORD *)v8 = &Outpop::Message::Message::`vftable';
    }
    else
    {
      v8 = 0;
    }
    a7 = v8;
    if ( v8 )
      Outpop::Utility::Ref_Object::addref(v8);
    if ( *a2 )
      Outpop::Utility::Ref_Object::release(*a2);
    *a2 = v8;
    if ( v8 )
    {
      Outpop::Utility::Ref_Object::addref(v8);
      Outpop::Utility::Ref_Object::release(v8);
    }
    Outpop::Message::Message::set_multi_id(*a2, this[58]);
    Outpop::Utility::Binary_Stream::channelid(*a2, this[59]);
  }
  Outpop::Message::Message::set_protocol_catalog(*a2, (unsigned __int8)a2);
  Outpop::Message::Message::set_protocol_type(*a2, a3);
  Outpop::Utility::Binary_Stream::set_reliable(*a2, 1);
  Outpop::Utility::Binary_Stream::sequence(*a2, 0);
  sub_10015BEF((int)&a4);
  v12 = Outpop::Utility::Binary_Stream::channelid(*a2);
  sub_1000E56B(v12, v15);
  sub_10017D23(v14, v16);
  return a2;
}
