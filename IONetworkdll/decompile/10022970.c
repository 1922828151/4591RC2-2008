/*
 * func-name: ??0Comminute_Container@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10022970
 * callers: 0x10022aa0, 0x10042140
 * callees: 0x10023f30
 */

Outpop::IONetwork::Comminute_Container *__thiscall Outpop::IONetwork::Comminute_Container::Comminute_Container(
        Outpop::IONetwork::Comminute_Container *this,
        const struct Outpop::IONetwork::Comminute_Container *a2)
{
  sub_10023F30(this);
  *((_WORD *)this + 20) = *((_WORD *)a2 + 20);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  return this;
}
