/*
 * func-name: ??1CLoginUI@@UAE@XZ_0
 * func-address: 0x10276540
 * callers: 0x1000e0ed
 * callees: 0x102beea0, 0x102c8d66, 0x102c9ea8
 */

void __thiscall CLoginUI::~CLoginUI(CLoginUI *this)
{
  struct CREControl *Control; // eax
  const char *v3; // eax
  int v4; // eax
  void *v5; // [esp-Ch] [ebp-78h]
  const wchar_t *v6; // [esp-4h] [ebp-70h]
  _BYTE v7[28]; // [esp+Ch] [ebp-60h] BYREF
  int v8[7]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v9[28]; // [esp+44h] [ebp-28h] BYREF
  int v10; // [esp+68h] [ebp-4h]

  *(_DWORD *)this = &CLoginUI::`vftable';
  v10 = 0;
  Control = CREDialog::GetControl(this, 4);
  if ( *(_BYTE *)(_RTDynamicCast(Control, 0, &CREControl `RTTI Type Descriptor', &CRECheckBox `RTTI Type Descriptor')
                + 816) )
  {
    std::string::string(v9, "Game.Networking");
    v6 = *(const wchar_t **)(*((_DWORD *)this + 968) + 532);
    LOBYTE(v10) = 1;
    v3 = wtoa(v6);
    std::string::string(v8, v3);
    LOBYTE(v10) = 2;
    std::string::string(v7, "LastAccount");
    LOBYTE(v10) = 3;
    v4 = Engine::Instance(v7);
    sub_102BEEA0(*(_DWORD *)(v4 + 116), v5, (int)v8, v9);
    LOBYTE(v10) = 2;
    std::string::~string(v7);
    LOBYTE(v10) = 1;
    std::string::~string(v8);
    LOBYTE(v10) = 0;
    std::string::~string(v9);
  }
  v10 = -1;
  CTYDialog::~CTYDialog(this);
}
