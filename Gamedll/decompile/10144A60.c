/*
 * func-name: ?SwapEquip@Booty@GameClient@@QAEXABV?$vector@KV?$allocator@K@std@@@std@@@Z_0
 * func-address: 0x10144a60
 * callers: 0x1000c24d
 * callees: 0x1000194c, 0x10001b04, 0x100077ed, 0x10013647, 0x1001438f
 */

void __thiscall GameClient::Booty::SwapEquip(_BYTE *this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // [esp+18h] [ebp-10h] BYREF
  int v4; // [esp+24h] [ebp-4h]

  if ( this[172] && sub_1000194C(0) )
  {
    sub_100077ED((int)&v3, 9, 78, COERCE_INT(0.0), 1, 512);
    v4 = 0;
    sub_10001B04((int)(this + 12));
    sub_1001438F(a2);
    j_nullsub_44((int)&v3);
    v4 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
  }
}
