/*
 * func-name: ??0P2P_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004780
 * callers: 0x1004a940
 * callees: none
 */

Outpop::IONetwork::P2P_Config *__thiscall Outpop::IONetwork::P2P_Config::P2P_Config(
        Outpop::IONetwork::P2P_Config *this)
{
  char *v2; // ebp

  *((_DWORD *)this + 7) = 300;
  *((_DWORD *)this + 9) = 300;
  v2 = (char *)this + 44;
  *((_DWORD *)this + 10) = 100;
  *((_DWORD *)this + 6) = 1500;
  *((_DWORD *)this + 8) = 10000;
  *((_DWORD *)this + 5) = 0xFFFF;
  *((_DWORD *)this + 4) = 0xFFFF;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  std::string::string((char *)this + 44);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 9) = 1800;
  std::string::operator=(v2, "any");
  *((_DWORD *)this + 23) = 50;
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1;
  return this;
}
