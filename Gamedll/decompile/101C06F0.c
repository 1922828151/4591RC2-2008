/*
 * func-name: ?SubmitOrder@Func_Receive@GameClient@@UAEXPAVLocalCharacter@2@ABV?$vector@KV?$allocator@K@std@@@std@@_N@Z_0
 * func-address: 0x101c06f0
 * callers: 0x100163c4
 * callees: 0x10001b04, 0x10006618, 0x100077ed, 0x10013647, 0x1001438f
 */

void __thiscall GameClient::Func_Receive::SubmitOrder(void *this, Outpop::Utility::Ref_Object *a2, int a3, char a4)
{
  int v5; // [esp+4h] [ebp-20h]

  if ( a2 )
  {
    sub_100077ED((int)&a2, 9, 214, COERCE_INT(0.0), 1, 512);
    v5 = a3;
    sub_10001B04((int)this + 32);
    sub_1001438F(v5);
    sub_10006618((int)&a4);
    j_nullsub_44((int)&a2);
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
