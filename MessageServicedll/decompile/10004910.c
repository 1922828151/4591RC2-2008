/*
 * func-name: ??0Request_Ack@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004910
 * callers: none
 * callees: 0x10007100, 0x10007530, 0x1001d730
 */

Outpop::Message::Request_Ack *__thiscall Outpop::Message::Request_Ack::Request_Ack(
        Outpop::Message::Request_Ack *this,
        const struct Outpop::Message::Request_Ack *a2)
{
  *(_DWORD *)this = &Outpop::Message::Request_Ack::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  sub_10007100((char *)this + 8);
  sub_10007100((char *)this + 48);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  sub_10007530((char *)this + 140);
  sub_10007530((char *)this + 152);
  *((_BYTE *)this + 164) = *((_BYTE *)a2 + 164);
  sub_1001D730((char *)this + 168);
  return this;
}
