/*
 * func-name: ?performCreate@?$ProductorTemplate@VFBullet@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102248f0
 * callers: 0x1000a0dd
 * callees: 0x10002b94, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FBullet>::performCreate(char *this)
{
  int v2; // esi
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  v2 = 0;
  if ( operator new(0x258u) )
    v2 = sub_10002B94(v4, v5);
  std::string::operator=(v2 + 4, this + 4);
  return v2;
}
