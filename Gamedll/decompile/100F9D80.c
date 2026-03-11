/*
 * func-name: ?AddAsyncHandle@AdapterActor@GameClient@@QAEXH@Z_0
 * func-address: 0x100f9d80
 * callers: 0x1001acad
 * callees: 0x1000b7d0, 0x1001684c
 */

void __thiscall GameClient::AdapterActor::AddAsyncHandle(GameClient::AdapterActor *this, int a2)
{
  int v2; // edi
  int v3; // ebx

  v2 = *((_DWORD *)this + 310);
  v3 = sub_1001684C(v2, *(_DWORD *)(v2 + 4), (int)&a2);
  sub_1000B7D0(1);
  *(_DWORD *)(v2 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
}
