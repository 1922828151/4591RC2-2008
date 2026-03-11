/*
 * func-name: ?performCreate@?$ProductorTemplate@VFOccupyIcon@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102329b0
 * callers: 0x10006014
 * callees: 0x100095bb, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<FOccupyIcon>::performCreate(char *this)
{
  int v2; // esi
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  v2 = 0;
  if ( operator new(0x244u) )
    v2 = sub_100095BB(v4, v5);
  std::string::operator=(v2 + 4, this + 4);
  return v2;
}
