/*
 * func-name: ?SubmitOccupyRequest@Establishment@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101a1cd0
 * callers: 0x1000c487
 * callees: 0x10001b04, 0x100077ed, 0x10013647
 */

char __thiscall GameClient::Establishment::SubmitOccupyRequest(
        GameClient::Establishment *this,
        struct GameClient::LocalCharacter *a2)
{
  sub_100077ED((int)&a2, 9, 114, COERCE_INT(0.0), 1, 512);
  sub_10001B04((int)this + 12);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return 1;
}
