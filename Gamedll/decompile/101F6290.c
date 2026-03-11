/*
 * func-name: ?GetCorpCmd@GroupManager@GameClient@@QAEXAAVVector@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101f6290
 * callers: 0x10005aa1
 * callees: none
 */

int __thiscall GameClient::GroupManager::GetCorpCmd(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = this[46];
  a2[1] = this[47];
  a2[2] = this[48];
  return std::string::operator=(a3, this + 49);
}
