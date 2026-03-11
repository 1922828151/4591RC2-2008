/*
 * func-name: ?SendGroupCmd@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@JJABVVector@@@Z_0
 * func-address: 0x101f6400
 * callers: 0x10016081
 * callees: 0x100077ed, 0x1000b7e4, 0x10013647, 0x10015eab
 */

void __thiscall GameClient::GroupManager::SendGroupCmd(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2,
        int a3,
        char a4,
        const struct Vector *a5)
{
  const struct Vector *v5; // [esp+8h] [ebp-18h]

  sub_100077ED((int)&a2, 9, 149, COERCE_INT(0.0), 1, 512);
  v5 = a5;
  sub_10015EAB((int)&a3);
  sub_10015EAB((int)&a4);
  sub_1000B7E4((int)v5);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
