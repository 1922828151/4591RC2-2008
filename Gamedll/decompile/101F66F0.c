/*
 * func-name: ?SendCorpCmd@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@ABVVector@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101f66f0
 * callers: 0x1000f6c8
 * callees: 0x10002842, 0x100077ed, 0x1000b7e4, 0x10013647
 */

void __stdcall GameClient::GroupManager::SendCorpCmd(Outpop::Utility::Ref_Object *a1, int a2, int a3)
{
  int v3; // [esp+8h] [ebp-18h]

  sub_100077ED((int)&a1, 9, 255, COERCE_INT(0.0), 1, 512);
  v3 = a3;
  sub_1000B7E4(a2);
  sub_10002842(v3);
  j_nullsub_44((int)&a1);
  if ( a1 )
    Outpop::Utility::Ref_Object::release(a1);
}
