/*
 * func-name: ?CheckKey@CInputBox@@AAEXXZ
 * func-address: 0x100b3e00
 * callers: 0x100bfe60
 * callees: 0x100b3c70, 0x100dad30, 0x100dad40, 0x100dad70
 */

void __thiscall CInputBox::CheckKey(CInputBox *this)
{
  int v2; // edi
  Input *v3; // esi
  int v4; // eax
  int KeyName; // eax
  bool v6; // bl
  char v7; // [esp+14h] [ebp-2Ch]
  _BYTE v8[28]; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+3Ch] [ebp-4h]

  v7 = 0;
  if ( GSeconds - *((float *)this + 306) >= 0.300000011920929 )
  {
    v2 = 0;
    v3 = Input::Instance();
    v6 = 0;
    if ( *((int *)this + 304) <= 0
      && ((v2 = (*(int (__thiscall **)(Input *, int))(*(_DWORD *)v3 + 124))(v3, -2)) != 0
       || (v2 = (*(int (__thiscall **)(Input *, int))(*(_DWORD *)v3 + 124))(v3, -1)) != 0)
      || (v4 = *((_DWORD *)this + 304), v4 >= 0)
      && (*(unsigned __int8 (__thiscall **)(Input *, int, _DWORD))(*(_DWORD *)v3 + 84))(v3, v4, 0)
      && (v2 = (*(int (__thiscall **)(Input *, _DWORD))(*(_DWORD *)v3 + 124))(v3, *((_DWORD *)this + 304))) != 0 )
    {
      KeyName = Input::GetKeyName(v8, v2);
      v9 = 0;
      v7 = 1;
      if ( (unsigned __int8)std::operator!=<char>(KeyName, "escape") )
        v6 = 1;
    }
    v9 = -1;
    if ( (v7 & 1) != 0 )
      std::string::~string(v8);
    if ( v6 )
    {
      Input::Bind(v3, *((_DWORD *)this + 175), v2, *((_DWORD *)this + 305));
      CInputBox::UpdateControlKeyName(this);
      ReleaseCapture();
      if ( CREDialog::s_pControlFocus )
      {
        (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
        CREDialog::s_pControlFocus = 0;
      }
    }
  }
}
