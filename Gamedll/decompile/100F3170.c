/*
 * func-name: ?ClearNodeSpeed@AdapterActor@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x100f3170
 * callers: 0x10016423
 * callees: 0x100069e7
 */

char __thiscall GameClient::AdapterActor::ClearNodeSpeed(_DWORD **this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v2 = (_DWORD *)*this[296];
  if ( v2 == this[296] )
    return 0;
  sub_100069E7((int)&v4, (int)(this + 295), v2);
  return 1;
}
