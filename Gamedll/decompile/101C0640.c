/*
 * func-name: ?QueryStock@Func_Receive@GameClient@@UAEXPAVLocalCharacter@2@ABV?$vector@KV?$allocator@K@std@@@std@@@Z_0
 * func-address: 0x101c0640
 * callers: 0x10001519
 * callees: 0x10001b04, 0x100077ed, 0x10013647, 0x1001438f
 */

void __thiscall GameClient::Func_Receive::QueryStock(void *this, Outpop::Utility::Ref_Object *a2, int a3)
{
  int v4; // [esp+8h] [ebp-1Ch]

  if ( a2 )
  {
    sub_100077ED((int)&a2, 9, 215, COERCE_INT(0.0), 1, 512);
    v4 = a3;
    sub_10001B04((int)this + 32);
    sub_1001438F(v4);
    j_nullsub_44((int)&a2);
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
