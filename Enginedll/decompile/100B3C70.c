/*
 * func-name: ?UpdateControlKeyName@CInputBox@@AAEXXZ
 * func-address: 0x100b3c70
 * callers: 0x100b3e00, 0x100b4990
 * callees: 0x100cee30, 0x100dad30, 0x100db4d0, 0x100db790
 */

void __thiscall CInputBox::UpdateControlKeyName(CInputBox *this)
{
  const wchar_t *v2; // eax
  int v3; // edx
  wchar_t v4; // cx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  __int16 *v8; // ecx
  _WORD *v9; // edx
  __int16 v10; // ax
  _DWORD *v11; // eax
  int v12; // eax
  __int16 *v13; // ecx
  _WORD *v14; // edx
  __int16 v15; // ax
  char v16; // [esp-20h] [ebp-90h] BYREF
  int v17; // [esp-1Ch] [ebp-8Ch]
  int v18; // [esp-18h] [ebp-88h]
  int v19; // [esp-14h] [ebp-84h]
  int v20; // [esp-10h] [ebp-80h]
  int v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp-8h] [ebp-78h]
  _BYTE *v23; // [esp-4h] [ebp-74h]
  _BYTE *v24; // [esp+0h] [ebp-70h]
  char *v25; // [esp+Ch] [ebp-64h]
  _BYTE v26[4]; // [esp+10h] [ebp-60h] BYREF
  _DWORD v27[6]; // [esp+14h] [ebp-5Ch] BYREF
  _BYTE v28[4]; // [esp+2Ch] [ebp-44h] BYREF
  _DWORD v29[6]; // [esp+30h] [ebp-40h] BYREF
  _BYTE v30[28]; // [esp+48h] [ebp-28h] BYREF
  int v31; // [esp+6Ch] [ebp-4h]

  if ( *((_DWORD *)this + 175) == -1 )
  {
    v2 = L"INVALIDHANDLE";
    v3 = (CInputBox *)((char *)this + 704) - (CInputBox *)L"INVALIDHANDLE";
    do
    {
      v4 = *v2;
      *(const wchar_t *)((char *)v2 + v3) = *v2;
      ++v2;
    }
    while ( v4 );
  }
  else
  {
    Input::Instance();
    std::string::string(v28);
    v31 = 0;
    std::string::string(v26);
    v24 = v26;
    v5 = *((_DWORD *)this + 175);
    v23 = v28;
    v25 = &v16;
    LOBYTE(v31) = 1;
    Input::GetControlName(&v16, v5);
    Input::GetBoundKeys(v16, v17, v18, v19, v20, v21, v22, v23, v24);
    if ( *((_DWORD *)this + 305) )
    {
      v6 = (_DWORD *)v27[0];
      if ( v27[5] < 0x10u )
        v6 = v27;
      v7 = sub_100CEE30(v30, v6);
      if ( *(_DWORD *)(v7 + 24) < 8u )
        v8 = (__int16 *)(v7 + 4);
      else
        v8 = *(__int16 **)(v7 + 4);
      v9 = (_WORD *)((char *)this + 704);
      do
      {
        v10 = *v8;
        *v9++ = *v8++;
      }
      while ( v10 );
    }
    else
    {
      v11 = (_DWORD *)v29[0];
      if ( v29[5] < 0x10u )
        v11 = v29;
      v12 = sub_100CEE30(v30, v11);
      if ( *(_DWORD *)(v12 + 24) < 8u )
        v13 = (__int16 *)(v12 + 4);
      else
        v13 = *(__int16 **)(v12 + 4);
      v14 = (_WORD *)((char *)this + 704);
      do
      {
        v15 = *v13;
        *v14++ = *v13++;
      }
      while ( v15 );
    }
    std::wstring::~wstring(v30);
    LOBYTE(v31) = 0;
    std::string::~string(v26);
    v31 = -1;
    std::string::~string(v28);
  }
  if ( *((_DWORD *)this + 20) )
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 20) + 36))(0, *((float *)this + 40));
}
