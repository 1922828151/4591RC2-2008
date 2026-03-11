/*
 * func-name: ??0FFunc_Power@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bfc90
 * callers: 0x1001549c
 * callees: 0x10019a97
 */

GameClient::FFunc_Power *__thiscall GameClient::FFunc_Power::FFunc_Power(
        GameClient::FFunc_Power *this,
        const struct GameClient::FFunc_Power *a2)
{
  GameClient::FFunc_Power *result; // eax

  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Power::`vftable';
  *((float *)this + 27) = *((float *)a2 + 27);
  *((float *)this + 28) = *((float *)a2 + 28);
  *((_BYTE *)this + 116) = *((_BYTE *)a2 + 116);
  *((float *)this + 30) = *((float *)a2 + 30);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((float *)this + 32) = *((float *)a2 + 32);
  *((float *)this + 33) = *((float *)a2 + 33);
  *((float *)this + 34) = *((float *)a2 + 34);
  *((float *)this + 35) = *((float *)a2 + 35);
  *((float *)this + 36) = *((float *)a2 + 36);
  *((float *)this + 37) = *((float *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((float *)this + 41) = *((float *)a2 + 41);
  result = this;
  *((float *)this + 42) = *((float *)a2 + 42);
  return result;
}
