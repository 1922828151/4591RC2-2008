/*
 * func-name: ??0Message@0Outpop@@QAE@I@Z
 * func-address: 0x10020a00
 * callers: 0x10011e60
 * callees: none
 */

Outpop::Message::Message *__thiscall Outpop::Message::Message::Message(Outpop::Message::Message *this, unsigned int a2)
{
  Outpop::Utility::Binary_Stream::Binary_Stream(this, a2);
  *(_DWORD *)this = &Outpop::Message::Message::`vftable';
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 18) = -1;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 104) = 0;
  return this;
}
