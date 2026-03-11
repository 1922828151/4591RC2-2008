/*
 * func-name: ?AddLine@CTYMenu@@QAEXHHABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x10157440
 * callers: none
 * callees: 0x100a5500, 0x100a5550, 0x100a56d0, 0x100a57a0, 0x100b55d0, 0x10158e90, 0x10159060
 */

void __thiscall CTYMenu::AddLine(CREDialog *this, int a2, int a3, int a4)
{
  struct REFontNode *Font; // eax
  struct REFontNode *v6; // esi
  const wchar_t *v7; // eax
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int i; // edi
  unsigned int v13; // edi
  bool v14; // cc
  int v15; // [esp+10h] [ebp-8Ch] BYREF
  int v16[2]; // [esp+14h] [ebp-88h] BYREF
  void *v17[6]; // [esp+1Ch] [ebp-80h] BYREF
  int v18; // [esp+34h] [ebp-68h] BYREF
  _BYTE v19[28]; // [esp+38h] [ebp-64h] BYREF
  int v20; // [esp+54h] [ebp-48h]
  _DWORD v21[14]; // [esp+58h] [ebp-44h] BYREF
  int v22; // [esp+98h] [ebp-4h]

  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)v17, 1);
  v22 = 0;
  Font = CREDialog::GetFont(this, 0);
  v6 = Font;
  if ( Font )
  {
    v17[3] = (void *)(*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v6 + 130) + 24))(*((_DWORD *)v6 + 130), v21);
    *((_DWORD *)this + 976) = v21[0];
  }
  if ( *(_DWORD *)(a4 + 24) < 8u )
    v7 = (const wchar_t *)(a4 + 4);
  else
    v7 = *(const wchar_t **)(a4 + 4);
  CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)v17, v7);
  v15 = 0;
  if ( CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)v17, (int)v17[2], (int *)1, &v15) >= 0
    && v15 + 10 > *((_DWORD *)this + 175) )
  {
    *((_DWORD *)this + 175) = v15 + 10;
  }
  v8 = *((_DWORD *)this + 969);
  v9 = (char *)this + 3872;
  if ( v8 )
    v10 = (*((_DWORD *)this + 970) - v8) / 36;
  else
    v10 = 0;
  *((_DWORD *)this + 176) = *((_DWORD *)this + 977) * (v10 + 1);
  std::wstring::wstring(v19);
  LOBYTE(v22) = 1;
  v18 = a3;
  std::wstring::operator=(v19, a4);
  v11 = *((_DWORD *)this + 969);
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    if ( !v11 || i >= (int)(*((_DWORD *)v9 + 2) - v11) / 36 )
    {
      sub_10159060((int)v9, &v18);
      goto LABEL_24;
    }
    if ( (int)i >= a2 )
      break;
  }
  if ( v11 > *((_DWORD *)v9 + 2) )
    invalid_parameter_noinfo();
  v13 = v11 + 36 * i;
  v14 = v13 <= *((_DWORD *)v9 + 2);
  v16[1] = v11;
  if ( !v14 || v13 < *((_DWORD *)v9 + 1) )
    invalid_parameter_noinfo();
  sub_10158E90((int)v16, (int)v9, v13, &v18);
LABEL_24:
  LOBYTE(v22) = 0;
  std::wstring::~wstring(v19);
  v22 = -1;
  CREEditBox::CUniBuffer::~CUniBuffer(v17);
}
