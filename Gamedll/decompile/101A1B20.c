/*
 * func-name: ?GetDummyPoint@Establishment@GameClient@@QAEPAUModelFrame@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101a1b20
 * callers: 0x10004d59
 * callees: none
 */

int __thiscall GameClient::Establishment::GetDummyPoint(_DWORD *this, void *a2)
{
  int v3; // eax
  _DWORD v5[7]; // [esp-20h] [ebp-28h] BYREF
  int v6; // [esp-4h] [ebp-Ch]
  _DWORD *v7; // [esp+4h] [ebp-4h]

  v3 = this[75];
  if ( !v3 || !*(_DWORD *)(v3 + 716) )
    return 0;
  v6 = 0;
  v7 = v5;
  std::string::string(v5, a2);
  return StaticModel::GetNodeHandle(*(_DWORD *)(this[75] + 716), v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6);
}
