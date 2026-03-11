/*
 * func-name: ?AddNode@AdapterActor@GameClient@@UAEPAUModelFrame@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PAVModel@@@Z_0
 * func-address: 0x100f3ef0
 * callers: 0x1000d2e2
 * callees: 0x1000be6a
 */

int __stdcall GameClient::AdapterActor::AddNode(void *a1, void *a2, int a3)
{
  int NodeHandle; // esi
  _DWORD v5[7]; // [esp-Ch] [ebp-28h] BYREF
  int v6; // [esp+10h] [ebp-Ch]

  if ( !a3 )
    return 0;
  v6 = 0;
  std::string::string(v5, a2);
  NodeHandle = StaticModel::GetNodeHandle(a3, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6);
  if ( NodeHandle )
    *(_DWORD *)sub_1000BE6A(a1) = NodeHandle;
  return NodeHandle;
}
