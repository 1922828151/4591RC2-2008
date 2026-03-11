/*
 * func-name: ?regist@LogicFactory@GameClient@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVProductor@2@@Z_0
 * func-address: 0x101dd6e0
 * callers: 0x10014c77
 * callees: 0x10013d2c, 0x10018fb6
 */

void __stdcall GameClient::LogicFactory::regist(void *a1, int a2)
{
  int v2; // edi
  char *v3; // eax
  char v4; // dl
  int i; // ecx

  v2 = a2;
  if ( a2 )
  {
    v3 = (char *)std::string::c_str(a1);
    v4 = *v3;
    for ( i = 0; *v3; v4 = *v3 )
    {
      ++v3;
      i = v4 + 5 * i;
    }
    a2 = i;
    *(_DWORD *)sub_10013D2C(a1) = v2;
    *(_DWORD *)sub_10018FB6((int)&a2) = v2;
  }
}
