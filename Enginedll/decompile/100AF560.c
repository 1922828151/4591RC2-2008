/*
 * func-name: ?HandleKeyboard@CTYChatIME@@UAE_NIIJ@Z
 * func-address: 0x100af560
 * callers: none
 * callees: 0x100ac530, 0x1017a230
 */

bool __thiscall CTYChatIME::HandleKeyboard(CTYChatIME *this, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // edi
  _BYTE *v6; // eax
  bool v7; // bl
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // eax
  char *v12; // eax
  char *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  void (__stdcall *v17)(int, int, _DWORD, CTYChatIME *, int, _DWORD); // ecx
  bool v18; // bl
  _BYTE v19[4]; // [esp+18h] [ebp-44h] BYREF
  _DWORD v20[4]; // [esp+1Ch] [ebp-40h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-30h]
  unsigned int v22; // [esp+30h] [ebp-2Ch]
  _BYTE v23[28]; // [esp+34h] [ebp-28h] BYREF
  int v24; // [esp+58h] [ebp-4h]

  if ( a2 != 257 || a3 != 32 )
    return CREEditBox::HandleKeyboard(this, a2, a3, a4);
  std::wstring::wstring(v23, *((_DWORD *)this + 133));
  v5 = 0;
  v24 = 0;
  sub_1017A230(v19, v23);
  LOBYTE(v24) = 2;
  std::wstring::~wstring(v23);
  v6 = (_BYTE *)v20[0];
  if ( v22 < 0x10 )
    v6 = v20;
  if ( *v6 == 47 )
  {
    v9 = v21;
    v10 = 1;
    if ( v21 > 1 )
    {
      while ( 1 )
      {
        v11 = (_DWORD *)v20[0];
        if ( v22 < 0x10 )
          v11 = v20;
        if ( *((_BYTE *)v11 + v10) == 32 )
          break;
        if ( v10 > v9 )
        {
          invalid_parameter_noinfo();
          v9 = v21;
        }
        v12 = (char *)v20[0];
        if ( v22 < 0x10 )
          v12 = (char *)v20;
        if ( v12[v10] < 48 )
          goto LABEL_31;
        if ( v10 > v9 )
        {
          invalid_parameter_noinfo();
          v9 = v21;
        }
        v13 = (char *)v20[0];
        if ( v22 < 0x10 )
          v13 = (char *)v20;
        if ( v13[v10] > 57 )
          goto LABEL_31;
        if ( v10 > v9 )
        {
          invalid_parameter_noinfo();
          v9 = v21;
        }
        v14 = (_DWORD *)v20[0];
        if ( v22 < 0x10 )
          v14 = v20;
        v15 = *((char *)v14 + v10++);
        v5 = v15 + 10 * v5 - 48;
        if ( v10 >= v9 )
        {
          if ( !v5 )
            goto LABEL_29;
          goto LABEL_27;
        }
      }
      if ( !v5 )
      {
LABEL_31:
        v18 = CREEditBox::HandleKeyboard(this, 0x101u, 0x20u, a4);
        v24 = -1;
        std::string::~string(v19);
        return v18;
      }
LABEL_27:
      v16 = *((_DWORD *)this + 237);
      v17 = *(void (__stdcall **)(int, int, _DWORD, CTYChatIME *, int, _DWORD))(v16 + 736);
      if ( v17 )
        v17(v16, 65520, *((_DWORD *)this + 34), this, v5, 0);
    }
LABEL_29:
    v24 = -1;
    std::string::~string(v19);
    return 0;
  }
  else
  {
    v7 = CREEditBox::HandleKeyboard(this, 0x101u, 0x20u, a4);
    v24 = -1;
    std::string::~string(v19);
    return v7;
  }
}
