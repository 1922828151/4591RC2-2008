/*
 * func-name: ?AddLine@CTYMenu@@QAEXHHABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0PAUtagRECT@@@Z
 * func-address: 0x10157630
 * callers: none
 * callees: 0x100a5500, 0x100a5550, 0x100a56d0, 0x100a57a0, 0x100a5f30, 0x100b55d0, 0x10158e90, 0x10159060, 0x101a2534
 */

void __thiscall CTYMenu::AddLine(CREDialog *this, int a2, int a3, int a4, int a5, struct tagRECT *a6)
{
  struct REFontNode *Font; // eax
  struct REFontNode *v8; // esi
  const wchar_t *v9; // eax
  int v10; // eax
  char *v11; // esi
  int v12; // eax
  CREElement *v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int i; // edi
  unsigned int v18; // edi
  bool v19; // cc
  int v20; // [esp+10h] [ebp-8Ch] BYREF
  int v21[2]; // [esp+14h] [ebp-88h] BYREF
  void *v22[6]; // [esp+1Ch] [ebp-80h] BYREF
  int v23; // [esp+34h] [ebp-68h] BYREF
  _BYTE v24[28]; // [esp+38h] [ebp-64h] BYREF
  CREElement *v25; // [esp+54h] [ebp-48h]
  _DWORD v26[14]; // [esp+58h] [ebp-44h] BYREF
  int v27; // [esp+98h] [ebp-4h]

  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)v22, 1);
  v27 = 0;
  Font = CREDialog::GetFont(this, 0);
  v8 = Font;
  if ( Font )
  {
    v22[3] = (void *)(*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v8 + 130) + 24))(*((_DWORD *)v8 + 130), v26);
    *((_DWORD *)this + 976) = v26[0];
  }
  if ( *(_DWORD *)(a4 + 24) < 8u )
    v9 = (const wchar_t *)(a4 + 4);
  else
    v9 = *(const wchar_t **)(a4 + 4);
  CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)v22, v9);
  v20 = 0;
  if ( CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)v22, (int)v22[2], (int *)1, &v20) >= 0
    && v20 + 10 > *((_DWORD *)this + 175) )
  {
    *((_DWORD *)this + 175) = v20 + 10;
  }
  v10 = *((_DWORD *)this + 969);
  v11 = (char *)this + 3872;
  if ( v10 )
    v12 = (*((_DWORD *)this + 970) - v10) / 36;
  else
    v12 = 0;
  *((_DWORD *)this + 176) = *((_DWORD *)this + 977) * (v12 + 1);
  std::wstring::wstring(v24);
  LOBYTE(v27) = 1;
  v23 = a3;
  std::wstring::operator=(v24, a4);
  v13 = (CREElement *)operator new(0xC4u);
  if ( v13 )
  {
    *((_BYTE *)v13 + 28) = 0;
    *(_DWORD *)v13 = -1;
  }
  else
  {
    v13 = 0;
  }
  v25 = v13;
  if ( *(_DWORD *)(a5 + 24) < 8u )
    v14 = a5 + 4;
  else
    v14 = *(_DWORD *)(a5 + 4);
  v15 = (*(int (__thiscall **)(CREDialog *, int))(*(_DWORD *)this + 20))(this, v14);
  CREElement::SetTexture(v25, v15, a6, 0xFFFFFFFF);
  v16 = *((_DWORD *)this + 969);
  for ( i = 0; ; ++i )
  {
    if ( !v16 || i >= (int)(*((_DWORD *)v11 + 2) - v16) / 36 )
    {
      sub_10159060((int)v11, &v23);
      goto LABEL_30;
    }
    if ( (int)i >= a2 )
      break;
  }
  if ( v16 > *((_DWORD *)v11 + 2) )
    invalid_parameter_noinfo();
  v18 = v16 + 36 * i;
  v19 = v18 <= *((_DWORD *)v11 + 2);
  v21[1] = v16;
  if ( !v19 || v18 < *((_DWORD *)v11 + 1) )
    invalid_parameter_noinfo();
  sub_10158E90((int)v21, (int)v11, v18, &v23);
LABEL_30:
  LOBYTE(v27) = 0;
  std::wstring::~wstring(v24);
  v27 = -1;
  CREEditBox::CUniBuffer::~CUniBuffer(v22);
}
