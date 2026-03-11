/*
 * func-name: ?UpdateCorpInfo@GroupManager@GameClient@@QAEXJABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101f9260
 * callers: 0x10008fbc
 * callees: 0x100074b4, 0x100096ba, 0x1001109a
 */

int __thiscall GameClient::GroupManager::UpdateCorpInfo(char *this, char a2, int a3)
{
  char *v3; // esi
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v8; // [esp-4h] [ebp-1Ch]
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v3 = this + 224;
  sub_1001109A((int)&v9, (int)&a2);
  v4 = v9;
  v5 = *((_DWORD *)v3 + 1);
  if ( !v9 || (char *)v9 != v3 )
    _invalid_parameter_noinfo();
  if ( v10 != v5 )
    sub_100074B4((int)&v9, v4, v10);
  v8 = a3;
  v6 = sub_100096BA((int)&a2);
  return std::string::operator=(v6, v8);
}
