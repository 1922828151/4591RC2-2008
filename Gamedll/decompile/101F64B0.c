/*
 * func-name: ?RequestUpdateGroupData@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101f64b0
 * callers: 0x1000efca
 * callees: 0x100077ed, 0x10013647
 */

void __thiscall GameClient::GroupManager::RequestUpdateGroupData(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2)
{
  sub_100077ED((int)&a2, 9, 150, COERCE_INT(0.0), 1, 512);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
