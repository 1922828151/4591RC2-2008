/*
 * func-name: sub_102ACA90
 * func-address: 0x102aca90
 * callers: 0x10009b5b
 * callees: 0x10015eab
 */

void __thiscall sub_102ACA90(_DWORD *this)
{
  Outpop::Utility::Binary_Stream *v2; // eax
  Outpop::Utility::Ref_Object *v3; // edi
  Outpop::Utility::Ref_Object *v4; // ecx
  int started; // eax
  Outpop::Utility::Ref_Object *v6; // ecx
  bool v7; // zf
  int v8; // [esp-34h] [ebp-54h]
  Outpop::Utility::Ref_Object *v9; // [esp+Ch] [ebp-14h] BYREF
  Outpop::Utility::Ref_Object *v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-4h]

  v2 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v3 = v2;
  v10 = v2;
  v11 = 0;
  if ( v2 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v2, 4);
    *(_DWORD *)v3 = &Outpop::Utility::Binary_Stream::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  v11 = -1;
  v9 = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v10 = *(Outpop::Utility::Ref_Object **)(dword_103B665C + 8);
  v11 = 1;
  sub_10015EAB((int)&v10);
  v10 = 0;
  v8 = this[7];
  LOBYTE(v11) = 2;
  started = Outpop::Message::Message_Facade::cache_start_connector_with_first_message(
              this + 28,
              0,
              9,
              v8,
              10,
              &v9,
              &v10,
              0,
              1,
              0xFFFF,
              0xFFFF,
              0,
              5,
              0,
              0,
              0);
  v6 = v10;
  v7 = v10 == 0;
  this[6] = started;
  LOBYTE(v11) = 1;
  if ( !v7 )
    Outpop::Utility::Ref_Object::release(v6);
  v11 = -1;
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
}
