/*
 * func-name: ??0CTYMenu@@QAE@XZ
 * func-address: 0x10155af0
 * callers: none
 * callees: 0x100ccaf0, 0x100d6d20
 */

CTYMenu *__thiscall CTYMenu::CTYMenu(CTYMenu *this)
{
  struct GUISystem *v2; // eax

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CTYMenu::`vftable';
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  *((_DWORD *)this + 972) = 0;
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 975) = -1;
  *((_DWORD *)this + 976) = 0;
  *((_DWORD *)this + 977) = 0;
  *((_DWORD *)this + 979) = 0;
  *((_DWORD *)this + 980) = 0;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, CTYMenu *))(*(_DWORD *)v2 + 48))(v2, this);
  return this;
}
