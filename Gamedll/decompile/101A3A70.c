/*
 * func-name: ?GetNodeMatrix@Establishment@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVMatrix@@_N@Z_0
 * func-address: 0x101a3a70
 * callers: 0x10011a81
 * callees: 0x1000eb60
 */

char __stdcall GameClient::Establishment::GetNodeMatrix(int a1, void *a2, int a3)
{
  _BYTE v4[64]; // [esp+8h] [ebp-40h] BYREF

  qmemcpy(a2, (const void *)GameClient::Establishment::GetDummyPointMatrix(v4, a1), 0x40u);
  return 1;
}
