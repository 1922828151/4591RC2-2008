/*
 * func-name: ??0Handler_Manager@Message@Outpop@@QAE@XZ
 * func-address: 0x1001ef10
 * callers: 0x100052a0
 * callees: 0x10020310
 */

Outpop::Message::Handler_Manager *__thiscall Outpop::Message::Handler_Manager::Handler_Manager(
        Outpop::Message::Handler_Manager *this)
{
  char v3; // [esp+Bh] [ebp-15h] BYREF
  Outpop::Message::Handler_Manager *v4; // [esp+Ch] [ebp-14h]
  char *v5; // [esp+10h] [ebp-10h]

  v4 = this;
  *(_DWORD *)this = &Outpop::Message::Handler_Manager::`vftable';
  v5 = (char *)this + 4;
  sub_10020310((char *)this + 4, &v3);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 15) = 0;
  return this;
}
