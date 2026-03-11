/*
 * func-name: ?GetStringW@XMLSystem@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x100493a0
 * callers: 0x10095720, 0x10096e60, 0x1010b030, 0x1010b240, 0x1014a540, 0x1014a750, 0x1014c910, 0x1014cc50, 0x1014cfa0
 * callees: none
 */

void *__stdcall XMLSystem::GetStringW(void *a1, int *a2, char a3)
{
  int v4; // eax
  int (*v5)(void); // edx
  int v6; // eax
  _BYTE v7[28]; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    v4 = *a2;
    if ( a3 )
      v5 = *(int (**)(void))(v4 + 128);
    else
      v5 = *(int (**)(void))(v4 + 8);
    v6 = v5();
    std::wstring::wstring(v7, v6);
    v8 = 1;
    std::wstring::wstring(a1, v7);
    LOBYTE(v8) = 0;
    std::wstring::~wstring(v7);
    return a1;
  }
  else
  {
    std::wstring::wstring(a1, &unk_101BFAC8);
    return a1;
  }
}
