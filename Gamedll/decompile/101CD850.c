/*
 * func-name: ?RequestUse@Function@GameClient@@UAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101cd850
 * callers: 0x1000373d
 * callees: 0x10001b04, 0x100077ed, 0x10013647
 */

void __thiscall GameClient::Function::RequestUse(GameClient::Function *this, struct GameClient::LocalCharacter *a2)
{
  sub_100077ED((int)&a2, 9, 205, COERCE_INT(0.0), 1, 512);
  sub_10001B04((int)this + 32);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
