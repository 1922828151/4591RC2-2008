/*
 * func-name: ??0FFunc_Receive@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101c3050
 * callers: 0x10011a09
 * callees: 0x10019a97
 */

GameClient::FFunc_Receive *__thiscall GameClient::FFunc_Receive::FFunc_Receive(
        GameClient::FFunc_Receive *this,
        const struct GameClient::FFunc_Receive *a2)
{
  GameClient::FFunc_Receive *result; // eax

  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Receive::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((float *)this + 30) = *((float *)a2 + 30);
  result = this;
  *((float *)this + 31) = *((float *)a2 + 31);
  return result;
}
