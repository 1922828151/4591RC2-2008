/*
 * func-name: ?RegisterAsWindow@GUISystem@@UAEPAVCGUIWindow@@PAVCREDialog@@@Z
 * func-address: 0x100d7510
 * callers: none
 * callees: 0x100d9c10, 0x101a2534
 */

struct CGUIWindow *__thiscall GUISystem::RegisterAsWindow(GUISystem *this, struct CREDialog *a2)
{
  _DWORD *v3; // esi
  _BYTE v5[28]; // [esp+Ch] [ebp-28h] BYREF
  int v6; // [esp+30h] [ebp-4h]

  v3 = operator new(8u);
  v6 = 0;
  if ( v3 )
  {
    std::string::string(v5, "Auto");
    v3[1] = a2;
    *(_BYTE *)v3 = 0;
    *((_BYTE *)v3 + 1) = 1;
    *((_BYTE *)v3 + 2) = 1;
    std::string::~string(v5);
  }
  else
  {
    v3 = 0;
  }
  v6 = -1;
  a2 = (struct CREDialog *)v3;
  sub_100D9C10((int)this + 16, (int)&a2);
  return (struct CGUIWindow *)v3;
}
