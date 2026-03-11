/*
 * func-name: ??0Acceptor_Config@IONetwork@Outpop@@QAE@ABU012@@Z
 * func-address: 0x100043b0
 * callers: 0x10004b00
 * callees: none
 */

Outpop::IONetwork::Acceptor_Config *__thiscall Outpop::IONetwork::Acceptor_Config::Acceptor_Config(
        Outpop::IONetwork::Acceptor_Config *this,
        const struct Outpop::IONetwork::Acceptor_Config *a2)
{
  qmemcpy(this, a2, 0x2Cu);
  std::string::string((char *)a2 + 44);
  *((_WORD *)this + 36) = *((_WORD *)a2 + 36);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_BYTE *)this + 80) = *((_BYTE *)a2 + 80);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 112);
  *((_BYTE *)this + 113) = *((_BYTE *)a2 + 113);
  *((_WORD *)this + 57) = *((_WORD *)a2 + 57);
  return this;
}
