/*
 * func-name: ??0FWheel@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101aa650
 * callers: 0x100026b7
 * callees: 0x10019a97
 */

GameClient::FWheel *__thiscall GameClient::FWheel::FWheel(
        GameClient::FWheel *this,
        const struct GameClient::FWheel *a2)
{
  GameClient::FWheel *result; // eax

  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FWheel::`vftable';
  *((float *)this + 27) = *((float *)a2 + 27);
  result = this;
  *((float *)this + 28) = *((float *)a2 + 28);
  *((float *)this + 29) = *((float *)a2 + 29);
  *((float *)this + 30) = *((float *)a2 + 30);
  *((float *)this + 31) = *((float *)a2 + 31);
  *((float *)this + 32) = *((float *)a2 + 32);
  *((float *)this + 33) = *((float *)a2 + 33);
  *((float *)this + 34) = *((float *)a2 + 34);
  *((float *)this + 35) = *((float *)a2 + 35);
  *((float *)this + 36) = *((float *)a2 + 36);
  return result;
}
