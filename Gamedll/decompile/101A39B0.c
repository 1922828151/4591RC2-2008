/*
 * func-name: ?GetDummyPointMatrix@Establishment@GameClient@@QAE?AVMatrix@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101a39b0
 * callers: 0x1000eb60
 * callees: 0x1001371e, 0x10014669
 */

void *__thiscall GameClient::Establishment::GetDummyPointMatrix(_DWORD *this, void *a2, int a3)
{
  int v4; // eax
  int v6; // eax
  _BYTE v7[64]; // [esp+18h] [ebp-40h] BYREF

  v4 = this[75];
  if ( v4 && *(_DWORD *)(v4 + 716) )
  {
    sub_10014669(v7);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(*(_DWORD *)this[75] + 120))(
           this[75],
           a3,
           v7,
           0) )
    {
      sub_1001371E((int)v7);
      return a2;
    }
    else
    {
      v6 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)this[75] + 124))(
             this[75],
             a3,
             a3,
             *(_DWORD *)(this[75] + 716));
      if ( v6 )
        sub_1001371E(v6 + 164);
      else
        sub_1001371E((int)v7);
      return a2;
    }
  }
  else
  {
    sub_10014669(a2);
    return a2;
  }
}
