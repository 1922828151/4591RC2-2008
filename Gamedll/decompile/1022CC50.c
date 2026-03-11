/*
 * func-name: ?performCreate@?$ProductorTemplate@VFFunc_Sheild@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022cc50
 * callers: 0x1000237e
 * callees: 0x1000ca68, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::performCreate(char *this)
{
  GameClient::FFunc_Sheild *v2; // eax
  int v3; // esi

  v2 = (GameClient::FFunc_Sheild *)operator new(0x88u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FFunc_Sheild::FFunc_Sheild(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
