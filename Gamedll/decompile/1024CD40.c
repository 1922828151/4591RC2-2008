/*
 * func-name: ?performCreate@?$ProductorTemplate@VFSLock@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1024cd40
 * callers: 0x100105b9
 * callees: 0x10009f7f, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FSLock>::performCreate(char *this)
{
  GameClient::FSLock *v2; // eax
  int v3; // esi

  v2 = (GameClient::FSLock *)operator new(0x2CCu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FSLock::FSLock(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
