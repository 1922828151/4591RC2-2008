/*
 * func-name: ?SetTabPageHeadPic@CRETabPages@@UAEXHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100aba10
 * callers: none
 * callees: none
 */

int __thiscall CRETabPages::SetTabPageHeadPic(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx

  result = a2;
  if ( a2 < this[134] )
  {
    v5 = *(_DWORD *)(this[133] + 532 * a2 + 528);
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 200))(v5, a3, a4);
  }
  return result;
}
