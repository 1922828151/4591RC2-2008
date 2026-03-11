/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAAlarm@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10246e40
 * callers: 0x10011f09
 * callees: 0x100104f6, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAAlarm>::performCreate(char *this)
{
  GameClient::FAAlarm *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAAlarm *)operator new(0x120u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAAlarm::FAAlarm(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
