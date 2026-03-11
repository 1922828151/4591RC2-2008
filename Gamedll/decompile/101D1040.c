/*
 * func-name: ??0Aura@GameClient@@QAE@K@Z_0
 * func-address: 0x101d1040
 * callers: 0x10001154
 * callees: 0x100081ed, 0x100145c9
 */

GameClient::Aura *__thiscall GameClient::Aura::Aura(GameClient::Aura *this, unsigned int a2)
{
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]

  GameClient::DataObject::DataObject(this);
  *(_DWORD *)this = &GameClient::Aura::`vftable';
  *((_DWORD *)this + 3) = a2;
  sub_100145C9(v4, v5);
  *((float *)this + 6) = -1.0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = 1;
  *((float *)this + 7) = 0.0;
  return this;
}
