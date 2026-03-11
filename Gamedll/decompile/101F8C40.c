/*
 * func-name: ??0Group@GameClient@@QAE@KK@Z_0
 * func-address: 0x101f8c40
 * callers: 0x10012dfa
 * callees: none
 */

GameClient::Group *__thiscall GameClient::Group::Group(GameClient::Group *this, unsigned int a2, unsigned int a3)
{
  GameClient::Group *result; // eax

  result = this;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  return result;
}
