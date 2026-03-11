/*
 * func-name: sub_102AC170
 * func-address: 0x102ac170
 * callers: 0x1001a816
 * callees: 0x10015eab
 */

void __thiscall sub_102AC170(_DWORD *this)
{
  Outpop::Utility::Lock *v2; // ebp
  bool v3; // zf
  Outpop::Message::Message *v4; // eax
  Outpop::Message::Message *v5; // esi
  Outpop::Message::Message *v6; // ecx
  Outpop::Message::Message *v7; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+14h] [ebp-20h] BYREF
  _DWORD v9[2]; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD v10[2]; // [esp+20h] [ebp-14h] BYREF
  int v11; // [esp+30h] [ebp-4h]

  v2 = (Outpop::Utility::Lock *)(this + 4);
  v9[1] = this + 4;
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 4));
  v3 = this[1] == -1;
  v11 = 0;
  if ( v3 )
  {
    v11 = -1;
  }
  else
  {
    v4 = (Outpop::Message::Message *)Outpop::Message::Message::operator new(0x6Cu);
    v5 = v4;
    v9[0] = v4;
    LOBYTE(v11) = 1;
    if ( v4 )
    {
      Outpop::Message::Message::Message(v4, 1, 0, 0, 0, 32);
      *(_DWORD *)v5 = &Outpop::Message::Message::`vftable';
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    LOBYTE(v11) = 0;
    v7 = v6;
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    LOBYTE(v11) = 2;
    Outpop::Utility::Time_Value::gettimeofday(v10);
    LOBYTE(v11) = 3;
    v8 = Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)v10);
    v9[0] = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v10);
    sub_10015EAB((int)v9);
    sub_10015EAB((int)&v8);
    Outpop::Message::Message::set_protocol_catalog(v7, 9u);
    Outpop::Message::Message::set_protocol_type(v7, 0x2329u);
    Outpop::Utility::Binary_Stream::sequence(v7, 0);
    Outpop::Utility::Binary_Stream::set_reliable(v7, 1);
    Outpop::Message::Message_Facade::send_message(this[1], &v7);
    LOBYTE(v11) = 2;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v10);
    LOBYTE(v11) = 0;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
    v11 = -1;
  }
  Outpop::Utility::Lock::unlock(v2);
}
