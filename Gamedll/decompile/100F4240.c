/*
 * func-name: ?ClearNode@AdapterActor@GameClient@@UAEXXZ_0
 * func-address: 0x100f4240
 * callers: 0x10006a73
 * callees: 0x100026f3, 0x100063fc
 */

void __thiscall GameClient::AdapterActor::ClearNode(GameClient::AdapterActor *this)
{
  char *v2; // edi
  _DWORD v3[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (char *)this + 1140;
  sub_100063FC();
  v3[1] = *((_DWORD *)v2 + 1);
  v3[0] = v2;
  sub_100026F3(9, (int)v3);
  *((_DWORD *)this + 292) = 1;
  *((_DWORD *)this + 293) = 1;
}
