/*
 * func-name: ?add_parser@Config2@Utility@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVConfig_Paser@23@@Z
 * func-address: 0x100125f0
 * callers: none
 * callees: 0x10012a10, 0x10013760, 0x10014550
 */

int __thiscall Outpop::Utility::Config2::add_parser(void *this, int a2, int a3)
{
  int v5; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v6[12]; // [esp+10h] [ebp-5Ch] BYREF
  _BYTE v7[32]; // [esp+1Ch] [ebp-50h] BYREF
  _BYTE v8[36]; // [esp+3Ch] [ebp-30h] BYREF
  int v9; // [esp+68h] [ebp-4h]

  v5 = a3;
  sub_10013760(v8, a2, &v5);
  v9 = 0;
  sub_10014550(v7);
  LOBYTE(v9) = 1;
  sub_10012A10(this, v6, v7);
  LOBYTE(v9) = 0;
  std::string::~string(v7);
  v9 = -1;
  return std::string::~string(v8);
}
