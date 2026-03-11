/*
 * func-name: ?CancelOrder@Func_Receive@GameClient@@UAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101c05a0
 * callers: 0x10012661
 * callees: 0x10001b04, 0x100077ed, 0x10013647
 */

void __thiscall GameClient::Func_Receive::CancelOrder(
        GameClient::Func_Receive *this,
        struct GameClient::LocalCharacter *a2)
{
  if ( a2 )
  {
    sub_100077ED((int)&a2, 9, 218, COERCE_INT(0.0), 1, 512);
    sub_10001B04((int)this + 32);
    j_nullsub_44((int)&a2);
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
