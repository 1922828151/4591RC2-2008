/*
 * func-name: ?Render@CMLIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c3250
 * callers: none
 * callees: 0x100b55d0, 0x100c0c50
 */

void __thiscall CMLIMEEditBox::Render(CREDialog **this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  struct REFontNode *Font; // edi
  int v6; // [esp+14h] [ebp-Ch]

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    CMultiLineEB::Render((CMultiLineEB *)this, a2, a3);
    v4 = *((_DWORD *)this[30] + 1);
    if ( v4 )
    {
      Font = CREDialog::GetFont(this[28], *(_DWORD *)(v4 + 4));
      dword_1123E218 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
      dword_1123F65C = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
    }
    if ( *((_BYTE *)this + 92) )
    {
      byte_1123E21C = 1;
      if ( *CMLIMEEditBox::s_CompString )
        (*((void (__thiscall **)(CREDialog **, struct IDirect3DDevice9 *, _DWORD))*this + 45))(this, a2, LODWORD(a3));
      if ( CMLIMEEditBox::s_bShowReadingWindow )
      {
        v6 = 1;
      }
      else
      {
        if ( !byte_1123F680 )
          return;
        v6 = 0;
      }
      (*((void (__thiscall **)(CREDialog **, struct IDirect3DDevice9 *, _DWORD, int))*this + 44))(
        this,
        a2,
        LODWORD(a3),
        v6);
    }
  }
}
