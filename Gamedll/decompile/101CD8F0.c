/*
 * func-name: ?RequestEndUse@Function@GameClient@@UAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101cd8f0
 * callers: 0x100081e3
 * callees: 0x10001b04, 0x100077ed, 0x10013647
 */

void __thiscall GameClient::Function::RequestEndUse(GameClient::Function *this, struct GameClient::LocalCharacter *a2)
{
  sub_100077ED((int)&a2, 9, 206, COERCE_INT(0.0), 1, 512);
  sub_10001B04((int)this + 32);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
