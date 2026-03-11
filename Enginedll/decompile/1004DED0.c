/*
 * func-name: ?GetGUIDString@Actor@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x1004ded0
 * callers: none
 * callees: none
 */

int __thiscall Actor::GetGUIDString(const UUID *this, int a2)
{
  RPC_CSTR StringUuid; // [esp+4h] [ebp-4h] BYREF

  StringUuid = 0;
  UuidToStringA(this + 16, &StringUuid);
  std::string::string(a2, StringUuid);
  return a2;
}
