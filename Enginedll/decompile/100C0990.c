/*
 * func-name: ?GetCustomPic@CPicCheckBox@@QAE_NHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAUtagRECT@@@Z
 * func-address: 0x100c0990
 * callers: none
 * callees: 0x100b5280, 0x1017a230
 */

char __thiscall CPicCheckBox::GetCustomPic(_DWORD *this, int a2, int a3, LPRECT lprc)
{
  int *v5; // esi
  int v6; // edi
  int v7; // ebp
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  _BYTE v11[28]; // [esp+0h] [ebp-44h] BYREF
  _BYTE v12[28]; // [esp+1Ch] [ebp-28h] BYREF
  int v13; // [esp+40h] [ebp-4h]

  if ( a2 >= this[214] )
    return 0;
  v5 = *(int **)(this[213] + 4 * a2);
  if ( v5 )
  {
    v6 = *v5;
    v7 = this[28];
    if ( REGetGlobalDialogResourceManager() )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v7 + 740) + 4 * v6);
      v9 = *((_DWORD *)REGetGlobalDialogResourceManager() + 2);
      if ( *(_DWORD *)(v9 + 4 * v8) )
      {
        std::wstring::wstring(v11, *(_DWORD *)(v9 + 4 * v8));
        v13 = 0;
        v10 = sub_1017A230(v12, v11);
        LOBYTE(v13) = 1;
        std::string::operator=(a3, v10);
        LOBYTE(v13) = 0;
        std::string::~string(v12);
        v13 = -1;
        std::wstring::~wstring(v11);
        *lprc = *(struct tagRECT *)(v5 + 3);
        return 1;
      }
    }
  }
  else
  {
    std::string::operator=(a3, &unk_101C4782);
    SetRect(lprc, 0, 0, 0, 0);
  }
  return 0;
}
