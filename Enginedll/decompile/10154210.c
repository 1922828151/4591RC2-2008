/*
 * func-name: ?Render@CTYVStatic@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10154210
 * callers: none
 * callees: 0x100a25a0, 0x100a5e50, 0x100b55d0, 0x100b6890
 */

void __thiscall CTYVStatic::Render(CTYVStatic *this, struct IDirect3DDevice9 *a2, float a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int *v5; // ebp
  int v6; // ebx
  struct REFontNode *Font; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int i; // edi
  _DWORD *v11; // eax
  wchar_t Buffer[4]; // [esp+18h] [ebp-78h] BYREF
  struct tagRECT rc; // [esp+20h] [ebp-70h] BYREF
  _BYTE v14[4]; // [esp+30h] [ebp-60h] BYREF
  _DWORD *v15; // [esp+34h] [ebp-5Ch] BYREF
  signed int v16; // [esp+44h] [ebp-4Ch]
  unsigned int v17; // [esp+48h] [ebp-48h]
  _DWORD v18[16]; // [esp+4Ch] [ebp-44h] BYREF
  int v19; // [esp+8Ch] [ebp-4h]
  int v20; // [esp+98h] [ebp+8h]

  v19 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v18[15] = &loc_101B4EC3;
  v18[14] = ExceptionList;
  v5 = (unsigned int *)**((_DWORD **)this + 30);
  v6 = 0;
  REBlendColor::Blend((REBlendColor *)(v5 + 29), 0, a3, 1.0);
  if ( v5 )
  {
    Font = CREDialog::GetFont(*((CREDialog **)this + 28), v5[1]);
    if ( Font )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)Font + 130) + 24))(*((_DWORD *)Font + 130), v18);
      v6 = v18[0];
    }
  }
  v5[2] = 1;
  std::wstring::wstring(v14, (char *)this + 532);
  v19 = 0;
  if ( v16 )
  {
    *(_DWORD *)Buffer = *((_DWORD *)this + 176) * ((v16 - 1) / 2);
    v20 = v16;
    v9 = v16 % 2 ? v6 : *((_DWORD *)this + 176);
    v8 = *((_DWORD *)this + 175) + v6 * (v16 / -2) - *(_DWORD *)Buffer;
    SetRect(&rc, *((_DWORD *)this + 41), v9 / -2 + v8, *((_DWORD *)this + 43), v9 / -2 + v8 + v6);
    for ( i = 0; (int)i < v20; ++i )
    {
      if ( i > v16 )
        invalid_parameter_noinfo();
      v11 = v15;
      if ( v17 < 8 )
        v11 = &v15;
      sub_100A25A0(Buffer, (size_t)L"%c", *((_WORD *)v11 + i));
      CREDialog::DrawTextW(*((CREDialog **)this + 28), Buffer, (struct CREElement *)v5, &rc, 0, -1);
      OffsetRect(&rc, 0, v6 + *((_DWORD *)this + 176));
    }
  }
  v19 = -1;
  std::wstring::~wstring(v14);
}
