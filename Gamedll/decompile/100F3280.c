/*
 * func-name: ?RemoveNode@AdapterActor@GameClient@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x100f3280
 * callers: 0x10005af6
 * callees: 0x1000d689, 0x1000df7b
 */

void *__thiscall GameClient::AdapterActor::RemoveNode(_DWORD *this, int a2)
{
  void *v3; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  void *result; // eax
  int v7; // [esp+Ch] [ebp-8h] BYREF
  void *v8; // [esp+10h] [ebp-4h]

  sub_1000DF7B((int)&v7, a2);
  v3 = (void *)this[286];
  v4 = this + 285;
  v5 = v7;
  if ( !v7 || (_DWORD *)v7 != v4 )
    _invalid_parameter_noinfo();
  result = v8;
  if ( v8 != v3 )
    return (void *)sub_1000D689((int)&v7, v5, v8);
  return result;
}
