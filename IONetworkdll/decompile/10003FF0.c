/*
 * func-name: ??0Channel_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10003ff0
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Channel_Config *__thiscall Outpop::IONetwork::Channel_Config::Channel_Config(
        Outpop::IONetwork::Channel_Config *this)
{
  Outpop::IONetwork::Channel_Config *result; // eax

  result = this;
  *((_DWORD *)this + 7) = 300;
  *((_DWORD *)this + 9) = 300;
  *((_DWORD *)this + 5) = 0xFFFF;
  *((_DWORD *)this + 4) = 0xFFFF;
  *((_DWORD *)this + 10) = 100;
  *((_DWORD *)this + 6) = 1500;
  *((_DWORD *)this + 8) = 10000;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  return result;
}
