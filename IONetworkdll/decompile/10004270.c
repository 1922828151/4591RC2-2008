/*
 * func-name: ??0Acceptor_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004270
 * callers: 0x100049d0
 * callees: none
 */

Outpop::IONetwork::Acceptor_Config *__thiscall Outpop::IONetwork::Acceptor_Config::Acceptor_Config(
        Outpop::IONetwork::Acceptor_Config *this)
{
  char *v2; // edi

  v2 = (char *)this + 44;
  *((_DWORD *)this + 10) = 100;
  *((_DWORD *)this + 6) = 1500;
  *((_DWORD *)this + 7) = 300;
  *((_DWORD *)this + 8) = 10000;
  *((_DWORD *)this + 9) = 300;
  *((_DWORD *)this + 5) = 0xFFFF;
  *((_DWORD *)this + 4) = 0xFFFF;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  std::string::string((char *)this + 44);
  *((_BYTE *)this + 112) = 0;
  *((_BYTE *)this + 113) = 0;
  *((_WORD *)this + 57) = 100;
  *((_DWORD *)this + 27) = 100;
  *((_DWORD *)this + 26) = 102400;
  std::string::operator=(v2, "any");
  *((_DWORD *)this + 25) = 50;
  *((_DWORD *)this + 24) = 0x2000000;
  *((_DWORD *)this + 23) = 128;
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 19) = 0xFFFF;
  *((_BYTE *)this + 80) = 0;
  *((_DWORD *)this + 21) = 10;
  *((_DWORD *)this + 22) = 0;
  return this;
}
