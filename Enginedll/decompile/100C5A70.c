/*
 * func-name: ?AddFormatedLine@CMultiLineStatic@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PBUD3DXCOLOR@@@Z
 * func-address: 0x100c5a70
 * callers: none
 * callees: 0x100c5520
 */

void __thiscall CMultiLineStatic::AddFormatedLine(void *this, int a2, float *a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v4; // esi
  int v6; // edi
  unsigned int v7; // eax
  _DWORD v8[7]; // [esp+0h] [ebp-44h] BYREF
  _DWORD v9[9]; // [esp+1Ch] [ebp-28h] BYREF
  int v10; // [esp+40h] [ebp-4h]

  v10 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v9[8] = &loc_101ACB81;
  v9[7] = ExceptionList;
  v4 = 0;
  v6 = std::wstring::find(a2, "\n", 0);
  while ( v6 != std::wstring::npos )
  {
    std::wstring::substr(a2, v8, v4, v6 - v4);
    v10 = 0;
    CMultiLineStatic::AddLine((int)this, v6, v8, a3);
    v4 = v6 + 2;
    v6 = std::wstring::find(a2, "\n", v6 + 2);
    v10 = -1;
    std::wstring::~wstring(v8);
  }
  v7 = *(_DWORD *)(a2 + 20);
  if ( v4 < v7 )
  {
    std::wstring::substr(a2, v9, v4, v7 - v4);
    v10 = 1;
    CMultiLineStatic::AddLine((int)this, v6, v9, a3);
    v10 = -1;
    std::wstring::~wstring(v9);
  }
}
