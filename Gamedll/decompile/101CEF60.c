/*
 * func-name: ??0AAlarm@GameClient@@QAE@K@Z_0
 * func-address: 0x101cef60
 * callers: 0x1000c144
 * callees: 0x10001154
 */

GameClient::AAlarm *__thiscall GameClient::AAlarm::AAlarm(GameClient::AAlarm *this, unsigned int a2)
{
  GameClient::AAlarm *result; // eax

  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AAlarm::`vftable';
  *((float *)this + 39) = 0.0;
  *((float *)this + 40) = 0.0;
  result = this;
  *((float *)this + 41) = 0.0;
  return result;
}
