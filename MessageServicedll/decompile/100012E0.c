/*
 * func-name: ??0Context@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100012e0
 * callers: none
 * callees: 0x100027a0, 0x10002840
 */

Outpop::Message::Context *__thiscall Outpop::Message::Context::Context(
        Outpop::Message::Context *this,
        const struct Outpop::Message::Context *a2)
{
  *(_DWORD *)this = &Outpop::Message::Context::`vftable';
  sub_100027A0((char *)this + 4);
  sub_100027A0((char *)this + 16);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 84);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  sub_10002840((char *)this + 92);
  return this;
}
