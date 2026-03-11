/*
 * func-name: ?GetText@Precacher@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@ABV23@@Z
 * func-address: 0x1010acb0
 * callers: none
 * callees: 0x101105e0
 */

void *__cdecl Precacher::GetText(void *a1, void *a2)
{
  _DWORD *v2; // esi
  char *v3; // edi
  char *v4; // ebp
  void *v5; // eax
  _DWORD *v7; // [esp+10h] [ebp-8h] BYREF
  char *v8; // [esp+14h] [ebp-4h]

  v7 = 0;
  sub_101105E0(&v7, a2);
  v2 = v7;
  v3 = (char *)dword_11241634;
  if ( !v7 || v7 != (_DWORD *)&unk_11241630 )
    invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v3 )
  {
    v5 = a2;
  }
  else
  {
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v4 == (char *)v2[1] )
      invalid_parameter_noinfo();
    v5 = v4 + 36;
  }
  std::wstring::wstring(a1, v5);
  return a1;
}
