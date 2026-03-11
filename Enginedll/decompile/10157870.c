/*
 * func-name: ?AppendText@CFormatedStatic@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@K@Z
 * func-address: 0x10157870
 * callers: none
 * callees: 0x100a5480, 0x100a56d0, 0x100a57a0, 0x100b55d0, 0x10159110
 */

void __thiscall CFormatedStatic::AppendText(int this, _DWORD *a2, int a3)
{
  bool v4; // zf
  int v5; // eax
  struct REFontNode *Font; // eax
  const wchar_t *v7; // eax
  int v8; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v9[28]; // [esp+10h] [ebp-2Ch] BYREF
  int v10; // [esp+2Ch] [ebp-10h] BYREF
  int v11; // [esp+38h] [ebp-4h]

  std::wstring::wstring(v9);
  v11 = 0;
  v8 = a3;
  std::wstring::operator=(v9, a2);
  v4 = *(_DWORD *)(this + 724) == 0;
  v10 = 0;
  if ( !v4 )
    goto LABEL_6;
  v5 = **(_DWORD **)(this + 120);
  if ( v5 )
  {
    Font = CREDialog::GetFont(*(CREDialog **)(this + 112), *(_DWORD *)(v5 + 4));
    if ( Font )
    {
      *(_DWORD *)(this + 724) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
      CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(this + 712));
    }
  }
  if ( *(_DWORD *)(this + 724) )
  {
LABEL_6:
    if ( a2[6] < 8u )
      v7 = (const wchar_t *)(a2 + 1);
    else
      v7 = (const wchar_t *)a2[1];
    CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 712), v7);
    CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(this + 712), a2[5] - 1, (int *)1, &v10);
  }
  sub_10159110(this + 696, &v8);
  v11 = -1;
  std::wstring::~wstring(v9);
}
