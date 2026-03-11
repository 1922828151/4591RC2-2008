/*
 * func-name: ??0Message@0Outpop@@QAE@AAV001@@Z
 * func-address: 0x10004570
 * callers: none
 * callees: none
 */

Outpop::Message::Message *__thiscall Outpop::Message::Message::Message(
        Outpop::Message::Message *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  Outpop::Utility::Binary_Stream::Binary_Stream(this, (struct Outpop::Utility::Binary_Stream *)a2, 0, 0, 0);
  *(_DWORD *)this = &Outpop::Message::Message::`vftable';
  *((_DWORD *)this + 18) = a2[18];
  *((_DWORD *)this + 19) = a2[19];
  *((_DWORD *)this + 20) = a2[20];
  *((_DWORD *)this + 21) = a2[21];
  *((_DWORD *)this + 22) = a2[22];
  v3 = a2[23];
  *((_DWORD *)this + 23) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_WORD *)this + 48) = *((_WORD *)a2 + 48);
  *((_DWORD *)this + 25) = a2[25];
  *((_BYTE *)this + 104) = *((_BYTE *)a2 + 104);
  return this;
}
