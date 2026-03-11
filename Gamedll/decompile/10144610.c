/*
 * func-name: ?Close@Booty@GameClient@@QAEXXZ_0
 * func-address: 0x10144610
 * callers: 0x1000e4bc
 * callees: 0x1000194c, 0x10001b04, 0x100077ed, 0x10013647
 */

void __thiscall GameClient::Booty::Close(GameClient::Booty *this)
{
  Outpop::Utility::Ref_Object *v2; // [esp+18h] [ebp-10h] BYREF
  int v3; // [esp+24h] [ebp-4h]

  if ( *((_BYTE *)this + 172) && sub_1000194C(0) )
  {
    sub_100077ED((int)&v2, 9, 75, COERCE_INT(0.0), 1, 512);
    v3 = 0;
    sub_10001B04((int)this + 12);
    j_nullsub_44((int)&v2);
    v3 = -1;
    if ( v2 )
      Outpop::Utility::Ref_Object::release(v2);
  }
}
