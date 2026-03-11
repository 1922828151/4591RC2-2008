/*
 * func-name: ?GetErrorText@Precacher@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@J@Z
 * func-address: 0x10109d30
 * callers: none
 * callees: 0x1016fd00
 */

void *Precacher::GetErrorText(void *a1, ...)
{
  char v1; // bl
  _DWORD *v2; // esi
  char *v3; // edi
  char *v4; // ebp
  void *v5; // eax
  _DWORD *v7; // [esp+10h] [ebp-30h] BYREF
  char *v8; // [esp+14h] [ebp-2Ch]
  _BYTE v9[28]; // [esp+18h] [ebp-28h] BYREF
  int v10; // [esp+3Ch] [ebp-4h]
  va_list va; // [esp+48h] [ebp+8h] BYREF

  va_start(va, a1);
  v1 = 0;
  sub_1016FD00(&v7, va);
  v2 = v7;
  v3 = (char *)dword_1124165C;
  if ( !v7 || v7 != (_DWORD *)&unk_11241658 )
    invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v3 )
  {
    v5 = (void *)std::wstring::wstring(v9, &unk_101C8AF4);
    v1 = 1;
    v10 = 1;
  }
  else
  {
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v4 == (char *)v2[1] )
      invalid_parameter_noinfo();
    v5 = v4 + 12;
  }
  std::wstring::wstring(a1, v5);
  v10 = 0;
  if ( (v1 & 1) != 0 )
    std::wstring::~wstring(v9);
  return a1;
}
